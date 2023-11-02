
@protocol AVOutputDeviceCommunicationChannelDelegate <NSObject>

@optional

- (void)communicationChannel:(AVOutputDeviceCommunicationChannel *)arg1 didReceiveData:(NSData *)arg2;
- (void)communicationChannelDidClose:(AVOutputDeviceCommunicationChannel *)arg1;
- (void)outputDevice:(AVOutputDevice *)arg1 didCloseCommunicationChannel:(AVOutputDeviceCommunicationChannel *)arg2;
- (void)outputDevice:(AVOutputDevice *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputDeviceCommunicationChannel *)arg3;

@end
