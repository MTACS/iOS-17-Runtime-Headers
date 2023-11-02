
@protocol TSXDaemonServiceClientProtocol <NSObject>

@required

- (void)daemonClientNotification:(unsigned int)arg1 ioResult:(unsigned int)arg2 arguments:(struct ScalarArgsArray { unsigned long long x1[16]; unsigned int x2; }*)arg3;
- (void)daemonClientRefresh;

@end
