
@interface GEOWiFiConnectionRoamState : PBCodable <NSCopying> {
    struct { 
        unsigned int has_lateRoamMaxRSSI : 1; 
        unsigned int has_lateRoamMinRSSI : 1; 
    }  _flags;
    int  _lateRoamMaxRSSI;
    int  _lateRoamMinRSSI;
}

@property (nonatomic) bool hasLateRoamMaxRSSI;
@property (nonatomic) bool hasLateRoamMinRSSI;
@property (nonatomic) int lateRoamMaxRSSI;
@property (nonatomic) int lateRoamMinRSSI;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLateRoamMaxRSSI;
- (bool)hasLateRoamMinRSSI;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)lateRoamMaxRSSI;
- (int)lateRoamMinRSSI;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLateRoamMaxRSSI:(bool)arg1;
- (void)setHasLateRoamMinRSSI:(bool)arg1;
- (void)setLateRoamMaxRSSI:(int)arg1;
- (void)setLateRoamMinRSSI:(int)arg1;
- (void)writeTo:(id)arg1;

@end
