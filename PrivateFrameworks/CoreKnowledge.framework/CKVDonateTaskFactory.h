
@interface CKVDonateTaskFactory : NSObject <CKVDonateTaskProvider> {
    NSObject<CKVDonatorProvider> * _donatorProvider;
    KMProviderBridgeFactory * _factory;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
    bool  _useSimulatedProviderBridge;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool useSimulatedProviderBridge;

- (void).cxx_destruct;
- (id)derivativeTaskForId:(unsigned short)arg1 usingSettings:(id)arg2 modifiedItemIds:(id)arg3 deletedItemIds:(id)arg4;
- (void)enableSimulatedTasks:(bool)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1 serviceProvider:(id)arg2 timeout:(double)arg3;
- (void)setUseSimulatedProviderBridge:(bool)arg1;
- (void)setupBridgeListenersWithHandler:(id /* block */)arg1;
- (id)taskForId:(unsigned short)arg1 usingSettings:(id)arg2;
- (bool)useSimulatedProviderBridge;
- (id)verificationTaskForId:(unsigned short)arg1;

@end
