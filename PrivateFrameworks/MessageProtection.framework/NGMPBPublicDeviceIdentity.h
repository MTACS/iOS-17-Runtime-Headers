
@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying> {
    struct { 
        unsigned int secondaryVersion : 1; 
    }  _has;
    unsigned int  _secondaryVersion;
    NSData * _signingKey;
}

@property (nonatomic) bool hasSecondaryVersion;
@property (nonatomic) unsigned int secondaryVersion;
@property (nonatomic, retain) NSData *signingKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSecondaryVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)secondaryVersion;
- (void)setHasSecondaryVersion:(bool)arg1;
- (void)setSecondaryVersion:(unsigned int)arg1;
- (void)setSigningKey:(id)arg1;
- (id)signingKey;
- (void)writeTo:(id)arg1;

@end
