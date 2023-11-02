
@interface BMPBPhotosPhotoViewEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _contentProtection;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSMutableArray * _locations;
    NSString * _personaId;
    NSString * _uniqueId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *contentProtection;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasContentProtection;
@property (nonatomic, readonly) bool hasPersonaId;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) NSString *uniqueId;

+ (Class)locationsType;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)addLocations:(id)arg1;
- (void)clearLocations;
- (id)contentProtection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasContentProtection;
- (bool)hasPersonaId;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locations;
- (id)locationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (id)personaId;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setContentProtection:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
