
@interface CKDPushConnection : NSObject {
    APSConnection * _apsConnection;
    NSString * _apsEnvironmentString;
    NSMutableArray * _completionBlocks;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) APSConnection *apsConnection;
@property (setter=setAPSEnvironmentString:, nonatomic, retain) NSString *apsEnvironmentString;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1;

- (void).cxx_destruct;
- (id)apsConnection;
- (id)apsEnvironmentString;
- (id)completionBlocks;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)dealloc;
- (void)getToken:(id /* block */)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)queue;
- (void)setAPSEnvironmentString:(id)arg1;
- (void)setApsConnection:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setQueue:(id)arg1;

@end
