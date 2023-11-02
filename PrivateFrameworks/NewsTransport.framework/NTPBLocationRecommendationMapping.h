
@interface NTPBLocationRecommendationMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
    }  _has;
    double  _latitude;
    double  _longitude;
    NSMutableArray * _recommendationProviders;
}

@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, retain) NSMutableArray *recommendationProviders;

+ (Class)recommendationProvidersType;

- (void).cxx_destruct;
- (void)addRecommendationProviders:(id)arg1;
- (void)clearRecommendationProviders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recommendationProviders;
- (id)recommendationProvidersAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendationProvidersCount;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setRecommendationProviders:(id)arg1;
- (void)writeTo:(id)arg1;

@end
