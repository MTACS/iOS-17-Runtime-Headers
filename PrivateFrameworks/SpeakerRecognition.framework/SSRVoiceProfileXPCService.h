
@interface SSRVoiceProfileXPCService : NSObject <SSRVoiceProfileXPCClientDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    SSRVoiceProfileXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) SSRVoiceProfileXPCClient *xpcClient;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)_createXPCClientConnectionIfNeeded:(id)arg1;
- (void)_teardownXPCClientIfNeeded;
- (void)fetchEnrollmentStatusForSiriProfileId:(id)arg1 forLanguageCode:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)ssrVoiceProfileXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (id)xpcClient;

@end
