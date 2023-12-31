
@interface FCEntitlementsOverride : NSObject {
    NSArray * _entitlements;
    NSError * _error;
}

@property (nonatomic, copy) NSArray *entitlements;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)entitlements;
- (id)error;
- (id)initWithEntitlements:(id)arg1 error:(id)arg2;
- (void)setEntitlements:(id)arg1;
- (void)setError:(id)arg1;

@end
