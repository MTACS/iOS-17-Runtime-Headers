
@protocol HDHealthDaemonReadyObserver <NSObject>

@required

- (void)daemonReady:(id <HDHealthDaemon>)arg1;

@end
