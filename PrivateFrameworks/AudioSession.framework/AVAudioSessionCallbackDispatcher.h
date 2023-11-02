
@interface AVAudioSessionCallbackDispatcher : NSObject <SessionManagerXPCServerCallbackProtocol>

- (void)IOControllerEvent:(unsigned long long)arg1 sessions:(id)arg2 isDecoupledInput:(bool)arg3;
- (void)pingClient:(unsigned int)arg1;

@end
