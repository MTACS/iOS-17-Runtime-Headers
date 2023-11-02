
@interface HMMTRSoftwareUpdateProvider : NSObject {
    HMMTRAccessoryServerBrowser * _browser;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMMTRSoftwareUpdateProviderDelegate> * _delegate;
}

@property (nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMMTRSoftwareUpdateProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)browser;
- (id)clientQueue;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 browser:(id)arg2;
- (void)notifyDelegateOfApplyUpdateWithPairing:(id)arg1 requestParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)notifyDelegateOfNotifyUpdateWithPairing:(id)arg1 params:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)notifyDelegateOfQueryImageWithPairing:(id)arg1 requestParams:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)notifyUpdateRequestedForNodeID:(id)arg1 isUserTriggered:(bool)arg2;
- (void)setBrowser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateOTAProviderStateForNodeID:(id)arg1 otaProviderState:(long long)arg2;

@end
