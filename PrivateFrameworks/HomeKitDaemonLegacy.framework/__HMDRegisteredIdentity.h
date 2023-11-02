
@interface __HMDRegisteredIdentity : HMFObject {
    HMFPairingIdentity * _identity;
    NSMutableArray * _registeredObjects;
}

@property (readonly, copy) HMFPairingIdentity *identity;
@property (readonly) NSMutableArray *registeredObjects;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)identity;
- (id)init;
- (id)initWithIdentity:(id)arg1;
- (id)registeredObjects;

@end
