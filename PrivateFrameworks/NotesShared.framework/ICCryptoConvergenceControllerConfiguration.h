
@interface ICCryptoConvergenceControllerConfiguration : NSObject <NSCopying> {
    NSString * _divergedPassphrase;
    ICEncryptionKey * _divergedV1MainKey;
    ICEncryptionKey * _divergedV1NeoMainKey;
    bool  _includeAllAuthenticatedNotes;
    NSString * _passphrase;
    bool  _userInitiated;
    ICEncryptionKey * _v1MainKey;
    ICEncryptionKey * _v1NeoMainKey;
}

@property (nonatomic, copy) NSString *divergedPassphrase;
@property (nonatomic, copy) ICEncryptionKey *divergedV1MainKey;
@property (nonatomic, copy) ICEncryptionKey *divergedV1NeoMainKey;
@property (nonatomic) bool includeAllAuthenticatedNotes;
@property (nonatomic, copy) NSString *passphrase;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;
@property (nonatomic, copy) ICEncryptionKey *v1MainKey;
@property (nonatomic, copy) ICEncryptionKey *v1NeoMainKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)divergedPassphrase;
- (id)divergedV1MainKey;
- (id)divergedV1NeoMainKey;
- (unsigned long long)hash;
- (bool)includeAllAuthenticatedNotes;
- (bool)isEqual:(id)arg1;
- (bool)isUserInitiated;
- (id)passphrase;
- (void)setDivergedPassphrase:(id)arg1;
- (void)setDivergedV1MainKey:(id)arg1;
- (void)setDivergedV1NeoMainKey:(id)arg1;
- (void)setIncludeAllAuthenticatedNotes:(bool)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setUserInitiated:(bool)arg1;
- (void)setV1MainKey:(id)arg1;
- (void)setV1NeoMainKey:(id)arg1;
- (bool)shouldConvergeNote:(id)arg1;
- (id)v1MainKey;
- (id)v1NeoMainKey;

@end
