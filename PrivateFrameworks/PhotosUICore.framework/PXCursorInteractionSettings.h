
@interface PXCursorInteractionSettings : PXSettings {
    double  _allPhotosAspectFillPadding;
    double  _allPhotosAspectFitPadding;
    double  _animationDuration;
    long long  _aspectFillAnimationStyle;
    long long  _aspectFitAnimationStyle;
    double  _dampingRatio;
    double  _daysPadding;
    bool  _enableCardLift;
    bool  _enableCardShadows;
    bool  _enableCuratedLibraryEffects;
    bool  _enableDaysEffect;
    bool  _enableDetailsEffect;
    bool  _enableGridLift;
    bool  _enableGridShadows;
    double  _monthsPadding;
    double  _yearsPadding;
}

@property (nonatomic) double allPhotosAspectFillPadding;
@property (nonatomic) double allPhotosAspectFitPadding;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long aspectFillAnimationStyle;
@property (nonatomic) long long aspectFitAnimationStyle;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double daysPadding;
@property (nonatomic) bool enableCardLift;
@property (nonatomic) bool enableCardShadows;
@property (nonatomic) bool enableCuratedLibraryEffects;
@property (nonatomic) bool enableDaysEffect;
@property (nonatomic) bool enableDetailsEffect;
@property (nonatomic) bool enableGridLift;
@property (nonatomic) bool enableGridShadows;
@property (nonatomic) double monthsPadding;
@property (nonatomic) double yearsPadding;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)allPhotosAspectFillPadding;
- (double)allPhotosAspectFitPadding;
- (double)animationDuration;
- (long long)aspectFillAnimationStyle;
- (long long)aspectFitAnimationStyle;
- (long long)cardInteractionOptions;
- (double)dampingRatio;
- (double)daysPadding;
- (bool)enableCardLift;
- (bool)enableCardShadows;
- (bool)enableCuratedLibraryEffects;
- (bool)enableDaysEffect;
- (bool)enableDetailsEffect;
- (bool)enableGridLift;
- (bool)enableGridShadows;
- (long long)gridInteractionOptions;
- (long long)interactionOptionsForZoomLevel:(long long)arg1 isAllPhotosAspectFit:(bool)arg2;
- (double)monthsPadding;
- (double)paddingForZoomLevel:(long long)arg1;
- (id)parentSettings;
- (void)setAllPhotosAspectFillPadding:(double)arg1;
- (void)setAllPhotosAspectFitPadding:(double)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAspectFillAnimationStyle:(long long)arg1;
- (void)setAspectFitAnimationStyle:(long long)arg1;
- (void)setDampingRatio:(double)arg1;
- (void)setDaysPadding:(double)arg1;
- (void)setDefaultValues;
- (void)setEnableCardLift:(bool)arg1;
- (void)setEnableCardShadows:(bool)arg1;
- (void)setEnableCuratedLibraryEffects:(bool)arg1;
- (void)setEnableDaysEffect:(bool)arg1;
- (void)setEnableDetailsEffect:(bool)arg1;
- (void)setEnableGridLift:(bool)arg1;
- (void)setEnableGridShadows:(bool)arg1;
- (void)setMonthsPadding:(double)arg1;
- (void)setYearsPadding:(double)arg1;
- (double)yearsPadding;

@end
