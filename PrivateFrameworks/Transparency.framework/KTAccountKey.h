
@interface KTAccountKey : NSObject {
    NSData * __accountPublicKeyInfo;
    TransparencyApplication * _application;
    NSString * _applicationIdentifier;
}

@property (retain) NSData *_accountPublicKeyInfo;
@property (readonly) KTAccountPublicID *accountPublicID;
@property (readonly) NSData *accountPublicKey;
@property (readonly) NSData *accountPublicKeyInfo;
@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

+ (id)accountPublicID:(id)arg1;
+ (id)accountPublicKey:(id)arg1;

- (void).cxx_destruct;
- (id)_accountPublicKeyInfo;
- (id)accountPublicID;
- (id)accountPublicKey;
- (id)accountPublicKeyInfo;
- (id)application;
- (id)applicationIdentifier;
- (id)initWithApplication:(id)arg1;
- (void)rollKey:(id /* block */)arg1;
- (void)setApplication:(id)arg1;
- (void)set_accountPublicKeyInfo:(id)arg1;
- (void)signData:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)signDataCIP:(id)arg1 completionBlock:(id /* block */)arg2;

@end
