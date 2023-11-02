
@interface CKDPZoneSaveResponse : PBCodable <NSCopying> {
    CKDPZoneCapabilities * _capabilities;
    CKDPDate * _expirationTime;
    bool  _expired;
    struct { 
        unsigned int expired : 1; 
    }  _has;
}

@property (nonatomic, retain) CKDPZoneCapabilities *capabilities;
@property (nonatomic, retain) CKDPDate *expirationTime;
@property (nonatomic) bool expired;
@property (nonatomic, readonly) bool hasCapabilities;
@property (nonatomic, readonly) bool hasExpirationTime;
@property (nonatomic) bool hasExpired;

- (void).cxx_destruct;
- (id)capabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expirationTime;
- (bool)expired;
- (bool)hasCapabilities;
- (bool)hasExpirationTime;
- (bool)hasExpired;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setExpirationTime:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setHasExpired:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
