
@interface HMMTROTAProviderDelegate : NSObject <HMFLogging, MTROTAProviderDelegate> {
    HMMTRAccessoryServerBrowser * _browser;
    NSObject<OS_dispatch_queue> * _clientQueue;
}

@property (nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_refreshHAPFirmwareRevisionForAccessoryServer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_refreshHAPFirmwareRevisionForAccessoryServer:(id)arg1 retryCount:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)applyUpdateRequestTimerExpiredForAccessoryServer:(id)arg1;
- (void)applyUpdateTimerExpiredForAccessoryServer:(id)arg1 softwareVersion:(id)arg2 didTimeout:(id)arg3;
- (id)browser;
- (id)clientQueue;
- (id)generateUpdateToken;
- (void)handleApplyUpdateRequestForNodeID:(id)arg1 controller:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (void)handleBDXQueryForNodeID:(id)arg1 controller:(id)arg2 blockSize:(id)arg3 blockIndex:(id)arg4 bytesToSkip:(id)arg5 completion:(id /* block */)arg6;
- (void)handleBDXTransferSessionBeginForNodeID:(id)arg1 controller:(id)arg2 fileDesignator:(id)arg3 offset:(id)arg4 completion:(id /* block */)arg5;
- (void)handleBDXTransferSessionEndForNodeID:(id)arg1 controller:(id)arg2 error:(id)arg3;
- (void)handleNotifyUpdateAppliedForNodeID:(id)arg1 controller:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (void)handleQueryImageForNodeID:(id)arg1 controller:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithQueue:(id)arg1 browser:(id)arg2;
- (void)setBrowser:(id)arg1;
- (void)setClientQueue:(id)arg1;

@end
