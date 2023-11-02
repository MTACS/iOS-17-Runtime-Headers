
@interface AAAccountUserNotificationPublisher : NSObject {
    AAAccountUserNotificationDaemonConnection * _daemonConnection;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)postAccountUserNotificationWith:(id)arg1 completion:(id /* block */)arg2;

@end
