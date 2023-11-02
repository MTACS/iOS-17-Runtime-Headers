
@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying> {
    NSData * _prekey;
    NSData * _prekeySignature;
    NSData * _secondaryPrekey;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasSecondaryPrekey;
@property (nonatomic, retain) NSData *prekey;
@property (nonatomic, retain) NSData *prekeySignature;
@property (nonatomic, retain) NSData *secondaryPrekey;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSecondaryPrekey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prekey;
- (id)prekeySignature;
- (bool)readFrom:(id)arg1;
- (id)secondaryPrekey;
- (void)setPrekey:(id)arg1;
- (void)setPrekeySignature:(id)arg1;
- (void)setSecondaryPrekey:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
