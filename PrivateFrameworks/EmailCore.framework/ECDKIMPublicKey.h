
@interface ECDKIMPublicKey : NSObject {
    NSString * _flags;
    unsigned long long  _hashingAlgorithm;
    NSString * _notes;
    NSData * _publicKeyData;
    NSString * _serviceType;
    unsigned long long  _signingAlgorithm;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *flags;
@property (nonatomic, readonly) unsigned long long hashingAlgorithm;
@property (nonatomic, readonly, copy) NSString *notes;
@property (nonatomic, readonly, copy) NSData *publicKeyData;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic, readonly) unsigned long long signingAlgorithm;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (void)_parseAcceptableHashingAlgorithmsFromDictionary:(id)arg1;
- (void)_parseFlagsFromDictionary:(id)arg1;
- (void)_parseNotesFromDictionary:(id)arg1;
- (void)_parsePublicKeyDataFromDictionary:(id)arg1;
- (void)_parseServiceTypeFromDictionary:(id)arg1;
- (void)_parseSigningAlgorithmFromDictionary:(id)arg1;
- (void)_parseVersionFromDictionary:(id)arg1;
- (id)description;
- (id)flags;
- (unsigned long long)hashingAlgorithm;
- (id)initWithKeyValueDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (id)initWithVersion:(id)arg1 hashingAlgorithm:(unsigned long long)arg2 signingAlgorithm:(unsigned long long)arg3 notes:(id)arg4 publicKeyData:(id)arg5 serviceType:(id)arg6 flags:(id)arg7;
- (id)notes;
- (id)publicKeyData;
- (id)serviceType;
- (unsigned long long)signingAlgorithm;
- (id)version;

@end
