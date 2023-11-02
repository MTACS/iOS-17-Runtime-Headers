
@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey> {
    CRKIdentityConfiguration * _configuration;
}

@property (nonatomic, readonly, copy) CRKIdentityConfiguration *configuration;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __SecKey { }*underlyingPrivateKey;

- (void).cxx_destruct;
- (id)configuration;
- (id)dataRepresentation;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithData:(id)arg1;
- (struct __SecKey { }*)underlyingPrivateKey;

@end
