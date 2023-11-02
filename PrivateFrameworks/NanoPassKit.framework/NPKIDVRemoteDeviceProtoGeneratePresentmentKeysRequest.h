
@interface NPKIDVRemoteDeviceProtoGeneratePresentmentKeysRequest : PBRequest <NSCopying> {
    NSMutableArray * _configuredPartitionsIdentifiers;
    NSString * _credentialIdentifier;
    struct { 
        unsigned int numKeys : 1; 
    }  _has;
    unsigned int  _numKeys;
}

@property (nonatomic, retain) NSMutableArray *configuredPartitionsIdentifiers;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, readonly) bool hasCredentialIdentifier;
@property (nonatomic) bool hasNumKeys;
@property (nonatomic) unsigned int numKeys;

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
- (bool)hasNumKeys;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numKeys;
- (bool)readFrom:(id)arg1;
- (void)setConfiguredPartitionsIdentifiers:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setHasNumKeys:(bool)arg1;
- (void)setNumKeys:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
