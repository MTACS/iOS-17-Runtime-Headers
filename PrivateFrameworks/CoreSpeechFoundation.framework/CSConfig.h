
@interface CSConfig : NSObject

+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)channelForProcessedInput;
+ (float)daysBeforeRemovingLogFiles;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)inputRecordingDurationInSecs;
+ (float)inputRecordingDurationInSecsExtended;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (bool)inputRecordingIsFloat;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRate;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (float)inputRecordingSampleRateNarrowBand;
+ (float)remoteVADDuration;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;

@end
