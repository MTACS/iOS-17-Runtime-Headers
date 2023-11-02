
@interface HMDResidentSyncManager : NSObject <HMDResidentSyncClient, HMDResidentSyncServer, HMFLogging> {
    HMDResidentSyncClient * _client;
    HMDHome * _home;
    HMDResidentSyncServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDResidentSyncServer *server;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistence:(id)arg3 logEventSubmitter:(id)arg4;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistence:(id)arg3 logEventSubmitter:(id)arg4 isResidentCapable:(bool)arg5 clientDataSource:(id)arg6 serverDataSource:(id)arg7;
- (void)interceptRemoteResidentRequest:(id)arg1 proceed:(id /* block */)arg2;
- (id)logIdentifier;
- (void)performResidentRequest:(id)arg1 options:(unsigned long long)arg2;
- (void)performSync;
- (id)server;
- (void)start;
- (void)stop;

@end
