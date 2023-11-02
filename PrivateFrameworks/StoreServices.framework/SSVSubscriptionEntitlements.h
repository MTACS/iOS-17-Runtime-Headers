
@interface SSVSubscriptionEntitlements : NSObject {
    NSString * _accountISO3Country;
    NSNumber * _accountIdentifier;
    NSNumber * _accountStoreFrontIdentifier;
    NSDate * _cachedTimestamp;
    NSArray * _entitledSubscriptions;
}

@property (nonatomic, copy) NSString *accountISO3Country;
@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSNumber *accountStoreFrontIdentifier;
@property (nonatomic, copy) NSDate *cachedTimestamp;
@property (nonatomic, copy) NSArray *entitledSubscriptions;

+ (id)_parseJSONDictionary:(id)arg1;
+ (id)_valueForKey:(id)arg1 fromDictionary:(id)arg2 ofType:(Class)arg3;

- (void).cxx_destruct;
- (id)accountISO3Country;
- (id)accountIdentifier;
- (id)accountStoreFrontIdentifier;
- (id)cachedTimestamp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)entitledSubscriptions;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAccountISO3Country:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountStoreFrontIdentifier:(id)arg1;
- (void)setCachedTimestamp:(id)arg1;
- (void)setEntitledSubscriptions:(id)arg1;

@end
