
@interface NPKIDVRemoteDeviceProtoGenerateKeyRequest : PBRequest <NSCopying> {
    NSMutableArray * _configuredPartitionsIdentifiers;
    NSString * _credentialIdentifier;
    NSString * _keyTypeString;
}

@property (nonatomic, retain) NSMutableArray *configuredPartitionsIdentifiers;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, readonly) bool hasCredentialIdentifier;
@property (nonatomic, readonly) bool hasKeyTypeString;
@property (nonatomic, retain) NSString *keyTypeString;

+ (Class)configuredPartitionsIdentifiersType;

- (void).cxx_destruct;
- (void)addConfiguredPartitionsIdentifiers:(id)arg1;
- (void)clearConfiguredPartitionsIdentifiers;
- (id)configuredPartitionsIdentifiers;
- (id)configuredPartitionsIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)configuredPartitionsIdentifiersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCredentialIdentifier;
- (bool)hasKeyTypeString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyTypeString;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfiguredPartitionsIdentifiers:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setKeyTypeString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
