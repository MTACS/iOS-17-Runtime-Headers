
@interface PKSEConsistencyCheckPassCredential : NSObject {
    PKSECredentialAddress * _address;
    bool  _containsSubkeys;
    NSDictionary * _keyMaterialHashForDeviceCredentialType;
    unsigned long long  _paymentMethod;
    long long  _state;
    unsigned long long  _type;
    id  _underlyingpassCredential;
}

@property (nonatomic, readonly) PKSECredentialAddress *address;
@property (nonatomic, readonly) bool containsSubkeys;
@property (nonatomic, retain) NSDictionary *keyMaterialHashForDeviceCredentialType;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) unsigned long long paymentMethod;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) PKAppletSubcredential *subcredential;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)address;
- (bool)containsSubkeys;
- (id)description;
- (id)init;
- (id)initWithPassCredential:(id)arg1 address:(id)arg2 paymentMethod:(unsigned long long)arg3;
- (id)keyMaterialHashForDeviceCredentialType;
- (id)paymentApplication;
- (unsigned long long)paymentMethod;
- (void)setKeyMaterialHashForDeviceCredentialType:(id)arg1;
- (long long)state;
- (id)subcredential;
- (unsigned long long)type;

@end
