
@interface VNRegionOfInterestTilingOptions : NSObject <NSCopying> {
    double  _regionOfInterestAspectRatioThreshold;
    long long  _tileOverflowCount;
    double  _tileOverlapPercentage;
}

@property double regionOfInterestAspectRatioThreshold;
@property long long tileOverflowCount;
@property double tileOverlapPercentage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)regionOfInterestAspectRatioThreshold;
- (void)setRegionOfInterestAspectRatioThreshold:(double)arg1;
- (void)setTileOverflowCount:(long long)arg1;
- (void)setTileOverlapPercentage:(double)arg1;
- (long long)tileOverflowCount;
- (double)tileOverlapPercentage;

@end
