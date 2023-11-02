
@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats : PBCodable <NSCopying> {
    double  _conversions;
    struct { 
        unsigned int conversions : 1; 
        unsigned int impressions : 1; 
    }  _has;
    double  _impressions;
}

@property (nonatomic) double conversions;
@property (nonatomic) bool hasConversions;
@property (nonatomic) bool hasImpressions;
@property (nonatomic) double impressions;

- (double)conversions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConversions;
- (bool)hasImpressions;
- (unsigned long long)hash;
- (double)impressions;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConversions:(double)arg1;
- (void)setHasConversions:(bool)arg1;
- (void)setHasImpressions:(bool)arg1;
- (void)setImpressions:(double)arg1;
- (void)writeTo:(id)arg1;

@end
