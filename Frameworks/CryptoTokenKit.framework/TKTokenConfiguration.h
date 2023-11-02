
@interface TKTokenConfiguration : NSObject {
    TKTokenConfigurationConnection * _configurationConnection;
    NSArray * _keychainItems;
    TKTokenID * _tokenID;
}

@property (nonatomic, copy) NSData *configurationData;
@property (nonatomic, readonly) NSString *instanceID;
@property (nonatomic, copy) NSArray *keychainItems;
@property (nonatomic, readonly) TKTokenID *tokenID;

+ (bool)_hasSeparateKeysAndCertificatesObjectIDSpace;
+ (id)interfaceForChangeProtocol;
+ (id)interfaceForProtocol;
+ (void)set_hasSeparateKeysAndCertificatesObjectIDSpace:(bool)arg1;

- (void).cxx_destruct;
- (id)beginTransaction;
- (id)certificateForObjectID:(id)arg1 error:(id*)arg2;
- (id)configurationData;
- (id)initWithTokenID:(id)arg1 configurationConnection:(id)arg2;
- (id)instanceID;
- (id)keyForObjectID:(id)arg1 error:(id*)arg2;
- (id)keychainItems;
- (void)setConfigurationData:(id)arg1;
- (void)setKeychainItems:(id)arg1;
- (void)tokenConfigurationChanged:(id)arg1;
- (id)tokenID;

@end
