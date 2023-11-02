
@interface SBPIPContentViewLayoutContext : NSObject {
    NSString * _contentTypeIdentifier;
    double  _currentAspectRatio;
    double  _currentSize;
    SBPIPDefaults * _defaults;
    double  _maximumSizePreference;
    double  _maximumSizeSpanForPreferredSizeTuning;
    double  _minimumSizePreference;
    double  _minimumSizeSpanBetweenPreferredSizes;
    bool  _sizeChanged;
}

@property (nonatomic, copy) NSString *contentTypeIdentifier;
@property (nonatomic) double currentAspectRatio;
@property (nonatomic) double currentSize;
@property (nonatomic, retain) SBPIPDefaults *defaults;
@property (nonatomic) double maximumSizePreference;
@property (nonatomic) double maximumSizeSpanForPreferredSizeTuning;
@property (nonatomic) double minimumSizePreference;
@property (nonatomic) double minimumSizeSpanBetweenPreferredSizes;
@property (getter=hasSizeChanged, nonatomic, readonly) bool sizeChanged;

- (void).cxx_destruct;
- (id)contentTypeIdentifier;
- (double)currentAspectRatio;
- (double)currentSize;
- (id)defaults;
- (bool)hasSizeChanged;
- (id)initWithPlatformMetrics:(id)arg1 contentSize:(struct CGSize { double x1; double x2; })arg2 defaults:(id)arg3;
- (double)maximumSizePreference;
- (double)maximumSizeSpanForPreferredSizeTuning;
- (double)minimumSizePreference;
- (double)minimumSizeSpanBetweenPreferredSizes;
- (void)setContentTypeIdentifier:(id)arg1;
- (void)setCurrentAspectRatio:(double)arg1;
- (void)setCurrentSize:(double)arg1;
- (void)setCurrentSize:(double)arg1 forAspectRatio:(double)arg2;
- (void)setDefaults:(id)arg1;
- (void)setMaximumSizePreference:(double)arg1;
- (void)setMaximumSizeSpanForPreferredSizeTuning:(double)arg1;
- (void)setMinimumSizePreference:(double)arg1;
- (void)setMinimumSizeSpanBetweenPreferredSizes:(double)arg1;
- (void)updatePlatformMetrics:(id)arg1;

@end
