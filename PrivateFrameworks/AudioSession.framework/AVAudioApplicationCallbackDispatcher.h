
@interface AVAudioApplicationCallbackDispatcher : NSObject <AudioApplicationXPCServerCallbackProtocol>

- (void)pingClient:(unsigned int)arg1;

@end
