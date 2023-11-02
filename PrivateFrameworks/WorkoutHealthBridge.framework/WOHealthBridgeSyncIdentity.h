
@interface WOHealthBridgeSyncIdentity : PBCodable <NSCopying> {
    NSData * _databaseIdentifier;
    NSData * _hardwareIdentifier;
    NSString * _instanceDiscriminator;
}

@property (nonatomic, retain) NSData *databaseIdentifier;
@property (nonatomic, retain) NSData *hardwareIdentifier;
@property (nonatomic, retain) NSString *instanceDiscriminator;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (id)instanceDiscriminator;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDatabaseIdentifier:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setInstanceDiscriminator:(id)arg1;
- (void)writeTo:(id)arg1;

@end
