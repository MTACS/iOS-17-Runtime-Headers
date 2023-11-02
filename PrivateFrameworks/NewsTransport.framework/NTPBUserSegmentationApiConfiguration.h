
@interface NTPBUserSegmentationApiConfiguration : PBCodable <NSCopying> {
    NSString * _userSegmentationApiModMax;
    NSString * _userSegmentationApiModThreshold;
    NSString * _userSegmentationRefreshRate;
}

@property (nonatomic, readonly) bool hasUserSegmentationApiModMax;
@property (nonatomic, readonly) bool hasUserSegmentationApiModThreshold;
@property (nonatomic, readonly) bool hasUserSegmentationRefreshRate;
@property (nonatomic, retain) NSString *userSegmentationApiModMax;
@property (nonatomic, retain) NSString *userSegmentationApiModThreshold;
@property (nonatomic, retain) NSString *userSegmentationRefreshRate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserSegmentationApiModMax;
- (bool)hasUserSegmentationApiModThreshold;
- (bool)hasUserSegmentationRefreshRate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUserSegmentationApiModMax:(id)arg1;
- (void)setUserSegmentationApiModThreshold:(id)arg1;
- (void)setUserSegmentationRefreshRate:(id)arg1;
- (id)userSegmentationApiModMax;
- (id)userSegmentationApiModThreshold;
- (id)userSegmentationRefreshRate;
- (void)writeTo:(id)arg1;

@end
