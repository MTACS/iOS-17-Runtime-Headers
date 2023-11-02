
@interface PXCuratedLibraryAnimationTracker : NSObject {
    NSMutableSet * _inFlightAnimations;
}

@property (nonatomic, readonly) NSMutableSet *inFlightAnimations;

+ (void)_scrollAnimationOccurredWithContext:(struct { long long x1; long long x2; })arg1 isBegin:(bool)arg2;
+ (void)scrollAnimationDidBeginWithScrollContext:(struct { long long x1; long long x2; })arg1;
+ (void)scrollAnimationDidEndWithScrollContext:(struct { long long x1; long long x2; })arg1;
+ (id)sharedTracker;

- (void).cxx_destruct;
- (void)_zoomLevelTransitionOccurred:(id)arg1 isPreparation:(bool)arg2 isBegin:(bool)arg3;
- (id)inFlightAnimations;
- (id)init;
- (void)zoomLevelTransitionDidBegin:(id)arg1;
- (void)zoomLevelTransitionDidEnd:(id)arg1;
- (void)zoomLevelTransitionPreparationDidBegin:(id)arg1;
- (void)zoomLevelTransitionsDidEndEarly;

@end
