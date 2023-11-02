
@interface RBEntitlements : NSObject <RBEntitlementPossessing> {
    NSSet * _entitlements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithEntitlements:(id)arg1;
- (id)description;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasEntitlementDomain:(unsigned long long)arg1;
- (id)init;

@end
