
@protocol ASDClipSessionChannel <NSObject>

@required

- (void)channelNotifyDidComplete;
- (void)channelNotifyDidFailWithError:(NSError *)arg1;
- (void)channelNotifyDidInstallPlaceholder;
- (void)channelNotifyDidProgress:(double)arg1;
- (void)channelStateDidClose;
- (void)channelStateDidOpen;

@end
