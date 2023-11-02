
@protocol NviAudioDataReceiver <NviDataReceiver>

@required

- (void)audioChunkAvailable:(NSData *)arg1 numChannels:(unsigned long long)arg2 numSamplesPerChannel:(unsigned long long)arg3 startSampleId:(unsigned long long)arg4 atAbsMachTimestamp:(unsigned long long)arg5;
- (bool)receiveOnlyProcessedChannelData;

@end
