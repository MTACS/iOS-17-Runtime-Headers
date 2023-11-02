
@protocol SBCoverSheetGrabberDelegate <NSObject>

@required

- (bool)hasFirstSwipeShowGrabberOverride;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (void)updateVisibilityForGrabberVisible:(bool)arg1;

@end
