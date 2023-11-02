
@interface GEOUserPreferences : PBCodable <NSCopying> {
    bool  _avoidHighways;
    bool  _avoidTolls;
    NSMutableArray * _evChargingPreferences;
    struct { 
        unsigned int has_avoidHighways : 1; 
        unsigned int has_avoidTolls : 1; 
    }  _flags;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool avoidHighways;
@property (nonatomic) bool avoidTolls;
@property (nonatomic, retain) NSMutableArray *evChargingPreferences;
@property (nonatomic) bool hasAvoidHighways;
@property (nonatomic) bool hasAvoidTolls;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)evChargingPreferencesType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addEvChargingPreferences:(id)arg1;
- (bool)avoidHighways;
- (bool)avoidTolls;
- (void)clearEvChargingPreferences;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evChargingPreferences;
- (id)evChargingPreferencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)evChargingPreferencesCount;
- (bool)hasAvoidHighways;
- (bool)hasAvoidTolls;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidHighways:(bool)arg1;
- (void)setAvoidTolls:(bool)arg1;
- (void)setEvChargingPreferences:(id)arg1;
- (void)setHasAvoidHighways:(bool)arg1;
- (void)setHasAvoidTolls:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
