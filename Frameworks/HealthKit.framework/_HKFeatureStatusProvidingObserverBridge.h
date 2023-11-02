
@interface _HKFeatureStatusProvidingObserverBridge : NSObject <HKFeatureStatusProvidingObserver> {
    HKFeatureIdentifierAndContext * _featureIdentifierAndContext;
    HKObserverBridgeHandle * _handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKFeatureIdentifierAndContext *featureIdentifierAndContext;
@property (nonatomic, readonly) HKObserverBridgeHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureIdentifierAndContext;
- (void)featureStatusProviding:(id)arg1 didUpdateFeatureStatus:(id)arg2;
- (id)handle;
- (id)initWithFeatureIdentifierAndContext:(id)arg1 handle:(id)arg2;

@end
