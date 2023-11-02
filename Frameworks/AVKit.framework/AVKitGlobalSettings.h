
@interface AVKitGlobalSettings : NSObject {
    bool  _attributedContentTitlesSupported;
    bool  _contentTabsEnabled;
    bool  _extendedVisualAnalysisEnabled;
    bool  _fluidSliderEnabled;
    bool  _isAVKitMacPlayer;
    bool  _isPhotosApp;
    bool  _isQuickLook;
    bool  _isSpotlight;
    bool  _isTVApp;
    bool  _overVideoScrubbingGestureEnabled;
    bool  _playbackSpeedControlEnabled;
    bool  _searchBannerEnabled;
    bool  _secondGenerationPlayerEnabled;
    bool  _subjectLiftGestureEnabled;
    bool  _visualAnalysisEnabled;
    bool  _visualAnalysisSupported;
}

@property (nonatomic, readonly) bool attributedContentTitlesSupported;
@property (nonatomic, readonly) bool contentTabsEnabled;
@property (nonatomic, readonly) bool extendedVisualAnalysisEnabled;
@property (nonatomic, readonly) bool fluidSliderEnabled;
@property (nonatomic, readonly) bool isAVKitMacPlayer;
@property (nonatomic, readonly) bool isPhotosApp;
@property (nonatomic, readonly) bool isQuickLook;
@property (nonatomic, readonly) bool isSpotlight;
@property (nonatomic, readonly) bool isTVApp;
@property (nonatomic, readonly) bool overVideoScrubbingGestureEnabled;
@property (nonatomic, readonly) bool playbackSpeedControlEnabled;
@property (nonatomic, readonly) bool searchBannerEnabled;
@property (nonatomic) bool secondGenerationPlayerEnabled;
@property (nonatomic, readonly) bool subjectLiftGestureEnabled;
@property (nonatomic, readonly) bool visualAnalysisEnabled;
@property (nonatomic, readonly) bool visualAnalysisSupported;

+ (bool)_overVideoScrubbingGestureEnabled;
+ (id)shared;

- (bool)attributedContentTitlesSupported;
- (bool)contentTabsEnabled;
- (bool)extendedVisualAnalysisEnabled;
- (bool)fluidSliderEnabled;
- (id)init;
- (bool)isAVKitMacPlayer;
- (bool)isPhotosApp;
- (bool)isQuickLook;
- (bool)isSpotlight;
- (bool)isTVApp;
- (bool)overVideoScrubbingGestureEnabled;
- (bool)playbackSpeedControlEnabled;
- (bool)searchBannerEnabled;
- (bool)secondGenerationPlayerEnabled;
- (void)setSecondGenerationPlayerEnabled:(bool)arg1;
- (bool)subjectLiftGestureEnabled;
- (bool)visualAnalysisEnabled;
- (bool)visualAnalysisSupported;

@end
