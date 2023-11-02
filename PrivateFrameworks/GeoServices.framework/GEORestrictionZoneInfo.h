
@interface GEORestrictionZoneInfo : PBCodable <NSCopying> {
    int  _environmentalCongestionZoneImpact;
    struct { 
        unsigned int has_environmentalCongestionZoneImpact : 1; 
        unsigned int has_licensePlateRestrictionImpact : 1; 
        unsigned int has_tollCongestionZoneImpact : 1; 
    }  _flags;
    int  _licensePlateRestrictionImpact;
    NSMutableArray * _restrictedZoneIds;
    int  _tollCongestionZoneImpact;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int environmentalCongestionZoneImpact;
@property (nonatomic) bool hasEnvironmentalCongestionZoneImpact;
@property (nonatomic) bool hasLicensePlateRestrictionImpact;
@property (nonatomic) bool hasTollCongestionZoneImpact;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (nonatomic, retain) NSMutableArray *restrictedZoneIds;
@property (nonatomic) int tollCongestionZoneImpact;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)restrictedZoneIdsType;

- (void).cxx_destruct;
- (int)StringAsEnvironmentalCongestionZoneImpact:(id)arg1;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;
- (int)StringAsTollCongestionZoneImpact:(id)arg1;
- (void)addRestrictedZoneIds:(id)arg1;
- (void)clearRestrictedZoneIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)environmentalCongestionZoneImpact;
- (id)environmentalCongestionZoneImpactAsString:(int)arg1;
- (bool)hasEnvironmentalCongestionZoneImpact;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLicensePlateRestrictionImpact;
- (bool)hasTollCongestionZoneImpact;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)licensePlateRestrictionImpact;
- (id)licensePlateRestrictionImpactAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)restrictedZoneIds;
- (id)restrictedZoneIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restrictedZoneIdsCount;
- (void)setEnvironmentalCongestionZoneImpact:(int)arg1;
- (void)setHasEnvironmentalCongestionZoneImpact:(bool)arg1;
- (void)setHasLicensePlateRestrictionImpact:(bool)arg1;
- (void)setHasTollCongestionZoneImpact:(bool)arg1;
- (void)setLicensePlateRestrictionImpact:(int)arg1;
- (void)setRestrictedZoneIds:(id)arg1;
- (void)setTollCongestionZoneImpact:(int)arg1;
- (int)tollCongestionZoneImpact;
- (id)tollCongestionZoneImpactAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
