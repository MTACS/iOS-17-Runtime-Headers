
@interface SBSystemApertureHidingTestRecipe : NSObject <SBTestRecipe> {
    NSArray * _alphaValues;
    long long  _currentAlphaIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyAlpha;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (id)title;

@end
