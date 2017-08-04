# Mean Opinion Score IVR
A collection of scripts and prompts to build an IVR which can record voice samples and calculate an objective score of the voice quality. This system calculates a mean opinion score (1-5) non-intrusively. The system can send an email after caluclation of the score. Extensive logs and voice recordings are maintained for each tester which can be helpful.

This system can helpful if you want to evaluate voice quality delivered over a network. The scores produced by the system have not been benchmarked against any commercially available MOS tool. The P563 algorithm evaluates the end listener experience and accounts for human factors such as speaker's voice as well. Therefore the score is not necessarily representative of the network quality.

**The P.563 algorithm implementation is an evaluation copy and license needs to be obtained from the intellectual property holders for any use other than evaluation.** The implementation has been slightly modified so that it is compatible with rest of the system. Please make sure that you go through the readme.txt in P563 directory. If you want to improve upon the system, then you should go through the ITU recommendations for P.563.

The system relies on Asterisk where extensions.conf needs to be placed. Other utilities which are used are sendEmail and wavplay. The wavplay binary is included in the bin folder. You should use sendEmail if you want to configure email notifications. The IVR prompts were made using AT&T text to speech engine.

You can put the P563 folder anywhere you like (like your home directory) and update its path in extensions.conf. Configurations and customizations need to be done in extensions.conf and P563/bin/process script. 

This system is not actively maintained so you are pretty much on your own. Good luck! :)

https://imroz.io
