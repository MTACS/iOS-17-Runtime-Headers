
@interface BRKIDSService : NSObject <IDSServiceDelegate> {
    <BRKIDSServiceCompanionContextManagerDelegate> * _companionContextManagerDelegate;
    <BRKIDSServiceContextManagerDelegate> * _contextManagerDelegate;
    <BRKIDSServiceCompanionDataCollectionDelegate> * _dataCollectionDelegate;
    NSObject<OS_dispatch_queue> * _idsQueue;
    IDSService * _idsService;
}

@property (nonatomic) <BRKIDSServiceCompanionContextManagerDelegate> *companionContextManagerDelegate;
@property (nonatomic) <BRKIDSServiceContextManagerDelegate> *contextManagerDelegate;
@property (nonatomic) <BRKIDSServiceCompanionDataCollectionDelegate> *dataCollectionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)companionContextManagerDelegate;
- (id)contextManagerDelegate;
- (id)dataCollectionDelegate;
- (id)idsService;
- (id)init;
- (void)locationManagerDidEnterRegion:(id)arg1;
- (void)locationManagerDidExitRegion:(id)arg1;
- (void)locationManagerStartMonitoringForRegion:(id)arg1;
- (void)locationManagerStopMonitoringForRegion:(id)arg1;
- (id)sendProtobuf:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 completionHandler:(id /* block */)arg4 withTimeout:(double)arg5;
- (id)sendResourceAtURL:(id)arg1 metadata:(id)arg2 priority:(long long)arg3 completionHandler:(id /* block */)arg4 withTimeout:(double)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCompanionContextManagerDelegate:(id)arg1;
- (void)setContextManagerDelegate:(id)arg1;
- (void)setDataCollectionDelegate:(id)arg1;
- (void)setIdsService:(id)arg1;

@end
