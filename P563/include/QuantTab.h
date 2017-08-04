/********************************************************************
ITU-T Draft Recommendation P.563
Version 1.0 - 23 March 2004
Version 1.1 - 04 October 2005

NOTICE

The Single Ended Assessment Model P.563 algorithm and the copyright therein
is the joint property of Psytechnics Limited, OPTICOM GmbH and SwissQual AG
and is protected by UK, US and other patents, either applied for or
registered.
Permission is granted to use this source code solely for the purpose of
evaluation of ITU-T recommendation P.563.
Any other use of this software requires a licence, which may be obtained
from:

OPTICOM GmbH 
Naegelsbachstrasse 38, D- 91052 Erlangen, Germany 
Phone: +49 9131 53 020 0		Fax: +49 9131 53 020 20  
E-mail: info@opticom.de         www.3sqm.com  

Psytechnics Limited
Fraser House, 23 Museum Street, Ipswich, IP1 1HN, UK
Phone: +44 1 473 261 800  Fax: +44 1 473 261 880
E-mail: info@psytechnics.com    www.psytechnics.com

SwissQual AG
Gewerbestrasse 2 CH-4528 Zuchwil, Switzerland
Phone: +41 32 685 08 30   Fax: +41 32 685 08 31
E-mail: sales@swissqual.com     www.swissqual.com

Psytechnics, SwissQual or Opticom can provide licences and further
information.

Authors:
      Ludovic Malfait ludovic.malfait@psytechnics.com
      Roland Bitto rb@opticom.de
      Pero Juric pero.juric@swissqual.com

********************************************************************/


#ifndef OPQUANT_TAB_H
#define OPQUANT_TAB_H

static FLOAT pfCodebook1[][LPCORDER] = {
{(FLOAT)0.2832, (FLOAT)0.3540, (FLOAT)0.6080, (FLOAT)0.8467, (FLOAT)1.0259, (FLOAT)1.6467, (FLOAT)1.8987, (FLOAT)1.9875, (FLOAT)2.4744, (FLOAT)2.5527},
{(FLOAT)0.5064, (FLOAT)0.7481, (FLOAT)1.1021, (FLOAT)1.3271, (FLOAT)1.5486, (FLOAT)1.7096, (FLOAT)1.9503, (FLOAT)2.1006, (FLOAT)2.3911, (FLOAT)2.5141},
{(FLOAT)0.3481, (FLOAT)0.4494, (FLOAT)0.6446, (FLOAT)0.9336, (FLOAT)1.1198, (FLOAT)1.2620, (FLOAT)1.8264, (FLOAT)1.9712, (FLOAT)2.1435, (FLOAT)2.2552},
{(FLOAT)0.2340, (FLOAT)0.3605, (FLOAT)0.7659, (FLOAT)0.9874, (FLOAT)1.1854, (FLOAT)1.3337, (FLOAT)1.5128, (FLOAT)2.0062, (FLOAT)2.4427, (FLOAT)2.5859},
{(FLOAT)0.2835, (FLOAT)0.3752, (FLOAT)0.5234, (FLOAT)0.9898, (FLOAT)1.1484, (FLOAT)1.2974, (FLOAT)1.9363, (FLOAT)2.0378, (FLOAT)2.4065, (FLOAT)2.6214},
{(FLOAT)0.1460, (FLOAT)0.2254, (FLOAT)0.3790, (FLOAT)0.8622, (FLOAT)1.3394, (FLOAT)1.5754, (FLOAT)1.8084, (FLOAT)2.0798, (FLOAT)2.4319, (FLOAT)2.7632},
{(FLOAT)0.1050, (FLOAT)0.2325, (FLOAT)0.7445, (FLOAT)0.9491, (FLOAT)1.1982, (FLOAT)1.4658, (FLOAT)1.8093, (FLOAT)2.0397, (FLOAT)2.4155, (FLOAT)2.5797},
{(FLOAT)0.2043, (FLOAT)0.3324, (FLOAT)0.4522, (FLOAT)0.7477, (FLOAT)0.9361, (FLOAT)1.1533, (FLOAT)1.6703, (FLOAT)1.7631, (FLOAT)2.5071, (FLOAT)2.6528},
{(FLOAT)0.1449, (FLOAT)0.2719, (FLOAT)0.5783, (FLOAT)0.8807, (FLOAT)1.1746, (FLOAT)1.5422, (FLOAT)1.8804, (FLOAT)2.1934, (FLOAT)2.4734, (FLOAT)2.8728},
{(FLOAT)0.3847, (FLOAT)0.5973, (FLOAT)0.7202, (FLOAT)0.8787, (FLOAT)1.3938, (FLOAT)1.5959, (FLOAT)1.8463, (FLOAT)2.1574, (FLOAT)2.5050, (FLOAT)2.6687},
{(FLOAT)0.3334, (FLOAT)0.5701, (FLOAT)0.8622, (FLOAT)1.1232, (FLOAT)1.3851, (FLOAT)1.6767, (FLOAT)2.0600, (FLOAT)2.2946, (FLOAT)2.5375, (FLOAT)2.7295},
{(FLOAT)0.2677, (FLOAT)0.3871, (FLOAT)0.5746, (FLOAT)0.7091, (FLOAT)1.3311, (FLOAT)1.5260, (FLOAT)1.7288, (FLOAT)1.9122, (FLOAT)2.5787, (FLOAT)2.6598},
{(FLOAT)0.2282, (FLOAT)0.3093, (FLOAT)0.4243, (FLOAT)0.5329, (FLOAT)1.1173, (FLOAT)1.7717, (FLOAT)1.9420, (FLOAT)2.0780, (FLOAT)2.5160, (FLOAT)2.6137},
{(FLOAT)0.1818, (FLOAT)0.2886, (FLOAT)0.4018, (FLOAT)0.7630, (FLOAT)1.1264, (FLOAT)1.2699, (FLOAT)1.6899, (FLOAT)1.8650, (FLOAT)2.1633, (FLOAT)2.6186},
{(FLOAT)0.3975, (FLOAT)0.5849, (FLOAT)0.8059, (FLOAT)0.9182, (FLOAT)1.0552, (FLOAT)1.1850, (FLOAT)1.6356, (FLOAT)1.9627, (FLOAT)2.3318, (FLOAT)2.4719},
{(FLOAT)0.2244, (FLOAT)0.3169, (FLOAT)0.4368, (FLOAT)0.5625, (FLOAT)0.6897, (FLOAT)1.3763, (FLOAT)1.7524, (FLOAT)1.9393, (FLOAT)2.5121, (FLOAT)2.6556},
{(FLOAT)0.1761, (FLOAT)0.2672, (FLOAT)0.4065, (FLOAT)0.8317, (FLOAT)1.0900, (FLOAT)1.4814, (FLOAT)1.7672, (FLOAT)1.8685, (FLOAT)2.3969, (FLOAT)2.5079},
{(FLOAT)0.2685, (FLOAT)0.3518, (FLOAT)0.5707, (FLOAT)1.0410, (FLOAT)1.2270, (FLOAT)1.3927, (FLOAT)1.7622, (FLOAT)1.8876, (FLOAT)2.0985, (FLOAT)2.5144},
{(FLOAT)0.2470, (FLOAT)0.3275, (FLOAT)0.4729, (FLOAT)1.0093, (FLOAT)1.2519, (FLOAT)1.4216, (FLOAT)1.8540, (FLOAT)2.0877, (FLOAT)2.3151, (FLOAT)2.4156},
{(FLOAT)0.3387, (FLOAT)0.4415, (FLOAT)0.6121, (FLOAT)0.8005, (FLOAT)0.9507, (FLOAT)1.0937, (FLOAT)2.0836, (FLOAT)2.2342, (FLOAT)2.3849, (FLOAT)2.5076},
{(FLOAT)0.3329, (FLOAT)0.4131, (FLOAT)0.8073, (FLOAT)1.1297, (FLOAT)1.2869, (FLOAT)1.4937, (FLOAT)1.7885, (FLOAT)1.9150, (FLOAT)2.4505, (FLOAT)2.5760},
{(FLOAT)0.2793, (FLOAT)0.4282, (FLOAT)0.6149, (FLOAT)0.8352, (FLOAT)1.0106, (FLOAT)1.1766, (FLOAT)1.8392, (FLOAT)2.0119, (FLOAT)2.6433, (FLOAT)2.7117},
{(FLOAT)0.2171, (FLOAT)0.3282, (FLOAT)0.4412, (FLOAT)0.5713, (FLOAT)1.1554, (FLOAT)1.3506, (FLOAT)1.5227, (FLOAT)1.9923, (FLOAT)2.4100, (FLOAT)2.5391},
{(FLOAT)0.1591, (FLOAT)0.2387, (FLOAT)0.2924, (FLOAT)0.4056, (FLOAT)1.4677, (FLOAT)1.6802, (FLOAT)1.9389, (FLOAT)2.2067, (FLOAT)2.4635, (FLOAT)2.5919},
{(FLOAT)0.4276, (FLOAT)0.4946, (FLOAT)0.6934, (FLOAT)0.8308, (FLOAT)0.9944, (FLOAT)1.4582, (FLOAT)2.0324, (FLOAT)2.1294, (FLOAT)2.4891, (FLOAT)2.6324},
{(FLOAT)0.2101, (FLOAT)0.3146, (FLOAT)0.6779, (FLOAT)0.8783, (FLOAT)1.0561, (FLOAT)1.3045, (FLOAT)1.8395, (FLOAT)2.0695, (FLOAT)2.2831, (FLOAT)2.4328},
{(FLOAT)0.1963, (FLOAT)0.2900, (FLOAT)0.4131, (FLOAT)0.8397, (FLOAT)1.2171, (FLOAT)1.3705, (FLOAT)2.0665, (FLOAT)2.1546, (FLOAT)2.4640, (FLOAT)2.5782},
{(FLOAT)0.2332, (FLOAT)0.3263, (FLOAT)0.4174, (FLOAT)0.5202, (FLOAT)1.3633, (FLOAT)1.8447, (FLOAT)2.0236, (FLOAT)2.1474, (FLOAT)2.3572, (FLOAT)2.4738},
{(FLOAT)0.2129, (FLOAT)0.2974, (FLOAT)0.4039, (FLOAT)1.0659, (FLOAT)1.2735, (FLOAT)1.4658, (FLOAT)1.9061, (FLOAT)2.0312, (FLOAT)2.6074, (FLOAT)2.6750},
{(FLOAT)0.5190, (FLOAT)0.6764, (FLOAT)0.8123, (FLOAT)1.0154, (FLOAT)1.2085, (FLOAT)1.4266, (FLOAT)1.8433, (FLOAT)2.0866, (FLOAT)2.5113, (FLOAT)2.6474},
{(FLOAT)0.2231, (FLOAT)0.3192, (FLOAT)0.4256, (FLOAT)0.7373, (FLOAT)1.4831, (FLOAT)1.6874, (FLOAT)1.9765, (FLOAT)2.1097, (FLOAT)2.6152, (FLOAT)2.6906},
{(FLOAT)0.1754, (FLOAT)0.2716, (FLOAT)0.3361, (FLOAT)0.5550, (FLOAT)1.1789, (FLOAT)1.3728, (FLOAT)1.8527, (FLOAT)1.9919, (FLOAT)2.1349, (FLOAT)2.3359},
{(FLOAT)0.3726, (FLOAT)0.4602, (FLOAT)0.5971, (FLOAT)0.7093, (FLOAT)0.8517, (FLOAT)1.2361, (FLOAT)1.8052, (FLOAT)1.9520, (FLOAT)2.4137, (FLOAT)2.5518},
{(FLOAT)0.2294, (FLOAT)0.3070, (FLOAT)0.5490, (FLOAT)0.9244, (FLOAT)1.2229, (FLOAT)1.8248, (FLOAT)1.9704, (FLOAT)2.0627, (FLOAT)2.2458, (FLOAT)2.3653},
{(FLOAT)0.1862, (FLOAT)0.2759, (FLOAT)0.4715, (FLOAT)0.6908, (FLOAT)0.8963, (FLOAT)1.4341, (FLOAT)1.6322, (FLOAT)1.7630, (FLOAT)2.2027, (FLOAT)2.6043},
{(FLOAT)0.2108, (FLOAT)0.2910, (FLOAT)0.4993, (FLOAT)0.7695, (FLOAT)0.9528, (FLOAT)1.5681, (FLOAT)1.7838, (FLOAT)2.1495, (FLOAT)2.3522, (FLOAT)2.4636},
{(FLOAT)0.2154, (FLOAT)0.3075, (FLOAT)0.4746, (FLOAT)0.8477, (FLOAT)1.1170, (FLOAT)1.5369, (FLOAT)1.9847, (FLOAT)2.0733, (FLOAT)2.1880, (FLOAT)2.2504},
{(FLOAT)0.2528, (FLOAT)0.3693, (FLOAT)0.5290, (FLOAT)0.7146, (FLOAT)0.9528, (FLOAT)1.1269, (FLOAT)1.2936, (FLOAT)1.9589, (FLOAT)2.4548, (FLOAT)2.6653},
{(FLOAT)0.2229, (FLOAT)0.3876, (FLOAT)0.8621, (FLOAT)1.1986, (FLOAT)1.5655, (FLOAT)1.8861, (FLOAT)2.2376, (FLOAT)2.4239, (FLOAT)2.6648, (FLOAT)2.7359},
{(FLOAT)0.3203, (FLOAT)0.4285, (FLOAT)0.5467, (FLOAT)0.6891, (FLOAT)1.2039, (FLOAT)1.3569, (FLOAT)1.8578, (FLOAT)2.2055, (FLOAT)2.3906, (FLOAT)2.4881},
{(FLOAT)0.1562, (FLOAT)0.2393, (FLOAT)0.4786, (FLOAT)0.9513, (FLOAT)1.2395, (FLOAT)1.8010, (FLOAT)2.0320, (FLOAT)2.2143, (FLOAT)2.5243, (FLOAT)2.6204},
{(FLOAT)0.1704, (FLOAT)0.2633, (FLOAT)0.3259, (FLOAT)0.4134, (FLOAT)1.2948, (FLOAT)1.4802, (FLOAT)1.6619, (FLOAT)2.0393, (FLOAT)2.3165, (FLOAT)2.6083},
{(FLOAT)0.4482, (FLOAT)0.5318, (FLOAT)0.7114, (FLOAT)0.8542, (FLOAT)1.0328, (FLOAT)1.4751, (FLOAT)1.7278, (FLOAT)1.8237, (FLOAT)2.3496, (FLOAT)2.4931},
{(FLOAT)0.2529, (FLOAT)0.3251, (FLOAT)0.5147, (FLOAT)1.1530, (FLOAT)1.3291, (FLOAT)1.5005, (FLOAT)1.7028, (FLOAT)1.8200, (FLOAT)2.3482, (FLOAT)2.4831},
{(FLOAT)0.3603, (FLOAT)0.4604, (FLOAT)0.5955, (FLOAT)0.9251, (FLOAT)1.1006, (FLOAT)1.2572, (FLOAT)1.7688, (FLOAT)1.8607, (FLOAT)2.4687, (FLOAT)2.5623},
{(FLOAT)0.2346, (FLOAT)0.3321, (FLOAT)0.5621, (FLOAT)0.8160, (FLOAT)1.4042, (FLOAT)1.5860, (FLOAT)1.7518, (FLOAT)1.8631, (FLOAT)2.0749, (FLOAT)2.5380},
{(FLOAT)0.2125, (FLOAT)0.3041, (FLOAT)0.4259, (FLOAT)0.9935, (FLOAT)1.1788, (FLOAT)1.3615, (FLOAT)1.6121, (FLOAT)1.7930, (FLOAT)2.5509, (FLOAT)2.6742},
{(FLOAT)0.3666, (FLOAT)0.4638, (FLOAT)0.6496, (FLOAT)0.7858, (FLOAT)0.9667, (FLOAT)1.4213, (FLOAT)1.9300, (FLOAT)2.0564, (FLOAT)2.2119, (FLOAT)2.3170},
{(FLOAT)0.4560, (FLOAT)0.5403, (FLOAT)0.7568, (FLOAT)0.8989, (FLOAT)1.1292, (FLOAT)1.7687, (FLOAT)1.9575, (FLOAT)2.0784, (FLOAT)2.4260, (FLOAT)2.5484},
{(FLOAT)0.2198, (FLOAT)0.3072, (FLOAT)0.4090, (FLOAT)0.6371, (FLOAT)1.6365, (FLOAT)1.9468, (FLOAT)2.1507, (FLOAT)2.2633, (FLOAT)2.5063, (FLOAT)2.5943},
{(FLOAT)0.2972, (FLOAT)0.4470, (FLOAT)0.5941, (FLOAT)0.7078, (FLOAT)1.2675, (FLOAT)1.4310, (FLOAT)1.5930, (FLOAT)1.9126, (FLOAT)2.3026, (FLOAT)2.4208},
{(FLOAT)0.2505, (FLOAT)0.3368, (FLOAT)0.4758, (FLOAT)0.6405, (FLOAT)0.8104, (FLOAT)1.2533, (FLOAT)1.9329, (FLOAT)2.0526, (FLOAT)2.2155, (FLOAT)2.6459},
{(FLOAT)0.4131, (FLOAT)0.5330, (FLOAT)0.6530, (FLOAT)0.9360, (FLOAT)1.3648, (FLOAT)1.5388, (FLOAT)1.6994, (FLOAT)1.8707, (FLOAT)2.4294, (FLOAT)2.5335},
{(FLOAT)0.2621, (FLOAT)0.3792, (FLOAT)0.5463, (FLOAT)0.7948, (FLOAT)1.0043, (FLOAT)1.1921, (FLOAT)1.3409, (FLOAT)1.4845, (FLOAT)2.3159, (FLOAT)2.6002},
{(FLOAT)0.4994, (FLOAT)0.6575, (FLOAT)0.8365, (FLOAT)1.0706, (FLOAT)1.4116, (FLOAT)1.6224, (FLOAT)1.9200, (FLOAT)2.0667, (FLOAT)2.3262, (FLOAT)2.4539},
{(FLOAT)0.2010, (FLOAT)0.2791, (FLOAT)0.3796, (FLOAT)0.8845, (FLOAT)1.4030, (FLOAT)1.5615, (FLOAT)2.0538, (FLOAT)2.1567, (FLOAT)2.3171, (FLOAT)2.4686},
{(FLOAT)0.4602, (FLOAT)0.6503, (FLOAT)0.9602, (FLOAT)1.1427, (FLOAT)1.3043, (FLOAT)1.4427, (FLOAT)1.6676, (FLOAT)1.8758, (FLOAT)2.2868, (FLOAT)2.4271},
{(FLOAT)0.2916, (FLOAT)0.3684, (FLOAT)0.5907, (FLOAT)1.1394, (FLOAT)1.3933, (FLOAT)1.5540, (FLOAT)1.8341, (FLOAT)1.9835, (FLOAT)2.1301, (FLOAT)2.2800},
{(FLOAT)0.2274, (FLOAT)0.3157, (FLOAT)0.4263, (FLOAT)0.8202, (FLOAT)1.4293, (FLOAT)1.5884, (FLOAT)1.7535, (FLOAT)1.9688, (FLOAT)2.3939, (FLOAT)2.4934},
{(FLOAT)0.2467, (FLOAT)0.3180, (FLOAT)0.4712, (FLOAT)1.1281, (FLOAT)1.6206, (FLOAT)1.7876, (FLOAT)1.9544, (FLOAT)2.0873, (FLOAT)2.3521, (FLOAT)2.4721},
{(FLOAT)0.3747, (FLOAT)0.5263, (FLOAT)0.7284, (FLOAT)0.8994, (FLOAT)1.4017, (FLOAT)1.5502, (FLOAT)1.7468, (FLOAT)1.9816, (FLOAT)2.2380, (FLOAT)2.3404},
{(FLOAT)0.2155, (FLOAT)0.3221, (FLOAT)0.4580, (FLOAT)0.6995, (FLOAT)0.9623, (FLOAT)1.2339, (FLOAT)1.6642, (FLOAT)1.8823, (FLOAT)2.0518, (FLOAT)2.2674},
{(FLOAT)0.2614, (FLOAT)0.3707, (FLOAT)0.5241, (FLOAT)0.7425, (FLOAT)0.9269, (FLOAT)1.2976, (FLOAT)2.0945, (FLOAT)2.2014, (FLOAT)2.6204, (FLOAT)2.6959},
{(FLOAT)0.2036, (FLOAT)0.3189, (FLOAT)0.4314, (FLOAT)0.6393, (FLOAT)1.2834, (FLOAT)1.4278, (FLOAT)1.5796, (FLOAT)2.0506, (FLOAT)2.2044, (FLOAT)2.3656},
{(FLOAT)0.4224, (FLOAT)0.7009, (FLOAT)1.1714, (FLOAT)1.4334, (FLOAT)1.7595, (FLOAT)1.9629, (FLOAT)2.2185, (FLOAT)2.3304, (FLOAT)2.5446, (FLOAT)2.6369},
{(FLOAT)0.2333, (FLOAT)0.3024, (FLOAT)0.4780, (FLOAT)1.2327, (FLOAT)1.4180, (FLOAT)1.5815, (FLOAT)1.9804, (FLOAT)2.0921, (FLOAT)2.3524, (FLOAT)2.5304},
{(FLOAT)0.1968, (FLOAT)0.2789, (FLOAT)0.3594, (FLOAT)0.4361, (FLOAT)1.0034, (FLOAT)1.7040, (FLOAT)1.9439, (FLOAT)2.1044, (FLOAT)2.2696, (FLOAT)2.4558},
{(FLOAT)0.2960, (FLOAT)0.4001, (FLOAT)0.6465, (FLOAT)0.7672, (FLOAT)1.3782, (FLOAT)1.5751, (FLOAT)1.9559, (FLOAT)2.1373, (FLOAT)2.3601, (FLOAT)2.4760},
{(FLOAT)0.2690, (FLOAT)0.3711, (FLOAT)0.4635, (FLOAT)0.6644, (FLOAT)1.4633, (FLOAT)1.6495, (FLOAT)1.8227, (FLOAT)1.9983, (FLOAT)2.1797, (FLOAT)2.2954},
{(FLOAT)0.2086, (FLOAT)0.3053, (FLOAT)0.4047, (FLOAT)0.8224, (FLOAT)1.0656, (FLOAT)1.2115, (FLOAT)1.9641, (FLOAT)2.0871, (FLOAT)2.2430, (FLOAT)2.4313},
{(FLOAT)0.0829, (FLOAT)0.1723, (FLOAT)0.5682, (FLOAT)0.9773, (FLOAT)1.3973, (FLOAT)1.6174, (FLOAT)1.9242, (FLOAT)2.2128, (FLOAT)2.4855, (FLOAT)2.6327},
{(FLOAT)0.3682, (FLOAT)0.4632, (FLOAT)0.6600, (FLOAT)0.9118, (FLOAT)1.5245, (FLOAT)1.7071, (FLOAT)1.8712, (FLOAT)1.9939, (FLOAT)2.4356, (FLOAT)2.5380},
{(FLOAT)0.2979, (FLOAT)0.4242, (FLOAT)0.8224, (FLOAT)1.0564, (FLOAT)1.4881, (FLOAT)1.7808, (FLOAT)2.0898, (FLOAT)2.1882, (FLOAT)2.3328, (FLOAT)2.4389},
{(FLOAT)0.1393, (FLOAT)0.2216, (FLOAT)0.3204, (FLOAT)0.5644, (FLOAT)0.7929, (FLOAT)1.1705, (FLOAT)1.7051, (FLOAT)2.0054, (FLOAT)2.3623, (FLOAT)2.5985},
{(FLOAT)0.2573, (FLOAT)0.3508, (FLOAT)0.4484, (FLOAT)0.7079, (FLOAT)1.6577, (FLOAT)1.7929, (FLOAT)1.9456, (FLOAT)2.0847, (FLOAT)2.3060, (FLOAT)2.4208},
{(FLOAT)0.1915, (FLOAT)0.2755, (FLOAT)0.3770, (FLOAT)0.5950, (FLOAT)1.3505, (FLOAT)1.6349, (FLOAT)2.2348, (FLOAT)2.3552, (FLOAT)2.5768, (FLOAT)2.6540},
{(FLOAT)0.1570, (FLOAT)0.2328, (FLOAT)0.3111, (FLOAT)0.4216, (FLOAT)1.1688, (FLOAT)1.4605, (FLOAT)1.9505, (FLOAT)2.1173, (FLOAT)2.4038, (FLOAT)2.7460},
{(FLOAT)0.3114, (FLOAT)0.4142, (FLOAT)0.6476, (FLOAT)0.8448, (FLOAT)1.2495, (FLOAT)1.7192, (FLOAT)2.2148, (FLOAT)2.3432, (FLOAT)2.5246, (FLOAT)2.6046},
{(FLOAT)0.5185, (FLOAT)0.7316, (FLOAT)0.9708, (FLOAT)1.1954, (FLOAT)1.5066, (FLOAT)1.7887, (FLOAT)2.1396, (FLOAT)2.2918, (FLOAT)2.5429, (FLOAT)2.6489},
{(FLOAT)0.3074, (FLOAT)0.4192, (FLOAT)0.5772, (FLOAT)0.7799, (FLOAT)0.9866, (FLOAT)1.1335, (FLOAT)1.6068, (FLOAT)2.2441, (FLOAT)2.4194, (FLOAT)2.5089},
{(FLOAT)0.2955, (FLOAT)0.3853, (FLOAT)0.7986, (FLOAT)1.2470, (FLOAT)1.4723, (FLOAT)1.6522, (FLOAT)1.8684, (FLOAT)2.0084, (FLOAT)2.2849, (FLOAT)2.4268},
{(FLOAT)0.2447, (FLOAT)0.3535, (FLOAT)0.4618, (FLOAT)0.5979, (FLOAT)0.7530, (FLOAT)0.8908, (FLOAT)1.5393, (FLOAT)2.0075, (FLOAT)2.3557, (FLOAT)2.6203},
{(FLOAT)0.3132, (FLOAT)0.4613, (FLOAT)0.6544, (FLOAT)0.8532, (FLOAT)1.0721, (FLOAT)1.2730, (FLOAT)1.7566, (FLOAT)1.9217, (FLOAT)2.1693, (FLOAT)2.6531},
{(FLOAT)0.2196, (FLOAT)0.3049, (FLOAT)0.6857, (FLOAT)1.3976, (FLOAT)1.6100, (FLOAT)1.7958, (FLOAT)2.0813, (FLOAT)2.2211, (FLOAT)2.4789, (FLOAT)2.5857},
{(FLOAT)0.1756, (FLOAT)0.2566, (FLOAT)0.3251, (FLOAT)0.4227, (FLOAT)1.0167, (FLOAT)1.2649, (FLOAT)1.6801, (FLOAT)2.1055, (FLOAT)2.4088, (FLOAT)2.7276},
{(FLOAT)0.4299, (FLOAT)0.5833, (FLOAT)0.8408, (FLOAT)1.0596, (FLOAT)1.5524, (FLOAT)1.7484, (FLOAT)1.9471, (FLOAT)2.2034, (FLOAT)2.4617, (FLOAT)2.5812},
{(FLOAT)0.3009, (FLOAT)0.3719, (FLOAT)0.5887, (FLOAT)0.7297, (FLOAT)0.9395, (FLOAT)1.8797, (FLOAT)2.0423, (FLOAT)2.1541, (FLOAT)2.5132, (FLOAT)2.6026},
{(FLOAT)0.1221, (FLOAT)0.2081, (FLOAT)0.3665, (FLOAT)0.7734, (FLOAT)1.0341, (FLOAT)1.2818, (FLOAT)1.8162, (FLOAT)2.0727, (FLOAT)2.4446, (FLOAT)2.7377},
{(FLOAT)0.2614, (FLOAT)0.3624, (FLOAT)0.8381, (FLOAT)0.9829, (FLOAT)1.2220, (FLOAT)1.6064, (FLOAT)1.8083, (FLOAT)1.9362, (FLOAT)2.1397, (FLOAT)2.2773},
{(FLOAT)0.2729, (FLOAT)0.3569, (FLOAT)0.6252, (FLOAT)0.7641, (FLOAT)0.9887, (FLOAT)1.6589, (FLOAT)1.8726, (FLOAT)1.9947, (FLOAT)2.1884, (FLOAT)2.4609},
{(FLOAT)0.2670, (FLOAT)0.3564, (FLOAT)0.5628, (FLOAT)0.7172, (FLOAT)0.9021, (FLOAT)1.5328, (FLOAT)1.7131, (FLOAT)2.0501, (FLOAT)2.5633, (FLOAT)2.6574},
{(FLOAT)0.1814, (FLOAT)0.2647, (FLOAT)0.4580, (FLOAT)1.1077, (FLOAT)1.4813, (FLOAT)1.7022, (FLOAT)2.1953, (FLOAT)2.3405, (FLOAT)2.5867, (FLOAT)2.6636},
{(FLOAT)0.3423, (FLOAT)0.4502, (FLOAT)0.9144, (FLOAT)1.2313, (FLOAT)1.3694, (FLOAT)1.5517, (FLOAT)1.9907, (FLOAT)2.1326, (FLOAT)2.4509, (FLOAT)2.5789},
{(FLOAT)0.1709, (FLOAT)0.4486, (FLOAT)0.8705, (FLOAT)1.0643, (FLOAT)1.3047, (FLOAT)1.5269, (FLOAT)1.9175, (FLOAT)2.1621, (FLOAT)2.4073, (FLOAT)2.5718},
{(FLOAT)0.1646, (FLOAT)0.3229, (FLOAT)0.7112, (FLOAT)1.0725, (FLOAT)1.2964, (FLOAT)1.5663, (FLOAT)1.9843, (FLOAT)2.2363, (FLOAT)2.5798, (FLOAT)2.7572},
{(FLOAT)0.2113, (FLOAT)0.3223, (FLOAT)0.4212, (FLOAT)0.5946, (FLOAT)0.7479, (FLOAT)0.9615, (FLOAT)1.9097, (FLOAT)2.1750, (FLOAT)2.4773, (FLOAT)2.6737},
{(FLOAT)0.2292, (FLOAT)0.3430, (FLOAT)0.4383, (FLOAT)0.5747, (FLOAT)1.3497, (FLOAT)1.5187, (FLOAT)1.9070, (FLOAT)2.0958, (FLOAT)2.2902, (FLOAT)2.4301},
{(FLOAT)0.2745, (FLOAT)0.4341, (FLOAT)1.0424, (FLOAT)1.2928, (FLOAT)1.5461, (FLOAT)1.7940, (FLOAT)2.0161, (FLOAT)2.1758, (FLOAT)2.4742, (FLOAT)2.5937},
{(FLOAT)0.4218, (FLOAT)0.5075, (FLOAT)0.8348, (FLOAT)1.0009, (FLOAT)1.2057, (FLOAT)1.5032, (FLOAT)1.9416, (FLOAT)2.0540, (FLOAT)2.4352, (FLOAT)2.5504},
{(FLOAT)0.5492, (FLOAT)0.8062, (FLOAT)0.9810, (FLOAT)1.1293, (FLOAT)1.3189, (FLOAT)1.5415, (FLOAT)1.9385, (FLOAT)2.1378, (FLOAT)2.4439, (FLOAT)2.5691},
{(FLOAT)0.5375, (FLOAT)0.6552, (FLOAT)0.8099, (FLOAT)1.0219, (FLOAT)1.2407, (FLOAT)1.4160, (FLOAT)1.8266, (FLOAT)1.9936, (FLOAT)2.1951, (FLOAT)2.2911},
{(FLOAT)0.1991, (FLOAT)0.2971, (FLOAT)0.4104, (FLOAT)0.7725, (FLOAT)1.3073, (FLOAT)1.4665, (FLOAT)1.6208, (FLOAT)1.6973, (FLOAT)2.3732, (FLOAT)2.5743},
{(FLOAT)0.2138, (FLOAT)0.2998, (FLOAT)0.6283, (FLOAT)1.2166, (FLOAT)1.4187, (FLOAT)1.6084, (FLOAT)1.7992, (FLOAT)2.0106, (FLOAT)2.5377, (FLOAT)2.6558},
{(FLOAT)0.2365, (FLOAT)0.3246, (FLOAT)0.5618, (FLOAT)0.8176, (FLOAT)1.1073, (FLOAT)1.5702, (FLOAT)1.7331, (FLOAT)1.8592, (FLOAT)1.9589, (FLOAT)2.3044},
{(FLOAT)0.2116, (FLOAT)0.3067, (FLOAT)0.4099, (FLOAT)0.5748, (FLOAT)0.8518, (FLOAT)1.2569, (FLOAT)2.0782, (FLOAT)2.1920, (FLOAT)2.3371, (FLOAT)2.4842},
{(FLOAT)0.3754, (FLOAT)0.5229, (FLOAT)0.7265, (FLOAT)0.9301, (FLOAT)1.1724, (FLOAT)1.3440, (FLOAT)1.5118, (FLOAT)1.7098, (FLOAT)2.5218, (FLOAT)2.6242},
{(FLOAT)0.3033, (FLOAT)0.3802, (FLOAT)0.6981, (FLOAT)0.8664, (FLOAT)1.0254, (FLOAT)1.5401, (FLOAT)1.7180, (FLOAT)1.8124, (FLOAT)2.5068, (FLOAT)2.6119},
{(FLOAT)0.2375, (FLOAT)0.3221, (FLOAT)0.5042, (FLOAT)0.9760, (FLOAT)1.7503, (FLOAT)1.9014, (FLOAT)2.0822, (FLOAT)2.2225, (FLOAT)2.4689, (FLOAT)2.5632},
{(FLOAT)0.3447, (FLOAT)0.4401, (FLOAT)0.7099, (FLOAT)1.0493, (FLOAT)1.2312, (FLOAT)1.4001, (FLOAT)2.0225, (FLOAT)2.1317, (FLOAT)2.2894, (FLOAT)2.4263},
{(FLOAT)0.2289, (FLOAT)0.3402, (FLOAT)0.5166, (FLOAT)0.7716, (FLOAT)1.0614, (FLOAT)1.2389, (FLOAT)1.4386, (FLOAT)2.0769, (FLOAT)2.2715, (FLOAT)2.4366},
{(FLOAT)0.4835, (FLOAT)0.5919, (FLOAT)0.7235, (FLOAT)0.8862, (FLOAT)1.0756, (FLOAT)1.2853, (FLOAT)1.9118, (FLOAT)2.0215, (FLOAT)2.2213, (FLOAT)2.4638},
{(FLOAT)0.3555, (FLOAT)0.5240, (FLOAT)0.9751, (FLOAT)1.1685, (FLOAT)1.4114, (FLOAT)1.6168, (FLOAT)1.7769, (FLOAT)2.0178, (FLOAT)2.4420, (FLOAT)2.5724},
{(FLOAT)0.1232, (FLOAT)0.2011, (FLOAT)0.3527, (FLOAT)0.6969, (FLOAT)1.1647, (FLOAT)1.5081, (FLOAT)1.8593, (FLOAT)2.2576, (FLOAT)2.5594, (FLOAT)2.6896},
{(FLOAT)0.1522, (FLOAT)0.2258, (FLOAT)0.3543, (FLOAT)0.5504, (FLOAT)0.8815, (FLOAT)1.5516, (FLOAT)1.8110, (FLOAT)1.9915, (FLOAT)2.3603, (FLOAT)2.7735},
{(FLOAT)0.2362, (FLOAT)0.5876, (FLOAT)0.7574, (FLOAT)0.8804, (FLOAT)1.0961, (FLOAT)1.4240, (FLOAT)1.9519, (FLOAT)2.1742, (FLOAT)2.4935, (FLOAT)2.6493},
{(FLOAT)0.1826, (FLOAT)0.3496, (FLOAT)0.7764, (FLOAT)0.9888, (FLOAT)1.3915, (FLOAT)1.7421, (FLOAT)1.9412, (FLOAT)2.1620, (FLOAT)2.4999, (FLOAT)2.6931},
{(FLOAT)0.3316, (FLOAT)0.4498, (FLOAT)0.6404, (FLOAT)0.8162, (FLOAT)1.0332, (FLOAT)1.2209, (FLOAT)1.5130, (FLOAT)1.7250, (FLOAT)1.9715, (FLOAT)2.4141},
{(FLOAT)0.2813, (FLOAT)0.3575, (FLOAT)0.5032, (FLOAT)0.5889, (FLOAT)0.6885, (FLOAT)1.6040, (FLOAT)1.9318, (FLOAT)2.0677, (FLOAT)2.4546, (FLOAT)2.5701},
{(FLOAT)0.3211, (FLOAT)0.4077, (FLOAT)0.5809, (FLOAT)1.0206, (FLOAT)1.2542, (FLOAT)1.3835, (FLOAT)1.5723, (FLOAT)2.1209, (FLOAT)2.3464, (FLOAT)2.4336},
{(FLOAT)0.2373, (FLOAT)0.3648, (FLOAT)0.5099, (FLOAT)0.7373, (FLOAT)0.9129, (FLOAT)1.0421, (FLOAT)1.7312, (FLOAT)1.8984, (FLOAT)2.1512, (FLOAT)2.6342},
{(FLOAT)0.1935, (FLOAT)0.2937, (FLOAT)0.3656, (FLOAT)0.4927, (FLOAT)1.4015, (FLOAT)1.6086, (FLOAT)1.7724, (FLOAT)1.8837, (FLOAT)2.4374, (FLOAT)2.5971},
{(FLOAT)0.3353, (FLOAT)0.4426, (FLOAT)0.6469, (FLOAT)0.9161, (FLOAT)1.2528, (FLOAT)1.3956, (FLOAT)1.6080, (FLOAT)1.8909, (FLOAT)2.0600, (FLOAT)2.1380},
{(FLOAT)0.2801, (FLOAT)0.3535, (FLOAT)0.4969, (FLOAT)0.9809, (FLOAT)1.4934, (FLOAT)1.6378, (FLOAT)1.8021, (FLOAT)2.1200, (FLOAT)2.3135, (FLOAT)2.4034},
{(FLOAT)0.3493, (FLOAT)0.4404, (FLOAT)0.7231, (FLOAT)0.8587, (FLOAT)1.1272, (FLOAT)1.4715, (FLOAT)1.6760, (FLOAT)2.2042, (FLOAT)2.4735, (FLOAT)2.5604},
{(FLOAT)0.3492, (FLOAT)0.4560, (FLOAT)0.5906, (FLOAT)0.7379, (FLOAT)0.8855, (FLOAT)1.0257, (FLOAT)1.7128, (FLOAT)1.9997, (FLOAT)2.2019, (FLOAT)2.3694},
{(FLOAT)0.2181, (FLOAT)0.2893, (FLOAT)0.4117, (FLOAT)0.5519, (FLOAT)0.8295, (FLOAT)1.5825, (FLOAT)2.1575, (FLOAT)2.3179, (FLOAT)2.5458, (FLOAT)2.6417},
{(FLOAT)0.1763, (FLOAT)0.2585, (FLOAT)0.4012, (FLOAT)0.7609, (FLOAT)1.1503, (FLOAT)1.5847, (FLOAT)1.8309, (FLOAT)1.9352, (FLOAT)2.0982, (FLOAT)2.6681},
{(FLOAT)0.3764, (FLOAT)0.4845, (FLOAT)0.7627, (FLOAT)0.9914, (FLOAT)1.1961, (FLOAT)1.3421, (FLOAT)1.5129, (FLOAT)1.6707, (FLOAT)2.1836, (FLOAT)2.3322}
};


static FLOAT pfCodebook2[][LPCORDER] = {
{(FLOAT)-0.1071, (FLOAT)-0.1165, (FLOAT)-0.1524, (FLOAT)-0.0365, (FLOAT) 0.0260, (FLOAT)-0.0288, (FLOAT)-0.0889, (FLOAT) 0.1159, (FLOAT) 0.1852, (FLOAT) 0.1093},	
{(FLOAT)-0.0666, (FLOAT)-0.0403, (FLOAT)-0.0524, (FLOAT)-0.0831, (FLOAT) 0.1384, (FLOAT)-0.1443, (FLOAT)-0.0909, (FLOAT) 0.1636, (FLOAT) 0.0320, (FLOAT) 0.0077},	
{(FLOAT)-0.0382, (FLOAT)-0.0120, (FLOAT) 0.1159, (FLOAT) 0.0039, (FLOAT) 0.1348, (FLOAT) 0.0088, (FLOAT)-0.0173, (FLOAT) 0.1789, (FLOAT) 0.0078, (FLOAT)-0.0959},	
{(FLOAT)-0.0856, (FLOAT)-0.1028, (FLOAT)-0.0071, (FLOAT) 0.1160, (FLOAT) 0.1089, (FLOAT) 0.1892, (FLOAT) 0.0874, (FLOAT) 0.0644, (FLOAT)-0.0872, (FLOAT)-0.0236},	
{(FLOAT) 0.1612, (FLOAT) 0.1010, (FLOAT)-0.0486, (FLOAT)-0.0704, (FLOAT) 0.0417, (FLOAT)-0.0945, (FLOAT)-0.0590, (FLOAT)-0.1523, (FLOAT)-0.0086, (FLOAT) 0.0120},	
{(FLOAT) 0.1409, (FLOAT) 0.0724, (FLOAT)-0.0094, (FLOAT) 0.1511, (FLOAT)-0.0039, (FLOAT) 0.0710, (FLOAT)-0.1266, (FLOAT)-0.1093, (FLOAT) 0.0817, (FLOAT) 0.0363},	
{(FLOAT) 0.0178, (FLOAT)-0.0349, (FLOAT)-0.1563, (FLOAT)-0.0487, (FLOAT) 0.0044, (FLOAT)-0.0609, (FLOAT)-0.1682, (FLOAT) 0.0023, (FLOAT)-0.0542, (FLOAT) 0.1811},	
{(FLOAT)-0.0532, (FLOAT)-0.0995, (FLOAT)-0.0906, (FLOAT) 0.1261, (FLOAT)-0.0633, (FLOAT) 0.0711, (FLOAT)-0.1467, (FLOAT) 0.1012, (FLOAT) 0.0106, (FLOAT) 0.0470},	
{(FLOAT) 0.0658, (FLOAT)-0.0140, (FLOAT) 0.1046, (FLOAT)-0.0603, (FLOAT) 0.0273, (FLOAT)-0.1114, (FLOAT) 0.0761, (FLOAT)-0.0093, (FLOAT) 0.0338, (FLOAT)-0.0538},	
{(FLOAT) 0.0869, (FLOAT) 0.0847, (FLOAT) 0.0637, (FLOAT) 0.0794, (FLOAT) 0.1594, (FLOAT)-0.0035, (FLOAT)-0.0462, (FLOAT) 0.0909, (FLOAT)-0.1227, (FLOAT) 0.0294},	
{(FLOAT) 0.0703, (FLOAT)-0.0013, (FLOAT)-0.0572, (FLOAT)-0.0243, (FLOAT) 0.1345, (FLOAT)-0.1235, (FLOAT) 0.0710, (FLOAT)-0.0065, (FLOAT)-0.0912, (FLOAT) 0.1072},	
{(FLOAT) 0.0408, (FLOAT) 0.1801, (FLOAT) 0.0772, (FLOAT)-0.0098, (FLOAT) 0.0059, (FLOAT)-0.1296, (FLOAT)-0.0591, (FLOAT) 0.0443, (FLOAT)-0.0729, (FLOAT)-0.1041},	
{(FLOAT) 0.0485, (FLOAT) 0.0682, (FLOAT) 0.0248, (FLOAT)-0.0974, (FLOAT)-0.1122, (FLOAT) 0.0004, (FLOAT) 0.0845, (FLOAT)-0.0357, (FLOAT) 0.1282, (FLOAT) 0.0955},	
{(FLOAT) 0.0209, (FLOAT)-0.0428, (FLOAT) 0.0359, (FLOAT) 0.2027, (FLOAT) 0.0554, (FLOAT) 0.0634, (FLOAT) 0.0356, (FLOAT) 0.0195, (FLOAT)-0.0782, (FLOAT)-0.1583},	
{(FLOAT) 0.1376, (FLOAT) 0.0713, (FLOAT) 0.1020, (FLOAT) 0.0339, (FLOAT)-0.1415, (FLOAT) 0.0254, (FLOAT) 0.0368, (FLOAT)-0.1077, (FLOAT) 0.0143, (FLOAT)-0.0494},	
{(FLOAT)-0.0019, (FLOAT) 0.0081, (FLOAT) 0.0572, (FLOAT) 0.1245, (FLOAT)-0.0914, (FLOAT) 0.1691, (FLOAT)-0.0223, (FLOAT)-0.1108, (FLOAT)-0.0881, (FLOAT)-0.0320},	
{(FLOAT) 0.0476, (FLOAT) 0.0292, (FLOAT) 0.1915, (FLOAT) 0.1198, (FLOAT) 0.0139, (FLOAT) 0.0451, (FLOAT)-0.1225, (FLOAT)-0.0619, (FLOAT)-0.0717, (FLOAT)-0.1104},	
{(FLOAT)-0.1247, (FLOAT) 0.0283, (FLOAT)-0.0374, (FLOAT) 0.0393, (FLOAT)-0.0269, (FLOAT)-0.0200, (FLOAT)-0.0643, (FLOAT)-0.0921, (FLOAT)-0.1994, (FLOAT) 0.0327},	
{(FLOAT)-0.1017, (FLOAT)-0.1088, (FLOAT) 0.0566, (FLOAT)-0.0010, (FLOAT)-0.1528, (FLOAT) 0.1771, (FLOAT) 0.0089, (FLOAT)-0.0282, (FLOAT) 0.1055, (FLOAT) 0.0808},	
{(FLOAT)-0.1949, (FLOAT) 0.0672, (FLOAT) 0.0978, (FLOAT)-0.0557, (FLOAT)-0.0069, (FLOAT)-0.0851, (FLOAT) 0.1057, (FLOAT) 0.1294, (FLOAT) 0.0505, (FLOAT) 0.0545},	
{(FLOAT)-0.0094, (FLOAT) 0.0420, (FLOAT)-0.0758, (FLOAT) 0.0932, (FLOAT) 0.0505, (FLOAT) 0.0614, (FLOAT)-0.0443, (FLOAT)-0.1172, (FLOAT)-0.0590, (FLOAT) 0.1693},	
{(FLOAT)-0.1384, (FLOAT)-0.1020, (FLOAT) 0.1649, (FLOAT) 0.1568, (FLOAT)-0.0116, (FLOAT) 0.1240, (FLOAT)-0.0271, (FLOAT) 0.0541, (FLOAT) 0.0455, (FLOAT)-0.0433},	
{(FLOAT)-0.0137, (FLOAT)-0.0332, (FLOAT)-0.0611, (FLOAT) 0.1156, (FLOAT) 0.2116, (FLOAT) 0.0332, (FLOAT)-0.0019, (FLOAT) 0.1110, (FLOAT)-0.0317, (FLOAT) 0.2061},	
{(FLOAT) 0.0070, (FLOAT)-0.0242, (FLOAT)-0.0415, (FLOAT)-0.0041, (FLOAT)-0.1793, (FLOAT) 0.0700, (FLOAT) 0.0972, (FLOAT)-0.0207, (FLOAT)-0.0771, (FLOAT) 0.0997},	
{(FLOAT)-0.1782, (FLOAT)-0.1511, (FLOAT) 0.0509, (FLOAT)-0.0261, (FLOAT) 0.0570, (FLOAT) 0.0817, (FLOAT) 0.0805, (FLOAT) 0.2003, (FLOAT) 0.1138, (FLOAT) 0.0653},	
{(FLOAT) 0.0713, (FLOAT) 0.0039, (FLOAT)-0.0353, (FLOAT) 0.0435, (FLOAT)-0.0407, (FLOAT)-0.0558, (FLOAT) 0.0748, (FLOAT)-0.0346, (FLOAT)-0.1686, (FLOAT)-0.0905},	
{(FLOAT)-0.0134, (FLOAT)-0.0987, (FLOAT) 0.0283, (FLOAT) 0.0095, (FLOAT)-0.0107, (FLOAT)-0.0420, (FLOAT) 0.1638, (FLOAT) 0.1328, (FLOAT)-0.0799, (FLOAT)-0.0695},	
{(FLOAT)-0.0199, (FLOAT) 0.0823, (FLOAT)-0.0014, (FLOAT)-0.1082, (FLOAT) 0.0649, (FLOAT)-0.1374, (FLOAT)-0.0324, (FLOAT)-0.0296, (FLOAT) 0.0885, (FLOAT) 0.1141},	
{(FLOAT)-0.0384, (FLOAT)-0.0375, (FLOAT)-0.0313, (FLOAT)-0.1539, (FLOAT)-0.0524, (FLOAT) 0.0550, (FLOAT)-0.0569, (FLOAT)-0.0133, (FLOAT) 0.1233, (FLOAT) 0.2714},	
{(FLOAT) 0.2683, (FLOAT) 0.2853, (FLOAT) 0.1549, (FLOAT) 0.0819, (FLOAT) 0.0372, (FLOAT)-0.0327, (FLOAT)-0.0642, (FLOAT) 0.0172, (FLOAT) 0.1077, (FLOAT)-0.0170},	
{(FLOAT)-0.0413, (FLOAT) 0.0181, (FLOAT) 0.1764, (FLOAT) 0.0092, (FLOAT)-0.0928, (FLOAT) 0.0695, (FLOAT) 0.1523, (FLOAT) 0.0412, (FLOAT) 0.0508, (FLOAT)-0.0148},	
{(FLOAT)-0.1049, (FLOAT) 0.1510, (FLOAT) 0.0672, (FLOAT) 0.1043, (FLOAT) 0.0872, (FLOAT)-0.0663, (FLOAT)-0.2139, (FLOAT)-0.0239, (FLOAT)-0.0120, (FLOAT)-0.0338}
};

#endif
