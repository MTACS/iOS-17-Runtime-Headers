
@interface ADClientSettingsRequest : PBRequest <NSCopying> {
    NSMutableArray * _currentSearchLandingAdsSettingParams;
    NSMutableArray * _currentSettingParams;
    NSString * _iAdIDString;
}

@property (nonatomic, retain) NSMutableArray *currentSearchLandingAdsSettingParams;
@property (nonatomic, retain) NSMutableArray *currentSettingParams;
@property (nonatomic, readonly) bool hasIAdIDString;
@property (nonatomic, retain) NSString *iAdIDString;

+ (Class)currentSearchLandingAdsSettingParamsType;
+ (Class)currentSettingParamsType;
+ (id)options;

- (void).cxx_destruct;
- (void)addCurrentSearchLandingAdsSettingParams:(id)arg1;
- (void)addCurrentSettingParams:(id)arg1;
- (void)clearCurrentSearchLandingAdsSettingParams;
- (void)clearCurrentSettingParams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSearchLandingAdsSettingParams;
- (id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentSearchLandingAdsSettingParamsCount;
- (id)currentSettingParams;
- (id)currentSettingParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentSettingParamsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIAdIDString;
- (unsigned long long)hash;
- (id)iAdIDString;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentSearchLandingAdsSettingParams:(id)arg1;
- (void)setCurrentSettingParams:(id)arg1;
- (void)setIAdIDString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
