
@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
    NSMutableArray * _animationCompletions;
    UIView * _appView;
    SBReversibleLayerPropertyAnimator * _appZoomAnimator;
    UIView * _appZoomView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destinationFrame;
    double  _distantScale;
    unsigned char  _testCompletionCount;
}

@property (nonatomic, retain) NSMutableArray *animationCompletions;
@property (nonatomic, retain) SBReversibleLayerPropertyAnimator *appZoomAnimator;
@property double distantScale;
@property (nonatomic, retain) SBHCenterAppZoomSettings *settings;

- (void).cxx_destruct;
- (double)_appZPositionForZoomFraction:(double)arg1;
- (double)_appZoomDelay;
- (void)_cleanupAnimation;
- (void)_delayedForRotation;
- (void)_fadeAppForZoomFraction:(double)arg1;
- (double)_iconZoomDelay;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_translateAppForZoomFraction:(double)arg1;
- (void)_zoomAppForZoomFraction:(double)arg1;
- (id)animationCompletions;
- (id)appZoomAnimator;
- (struct CGPoint { double x1; double x2; })cameraPosition;
- (double)distantScale;
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;
- (void)setAnimationCompletions:(id)arg1;
- (void)setAppZoomAnimator:(id)arg1;
- (void)setDistantScale:(double)arg1;

@end
