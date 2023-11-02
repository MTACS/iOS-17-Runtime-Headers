
@interface HKCodablePrescriptionType : PBCodable <NSCopying> {
    bool  _contacts;
    NSString * _glassesDescription;
    struct APPLE_HKCodablePrescriptionType_1 { 
        unsigned int contacts : 1; 
    }  _has;
}

@property (nonatomic) bool contacts;
@property (nonatomic, retain) NSString *glassesDescription;
@property (nonatomic) bool hasContacts;
@property (nonatomic, readonly) bool hasGlassesDescription;

- (void).cxx_destruct;
- (bool)contacts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)glassesDescription;
- (bool)hasContacts;
- (bool)hasGlassesDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContacts:(bool)arg1;
- (void)setGlassesDescription:(id)arg1;
- (void)setHasContacts:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
