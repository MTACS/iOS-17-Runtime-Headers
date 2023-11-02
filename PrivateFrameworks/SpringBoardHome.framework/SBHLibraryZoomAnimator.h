
@interface SBHLibraryZoomAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    bool  _alreadyAnimating;
    SBHLibraryWaveZoomSettings * _closeSettings;
    <SBHModalLibraryPresentationContext> * _context;
    NSMutableArray * _crossfadeViews;
    CADisplayLink * _displayLink;
    long long  _endpointAnimatingTo;
    NSMutableArray * _fadingPodViews;
    NSMutableArray * _flyingPodViews;
    NSMutableArray * _flyingPodWrapperViews;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLibraryOrigin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialSourceContentFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialTargetContentFrame;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _libraryIconImageInfo;
    NSMutableArray * _libraryIconViews;
    SBHLibraryWaveZoomSettings * _openSettings;
    bool  _podsWantDisplayLinkInfluencedPositioning;
    <BSInvalidatable> * _presentationSourceOrderingAssertion;
    _UIPortalView * _presentationSourcePortalView;
    UIView * _sourceTouchForwardingView;
    double  _startTime;
    unsigned long long  _transitionToken;
}

+ (bool)validateWithLibrary:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_addPositionToTargetView:(id)arg1 matchingSourceView:(id)arg2 initialSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_configureAlphaForPodViewAtIndex:(unsigned long long)arg1 forEndpoint:(long long)arg2 withContext:(id)arg3;
- (void)_configureBackgroundViewForEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)_configureCategoryStackAlphaForPodViewAtIndex:(unsigned long long)arg1 forEndpoint:(long long)arg2 withContext:(id)arg3;
- (void)_configureCrossfadeDestinationContentForPodViewAtIndex:(unsigned long long)arg1 forEndpoint:(long long)arg2 withContext:(id)arg3;
- (void)_configureCrossfadeSourceContentForPodViewAtIndex:(unsigned long long)arg1 forEndpoint:(long long)arg2 withContext:(id)arg3;
- (void)_configureDockIndicatorViewsForEndpoint:(long long)arg1 preparing:(bool)arg2 withContext:(id)arg3;
- (void)_configureLayoutForPodViewAtIndex:(unsigned long long)arg1 forEndpoint:(long long)arg2 withContext:(id)arg3 includeYPosition:(bool)arg4;
- (void)_configureScaleForPodViewAtIndex:(unsigned long long)arg1 forEndpoint:(long long)arg2 withContext:(id)arg3 includeYTranslation:(bool)arg4;
- (void)_configureSearchViewsForEndpoint:(long long)arg1 preparing:(bool)arg2 withContext:(id)arg3;
- (void)_displayLinkFired:(id)arg1;
- (id)_flyingPodIconViewAtIndex:(unsigned long long)arg1;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })_iconImageInfoForPodViewAtIndex:(unsigned long long)arg1;
- (void)_matchMoveTargetView:(id)arg1 withSourceView:(id)arg2;
- (void)_matchMoveTargetView:(id)arg1 withSourceView:(id)arg2 usingSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 targetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_removeMatchMoveFromTargetView:(id)arg1;
- (void)_removePositionAdditionFromTargetView:(id)arg1;
- (id)_retargetedAnimationSettingsForSettings:(id)arg1 normalizedTier:(double)arg2 endpoint:(long long)arg3;
- (void)_setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 forPodViewAtIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceFrameForPodViewAtIndex:(unsigned long long)arg1 inCoordinateSpace:(id)arg2 withContext:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceFrameForPodViewAtIndex:(unsigned long long)arg1 inCoordinateSpace:(id)arg2 withContext:(id)arg3 forUnscaledPositioning:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetFrameForPodView:(id)arg1 atIndex:(unsigned long long)arg2 forEndpoint:(long long)arg3 withContext:(id)arg4;
- (bool)_targetViewHasMatchMove:(id)arg1;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;

@end
