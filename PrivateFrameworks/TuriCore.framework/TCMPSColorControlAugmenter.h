
@interface TCMPSColorControlAugmenter : NSObject <TCMPSImageAugmenting> {
    double  _maxBrightnessDelta;
    double  _maxContrastProportion;
    double  _maxSaturationProportion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxBrightnessDelta;
@property (nonatomic) double maxContrastProportion;
@property (nonatomic) double maxSaturationProportion;
@property (readonly) Class superclass;

- (id)imageAugmentedFromImage:(id)arg1 generator:(id /* block */)arg2;
- (id)init;
- (double)maxBrightnessDelta;
- (double)maxContrastProportion;
- (double)maxSaturationProportion;
- (void)setMaxBrightnessDelta:(double)arg1;
- (void)setMaxContrastProportion:(double)arg1;
- (void)setMaxSaturationProportion:(double)arg1;

@end
