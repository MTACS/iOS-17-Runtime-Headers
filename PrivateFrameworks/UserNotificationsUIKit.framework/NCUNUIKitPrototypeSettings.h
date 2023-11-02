
@interface NCUNUIKitPrototypeSettings : PTSettings {
    NCSpringAnimationSettings * _briefBackgroundSettings;
    double  _briefGrabberMilestone;
    NCSpringAnimationSettings * _briefGrabberSettings;
    NCSpringAnimationSettings * _briefIconOpacitySettings;
    double  _briefIconPositionMilestone;
    NCSpringAnimationSettings * _briefIconPositionSettings;
    double  _briefIconScaleMilestone;
    NCSpringAnimationSettings * _briefIconScaleSettings;
    NCSpringAnimationSettings * _briefTextOpacitySettings;
    double  _briefTextPositionMilestone;
    NCSpringAnimationSettings * _briefTextPositionSettings;
    double  _contentHitRectBottomMargin;
    double  _contentHitRectLeadingMargin;
    double  _contentHitRectTopMargin;
    double  _contentHitRectTrailingMargin;
    bool  _contentHitRectVisible;
    NCSpringAnimationSettings * _detailBackgroundSettings;
    double  _detailIconPositionMilestone;
    NCSpringAnimationSettings * _detailIconPositionSettings;
    NCSpringAnimationSettings * _detailIconScaleSettings;
    NCSpringAnimationSettings * _detailOutgoingTextOpacitySettings;
    NCSpringAnimationSettings * _detailOutgoingTextPositionSettings;
    double  _detailSecondaryTextMilestone;
    double  _detailStageTransitionDelay;
    long long  _detailStageTransitionMaxAttempts;
    double  _detailTextMilestone;
    NCSpringAnimationSettings * _detailTextOpacitySettings;
    NCSpringAnimationSettings * _detailTextPositionSettings;
    NCSpringAnimationSettings * _dismissBackgroundSettings;
    NCSpringAnimationSettings * _dismissIconOpacitySettings;
    NCSpringAnimationSettings * _dismissTextOpacitySettings;
    NCSpringAnimationSettings * _dismissTextPositionSettings;
    NCSpringAnimationSettings * _interactiveDismissalAutomaticSettings;
    NCSpringAnimationSettings * _interactiveDismissalBackgoundSettings;
    double  _interactiveDismissalFinalContentScale;
    double  _interactiveDismissalMinBackgroundProgress;
    double  _interactiveDismissalMinContentAlpha;
    double  _interactiveDismissalMinContentScale;
    double  _interactiveDismissalRubberbandingInset;
    double  _interactiveDismissalRubberbandingRange;
    double  _interactiveDismissalThreshold;
    NCSpringAnimationSettings * _interactiveDismissalTrackingSettings;
}

@property (nonatomic, retain) NCSpringAnimationSettings *briefBackgroundSettings;
@property (nonatomic) double briefGrabberMilestone;
@property (nonatomic, retain) NCSpringAnimationSettings *briefGrabberSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *briefIconOpacitySettings;
@property (nonatomic) double briefIconPositionMilestone;
@property (nonatomic, retain) NCSpringAnimationSettings *briefIconPositionSettings;
@property (nonatomic) double briefIconScaleMilestone;
@property (nonatomic, retain) NCSpringAnimationSettings *briefIconScaleSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *briefTextOpacitySettings;
@property (nonatomic) double briefTextPositionMilestone;
@property (nonatomic, retain) NCSpringAnimationSettings *briefTextPositionSettings;
@property (nonatomic) double contentHitRectBottomMargin;
@property (nonatomic) double contentHitRectLeadingMargin;
@property (nonatomic) double contentHitRectTopMargin;
@property (nonatomic) double contentHitRectTrailingMargin;
@property (getter=isContentHitRectVisible, nonatomic) bool contentHitRectVisible;
@property (nonatomic, retain) NCSpringAnimationSettings *detailBackgroundSettings;
@property (nonatomic) double detailIconPositionMilestone;
@property (nonatomic, retain) NCSpringAnimationSettings *detailIconPositionSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *detailIconScaleSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *detailOutgoingTextOpacitySettings;
@property (nonatomic, retain) NCSpringAnimationSettings *detailOutgoingTextPositionSettings;
@property (nonatomic) double detailSecondaryTextMilestone;
@property (nonatomic) double detailStageTransitionDelay;
@property (nonatomic) long long detailStageTransitionMaxAttempts;
@property (nonatomic) double detailTextMilestone;
@property (nonatomic, retain) NCSpringAnimationSettings *detailTextOpacitySettings;
@property (nonatomic, retain) NCSpringAnimationSettings *detailTextPositionSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *dismissBackgroundSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *dismissIconOpacitySettings;
@property (nonatomic, retain) NCSpringAnimationSettings *dismissTextOpacitySettings;
@property (nonatomic, retain) NCSpringAnimationSettings *dismissTextPositionSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *interactiveDismissalAutomaticSettings;
@property (nonatomic, retain) NCSpringAnimationSettings *interactiveDismissalBackgoundSettings;
@property (nonatomic) double interactiveDismissalFinalContentScale;
@property (nonatomic) double interactiveDismissalMinBackgroundProgress;
@property (nonatomic) double interactiveDismissalMinContentAlpha;
@property (nonatomic) double interactiveDismissalMinContentScale;
@property (nonatomic) double interactiveDismissalRubberbandingInset;
@property (nonatomic) double interactiveDismissalRubberbandingRange;
@property (nonatomic) double interactiveDismissalThreshold;
@property (nonatomic, retain) NCSpringAnimationSettings *interactiveDismissalTrackingSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)briefBackgroundSettings;
- (double)briefGrabberMilestone;
- (id)briefGrabberSettings;
- (id)briefIconOpacitySettings;
- (double)briefIconPositionMilestone;
- (id)briefIconPositionSettings;
- (double)briefIconScaleMilestone;
- (id)briefIconScaleSettings;
- (id)briefTextOpacitySettings;
- (double)briefTextPositionMilestone;
- (id)briefTextPositionSettings;
- (double)contentHitRectBottomMargin;
- (double)contentHitRectLeadingMargin;
- (double)contentHitRectTopMargin;
- (double)contentHitRectTrailingMargin;
- (id)detailBackgroundSettings;
- (double)detailIconPositionMilestone;
- (id)detailIconPositionSettings;
- (id)detailIconScaleSettings;
- (id)detailOutgoingTextOpacitySettings;
- (id)detailOutgoingTextPositionSettings;
- (double)detailSecondaryTextMilestone;
- (double)detailStageTransitionDelay;
- (long long)detailStageTransitionMaxAttempts;
- (double)detailTextMilestone;
- (id)detailTextOpacitySettings;
- (id)detailTextPositionSettings;
- (id)dismissBackgroundSettings;
- (id)dismissIconOpacitySettings;
- (id)dismissTextOpacitySettings;
- (id)dismissTextPositionSettings;
- (id)interactiveDismissalAutomaticSettings;
- (id)interactiveDismissalBackgoundSettings;
- (double)interactiveDismissalFinalContentScale;
- (double)interactiveDismissalMinBackgroundProgress;
- (double)interactiveDismissalMinContentAlpha;
- (double)interactiveDismissalMinContentScale;
- (double)interactiveDismissalRubberbandingInset;
- (double)interactiveDismissalRubberbandingRange;
- (double)interactiveDismissalThreshold;
- (id)interactiveDismissalTrackingSettings;
- (bool)isContentHitRectVisible;
- (void)setBriefBackgroundSettings:(id)arg1;
- (void)setBriefGrabberMilestone:(double)arg1;
- (void)setBriefGrabberSettings:(id)arg1;
- (void)setBriefIconOpacitySettings:(id)arg1;
- (void)setBriefIconPositionMilestone:(double)arg1;
- (void)setBriefIconPositionSettings:(id)arg1;
- (void)setBriefIconScaleMilestone:(double)arg1;
- (void)setBriefIconScaleSettings:(id)arg1;
- (void)setBriefTextOpacitySettings:(id)arg1;
- (void)setBriefTextPositionMilestone:(double)arg1;
- (void)setBriefTextPositionSettings:(id)arg1;
- (void)setContentHitRectBottomMargin:(double)arg1;
- (void)setContentHitRectLeadingMargin:(double)arg1;
- (void)setContentHitRectTopMargin:(double)arg1;
- (void)setContentHitRectTrailingMargin:(double)arg1;
- (void)setContentHitRectVisible:(bool)arg1;
- (void)setDefaultValues;
- (void)setDetailBackgroundSettings:(id)arg1;
- (void)setDetailIconPositionMilestone:(double)arg1;
- (void)setDetailIconPositionSettings:(id)arg1;
- (void)setDetailIconScaleSettings:(id)arg1;
- (void)setDetailOutgoingTextOpacitySettings:(id)arg1;
- (void)setDetailOutgoingTextPositionSettings:(id)arg1;
- (void)setDetailSecondaryTextMilestone:(double)arg1;
- (void)setDetailStageTransitionDelay:(double)arg1;
- (void)setDetailStageTransitionMaxAttempts:(long long)arg1;
- (void)setDetailTextMilestone:(double)arg1;
- (void)setDetailTextOpacitySettings:(id)arg1;
- (void)setDetailTextPositionSettings:(id)arg1;
- (void)setDismissBackgroundSettings:(id)arg1;
- (void)setDismissIconOpacitySettings:(id)arg1;
- (void)setDismissTextOpacitySettings:(id)arg1;
- (void)setDismissTextPositionSettings:(id)arg1;
- (void)setInteractiveDismissalAutomaticSettings:(id)arg1;
- (void)setInteractiveDismissalBackgoundSettings:(id)arg1;
- (void)setInteractiveDismissalFinalContentScale:(double)arg1;
- (void)setInteractiveDismissalMinBackgroundProgress:(double)arg1;
- (void)setInteractiveDismissalMinContentAlpha:(double)arg1;
- (void)setInteractiveDismissalMinContentScale:(double)arg1;
- (void)setInteractiveDismissalRubberbandingInset:(double)arg1;
- (void)setInteractiveDismissalRubberbandingRange:(double)arg1;
- (void)setInteractiveDismissalThreshold:(double)arg1;
- (void)setInteractiveDismissalTrackingSettings:(id)arg1;

@end