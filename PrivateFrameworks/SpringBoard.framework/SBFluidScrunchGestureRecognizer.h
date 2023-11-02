
@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding> {
    double  _absoluteScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteTranslation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _additionalTranslationDueToChangingAnchorPoints;
    FBSDisplayConfiguration * _displayConfiguration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCentroid;
    double  _lastPerimeter;
    long long  _recognizedTouchType;
    SBTouchHistory * _touchHistory;
}

@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteTranslation;
@property (nonatomic) struct CGPoint { double x1; double x2; } additionalTranslationDueToChangingAnchorPoints;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialCentroid;
@property (nonatomic) double lastPerimeter;
@property (nonatomic, readonly) long long recognizedTouchType;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBTouchHistory *touchHistory;

+ (id)_panTemplatesForTouchType:(long long)arg1 displayConfiguration:(id)arg2;
+ (void)_rotateTemplates:(id)arg1 forDisplayConfiguration:(id)arg2;
+ (id)_scrunchTemplatesForTouchType:(long long)arg1 displayConfiguration:(id)arg2;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centroidInGestureViewForPolygon:(id)arg1;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (id)_gestureView;
- (double)_hysteresis;
- (void)_installTemplatesForDisplayConfiguration:(id)arg1;
- (bool)_isMatchedTemplateScrunchTemplate;
- (void)_setMatchedPolygon:(id)arg1;
- (bool)_shouldAddNewTouchesAfterGestureRecognition;
- (void)_updateRecognizedTouchTypeIfNecessaryWithTouches:(id)arg1;
- (double)absoluteScale;
- (struct CGPoint { double x1; double x2; })absoluteTranslation;
- (struct CGPoint { double x1; double x2; })additionalTranslationDueToChangingAnchorPoints;
- (double)animationDistance;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })averageTouchVelocityOverTimeDuration:(double)arg1;
- (struct CGPoint { double x1; double x2; })centroid;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (id)displayConfiguration;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 displayConfiguration:(id)arg3;
- (struct CGPoint { double x1; double x2; })initialCentroid;
- (double)lastPerimeter;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)logCategory;
- (double)peakSpeed;
- (long long)recognizedTouchType;
- (void)reset;
- (void)setAbsoluteScale:(double)arg1;
- (void)setAbsoluteTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAdditionalTranslationDueToChangingAnchorPoints:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setInitialCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastPerimeter:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTouchHistory:(id)arg1;
- (id)touchHistory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationWithoutConsideringScaleInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end
