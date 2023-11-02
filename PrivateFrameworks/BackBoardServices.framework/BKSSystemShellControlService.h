
@interface BKSSystemShellControlService : NSObject <BKSSystemShellControlClientInterface> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BSServiceConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activateServerConnection;
- (id)initWithCalloutQueue:(id)arg1;
- (void)terminateSystemShellWithJobLabel:(id)arg1;

@end
