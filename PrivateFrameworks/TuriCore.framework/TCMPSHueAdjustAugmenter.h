
@interface TCMPSHueAdjustAugmenter : NSObject <TCMPSImageAugmenting> {
    double  _maxHueAdjust;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxHueAdjust;
@property (readonly) Class superclass;

- (id)imageAugmentedFromImage:(id)arg1 generator:(id /* block */)arg2;
- (id)init;
- (double)maxHueAdjust;
- (void)setMaxHueAdjust:(double)arg1;

@end
