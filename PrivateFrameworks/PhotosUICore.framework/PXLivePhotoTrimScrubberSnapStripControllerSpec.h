
@interface PXLivePhotoTrimScrubberSnapStripControllerSpec : NSObject {
    bool  _alwaysShowKeyTime;
    UIColor * _currentPositionMarkerColor;
    UIColor * _disabledColor;
    bool  _livePortraitStyle;
    UIColor * _originalPositionMarkerColor;
    bool  _showDefaultKeyTime;
    UIColor * _suggestedMarkerColor;
}

@property (nonatomic) bool alwaysShowKeyTime;
@property (nonatomic, retain) UIColor *currentPositionMarkerColor;
@property (nonatomic, retain) UIColor *disabledColor;
@property (nonatomic) bool livePortraitStyle;
@property (nonatomic, retain) UIColor *originalPositionMarkerColor;
@property (nonatomic) bool showDefaultKeyTime;
@property (nonatomic, retain) UIColor *suggestedMarkerColor;

- (void).cxx_destruct;
- (bool)alwaysShowKeyTime;
- (id)currentPositionMarkerColor;
- (id)disabledColor;
- (id)init;
- (bool)livePortraitStyle;
- (id)originalPositionMarkerColor;
- (void)setAlwaysShowKeyTime:(bool)arg1;
- (void)setCurrentPositionMarkerColor:(id)arg1;
- (void)setDisabledColor:(id)arg1;
- (void)setLivePortraitStyle:(bool)arg1;
- (void)setOriginalPositionMarkerColor:(id)arg1;
- (void)setShowDefaultKeyTime:(bool)arg1;
- (void)setSuggestedMarkerColor:(id)arg1;
- (bool)showDefaultKeyTime;
- (id)suggestedMarkerColor;

@end
