
@protocol AVTAvatarsDaemonServer

@required

- (<AVTAvatarsDaemonServerDelegate> *)delegate;
- (void)setDelegate:(id <AVTAvatarsDaemonServerDelegate>)arg1;
- (void)startListening;

@end
