
@interface MTKeyRequestData : NSObject {
    NSString * _contentAdamId;
    NSData * _keyData;
    NSString * _keyIdentifier;
    NSNumber * _secureInvalidationDsid;
}

@property (nonatomic, retain) NSString *contentAdamId;
@property (nonatomic, retain) NSData *keyData;
@property (nonatomic, retain) NSString *keyIdentifier;
@property (nonatomic, retain) NSNumber *secureInvalidationDsid;

- (void).cxx_destruct;
- (id)contentAdamId;
- (id)keyData;
- (id)keyIdentifier;
- (id)secureInvalidationDsid;
- (void)setContentAdamId:(id)arg1;
- (void)setKeyData:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;
- (void)setSecureInvalidationDsid:(id)arg1;

@end
