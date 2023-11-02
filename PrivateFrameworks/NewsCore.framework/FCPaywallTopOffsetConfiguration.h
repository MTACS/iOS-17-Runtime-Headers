
@interface FCPaywallTopOffsetConfiguration : NSObject <NSCopying> {
    double  _compactLandscapeTopOffsetRatio;
    double  _compactPortraitTopOffsetRatio;
    double  _regularLandscapeTopOffsetRatio;
    double  _regularPortraitTopOffsetRatio;
}

@property (nonatomic, readonly) double compactLandscapeTopOffsetRatio;
@property (nonatomic, readonly) double compactPortraitTopOffsetRatio;
@property (nonatomic, readonly) double regularLandscapeTopOffsetRatio;
@property (nonatomic, readonly) double regularPortraitTopOffsetRatio;

- (double)compactLandscapeTopOffsetRatio;
- (double)compactPortraitTopOffsetRatio;
- (id)init;
- (id)initWithCompactPortraitTopOffsetRatio:(double)arg1 compactLandscapeTopOffsetRatio:(double)arg2 regularPortraitTopOffsetRatio:(double)arg3 regularLandscapeTopOffsetRatio:(double)arg4;
- (id)initWithConfigDictionary:(id)arg1;
- (double)regularLandscapeTopOffsetRatio;
- (double)regularPortraitTopOffsetRatio;

@end
