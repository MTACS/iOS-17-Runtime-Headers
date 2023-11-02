
@interface FeedbackLoggerFBFClient : NSObject {
    NSXPCConnection * _daemonConnection;
    <FeedbackLoggerDaemonXPC> * _fbf;
    NSObject<OS_os_log> * _log;
    NSDistributedNotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) NSXPCConnection *daemonConnection;
@property (nonatomic, retain) <FeedbackLoggerDaemonXPC> *fbf;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSDistributedNotificationCenter *notificationCenter;

- (void).cxx_destruct;
- (id)daemonConnection;
- (id)fbf;
- (id)init;
- (id)log;
- (id)notificationCenter;
- (void)scheduleImmediateUploadWithHeaders:(id)arg1 completion:(id /* block */)arg2;
- (void)setDaemonConnection:(id)arg1;
- (void)setFbf:(id)arg1;
- (void)setNotificationCenter:(id)arg1;

@end
