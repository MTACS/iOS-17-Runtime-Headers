
@interface AMUIPosterSwitcherSettings : PTSettings {
    double  _chromeFadeoutTargetProgress;
    bool  _exitingCardBehaviorScaleDownOnly;
    double  _exitingCardTargetOpacity;
    double  _forwardTimeFadeoutTargetProgress;
    double  _horizontalExitingCardTargetScale;
    double  _horizontalScaleDampingRatio;
    double  _horizontalScaleResponse;
    bool  _horizontalSwitcherCircular;
    double  _labelFadeinTargetProgress;
    bool  _photoSymbolHugsEdge;
    double  _reverseTimeFadeoutTargetProgress;
    bool  _useFallbackTitleAndSymbol;
    double  _verticalExitingCardTargetScale;
    double  _verticalScaleDampingRatio;
    double  _verticalScaleResponse;
    double  _verticalScootch;
    bool  _verticalSwitcherCircular;
}

@property (nonatomic) double chromeFadeoutTargetProgress;
@property (nonatomic) bool exitingCardBehaviorScaleDownOnly;
@property (nonatomic) double exitingCardTargetOpacity;
@property (nonatomic) double forwardTimeFadeoutTargetProgress;
@property (nonatomic) double horizontalExitingCardTargetScale;
@property (nonatomic) double horizontalScaleDampingRatio;
@property (nonatomic) double horizontalScaleResponse;
@property (nonatomic) bool horizontalSwitcherCircular;
@property (nonatomic) double labelFadeinTargetProgress;
@property (nonatomic) bool photoSymbolHugsEdge;
@property (nonatomic) double reverseTimeFadeoutTargetProgress;
@property (nonatomic) bool useFallbackTitleAndSymbol;
@property (nonatomic) double verticalExitingCardTargetScale;
@property (nonatomic) double verticalScaleDampingRatio;
@property (nonatomic) double verticalScaleResponse;
@property (nonatomic) double verticalScootch;
@property (nonatomic) bool verticalSwitcherCircular;

+ (id)settingsControllerModule;

- (double)chromeFadeoutTargetProgress;
- (bool)exitingCardBehaviorScaleDownOnly;
- (double)exitingCardTargetOpacity;
- (double)forwardTimeFadeoutTargetProgress;
- (double)horizontalExitingCardTargetScale;
- (double)horizontalScaleDampingRatio;
- (double)horizontalScaleResponse;
- (bool)horizontalSwitcherCircular;
- (double)labelFadeinTargetProgress;
- (bool)photoSymbolHugsEdge;
- (double)reverseTimeFadeoutTargetProgress;
- (void)setChromeFadeoutTargetProgress:(double)arg1;
- (void)setDefaultValues;
- (void)setExitingCardBehaviorScaleDownOnly:(bool)arg1;
- (void)setExitingCardTargetOpacity:(double)arg1;
- (void)setForwardTimeFadeoutTargetProgress:(double)arg1;
- (void)setHorizontalExitingCardTargetScale:(double)arg1;
- (void)setHorizontalScaleDampingRatio:(double)arg1;
- (void)setHorizontalScaleResponse:(double)arg1;
- (void)setHorizontalSwitcherCircular:(bool)arg1;
- (void)setLabelFadeinTargetProgress:(double)arg1;
- (void)setPhotoSymbolHugsEdge:(bool)arg1;
- (void)setReverseTimeFadeoutTargetProgress:(double)arg1;
- (void)setUseFallbackTitleAndSymbol:(bool)arg1;
- (void)setVerticalExitingCardTargetScale:(double)arg1;
- (void)setVerticalScaleDampingRatio:(double)arg1;
- (void)setVerticalScaleResponse:(double)arg1;
- (void)setVerticalScootch:(double)arg1;
- (void)setVerticalSwitcherCircular:(bool)arg1;
- (bool)useFallbackTitleAndSymbol;
- (double)verticalExitingCardTargetScale;
- (double)verticalScaleDampingRatio;
- (double)verticalScaleResponse;
- (double)verticalScootch;
- (bool)verticalSwitcherCircular;

@end
