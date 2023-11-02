
@interface PXStoryPlayButtonSpec : NSObject {
    PXStoryChromeButtonSpec * _chromeButtonSpec;
    double  _playButtonProgressIndicatorLineWidth;
}

@property (nonatomic, readonly) PXStoryChromeButtonSpec *chromeButtonSpec;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, readonly) double playButtonProgressIndicatorLineWidth;

- (void).cxx_destruct;
- (id)chromeButtonSpec;
- (id)extendedTraitCollection;
- (id)initWithChromeButtonSpec:(id)arg1;
- (double)playButtonProgressIndicatorLineWidth;

@end
