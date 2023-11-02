
@interface CRKInMemoryIdentity : NSObject <CRKIdentity> {
    <CRKCertificate> * _certificate;
    <CRKPrivateKey> * _privateKey;
}

@property (nonatomic, readonly) <CRKCertificate> *certificate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CRKPrivateKey> *privateKey;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __SecIdentity { }*underlyingIdentity;

+ (id)identityWithConfiguration:(id)arg1 validityDateInterval:(id)arg2;

- (void).cxx_destruct;
- (id)certificate;
- (id)initWithCertificate:(id)arg1 privateKey:(id)arg2;
- (id)privateKey;
- (struct __SecIdentity { }*)underlyingIdentity;

@end
