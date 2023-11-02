
@interface MUPlaceTileMeasurements : NSObject {
    double  _deviceScale;
    double  _maxFooterHeight;
    double  _maxSubtitleHeight;
    double  _maxTitleHeight;
    double  _tileWidth;
}

@property (nonatomic) double deviceScale;
@property (nonatomic) double maxFooterHeight;
@property (nonatomic) double maxSubtitleHeight;
@property (nonatomic) double maxTitleHeight;
@property (nonatomic) double tileWidth;

+ (id)defaultMeasurements;

- (double)deviceScale;
- (double)maxFooterHeight;
- (double)maxSubtitleHeight;
- (double)maxTitleHeight;
- (void)setDeviceScale:(double)arg1;
- (void)setMaxFooterHeight:(double)arg1;
- (void)setMaxSubtitleHeight:(double)arg1;
- (void)setMaxTitleHeight:(double)arg1;
- (void)setTileWidth:(double)arg1;
- (double)tileWidth;

@end
