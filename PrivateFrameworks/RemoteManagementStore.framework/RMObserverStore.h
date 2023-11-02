
@interface RMObserverStore : RMBaseStore <NSSecureCoding>

+ (void)storeWithIdentifier:(id)arg1 scope:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (void)storesWithCompletionHandler:(id /* block */)arg1;
+ (void)storesWithScope:(long long)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void)displayPropertiesForConfigurationsWithCompletionHandler:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStore:(id)arg1;

@end
