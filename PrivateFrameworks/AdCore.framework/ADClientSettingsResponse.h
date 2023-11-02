
@interface ADClientSettingsResponse : PBCodable <NSCopying> {
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
    }  _has;
    NSMutableArray * _searchAdsSettingsParams;
    NSMutableArray * _searchLandingAdsSettingsParams;
}

@property (nonatomic) double expirationDate;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, retain) NSMutableArray *searchAdsSettingsParams;
@property (nonatomic, retain) NSMutableArray *searchLandingAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;
+ (Class)searchLandingAdsSettingsParamsType;

- (void).cxx_destruct;
- (void)addSearchAdsSettingsParams:(id)arg1;
- (void)addSearchLandingAdsSettingsParams:(id)arg1;
- (void)clearSearchAdsSettingsParams;
- (void)clearSearchLandingAdsSettingsParams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasExpirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchAdsSettingsParams;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAdsSettingsParamsCount;
- (id)searchLandingAdsSettingsParams;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setSearchAdsSettingsParams:(id)arg1;
- (void)setSearchLandingAdsSettingsParams:(id)arg1;
- (void)writeTo:(id)arg1;

@end
