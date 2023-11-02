
@interface PXStoryMultipartPanoramaSettings : PXSettings {
    bool  _isFeatureEnabled;
    long long  _maximumNumberOfParts;
    double  _maximumTileSide;
    long long  _overlappingTileCount;
    double  _productionReportsTimeInterval;
    double  _productionSimulatedDelay;
    double  _tileOverlapThreshold;
}

@property (nonatomic) bool isFeatureEnabled;
@property (nonatomic) long long maximumNumberOfParts;
@property (nonatomic) double maximumTileSide;
@property (nonatomic) long long overlappingTileCount;
@property (nonatomic) double productionReportsTimeInterval;
@property (nonatomic) double productionSimulatedDelay;
@property (nonatomic) double tileOverlapThreshold;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)isFeatureEnabled;
- (long long)maximumNumberOfParts;
- (double)maximumTileSide;
- (long long)overlappingTileCount;
- (id)parentSettings;
- (double)productionReportsTimeInterval;
- (double)productionSimulatedDelay;
- (void)setDefaultValues;
- (void)setIsFeatureEnabled:(bool)arg1;
- (void)setMaximumNumberOfParts:(long long)arg1;
- (void)setMaximumTileSide:(double)arg1;
- (void)setOverlappingTileCount:(long long)arg1;
- (void)setProductionReportsTimeInterval:(double)arg1;
- (void)setProductionSimulatedDelay:(double)arg1;
- (void)setTileOverlapThreshold:(double)arg1;
- (double)tileOverlapThreshold;

@end
