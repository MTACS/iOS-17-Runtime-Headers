
@protocol HMDAudioStreamInterfaceDelegate <NSObject>

@required

- (void)audioStream:(HMDAudioStreamInterface *)arg1 didPause:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didResume:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didStart:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didStop:(NSError *)arg2;

@end
