
@protocol CSAudioDecoderDelegate <NSObject>

@required

- (void)audioDecoderDidDecodePackets:(CSAudioDecoder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 timestamp:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 wasBuffered:(bool)arg7 receivedNumChannels:(unsigned int)arg8;

@end
