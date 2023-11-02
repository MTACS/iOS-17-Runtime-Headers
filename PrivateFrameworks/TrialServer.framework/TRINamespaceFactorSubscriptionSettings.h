
@interface TRINamespaceFactorSubscriptionSettings : NSObject {
    TRIKVStore * _keyValueStore;
}

@property (nonatomic, retain) TRIKVStore *keyValueStore;

+ (id)keyForNamespaceSubscription:(id)arg1;
+ (id)settingsWithKeyValueStore:(id)arg1;

- (void).cxx_destruct;
- (id)initWithKeyValueStore:(id)arg1;
- (id)keyValueStore;
- (void)setKeyValueStore:(id)arg1;
- (bool)setSubscriptionWithFactorNames:(id)arg1 inNamespaceName:(id)arg2 error:(id*)arg3;
- (id)subscribedFactorsForNamespaceName:(id)arg1;

@end
