
@interface NGMPBDevicePreKey : PBCodable <NSCopying> {
    NGMPBP256Key * _dhKey;
    struct { 
        unsigned int secondaryVersion : 1; 
    }  _has;
    NSData * _prekeySignature;
    NSData * _secondaryPrivateKey;
    NSData * _secondaryRegistrationData;
    unsigned int  _secondaryVersion;
    double  _timestamp;
}

@property (nonatomic, retain) NGMPBP256Key *dhKey;
@property (nonatomic, readonly) bool hasDhKey;
@property (nonatomic, readonly) bool hasSecondaryPrivateKey;
@property (nonatomic, readonly) bool hasSecondaryRegistrationData;
@property (nonatomic) bool hasSecondaryVersion;
@property (nonatomic, retain) NSData *prekeySignature;
@property (nonatomic, retain) NSData *secondaryPrivateKey;
@property (nonatomic, retain) NSData *secondaryRegistrationData;
@property (nonatomic) unsigned int secondaryVersion;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dhKey;
- (id)dictionaryRepresentation;
- (bool)hasDhKey;
- (bool)hasSecondaryPrivateKey;
- (bool)hasSecondaryRegistrationData;
- (bool)hasSecondaryVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prekeySignature;
- (bool)readFrom:(id)arg1;
- (id)secondaryPrivateKey;
- (id)secondaryRegistrationData;
- (unsigned int)secondaryVersion;
- (void)setDhKey:(id)arg1;
- (void)setHasSecondaryVersion:(bool)arg1;
- (void)setPrekeySignature:(id)arg1;
- (void)setSecondaryPrivateKey:(id)arg1;
- (void)setSecondaryRegistrationData:(id)arg1;
- (void)setSecondaryVersion:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
