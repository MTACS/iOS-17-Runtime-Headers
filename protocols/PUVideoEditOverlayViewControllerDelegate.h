
@protocol PUVideoEditOverlayViewControllerDelegate <NSObject>

@required

- (void)cinematographyWasEdited;
- (void)cinematographyWasEditedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (PICompositionController *)compositionController;
- (bool)hasTrimmedVideo;
- (void)interactionBegan;
- (void)objectTrackingFinishedWithSuccess:(bool)arg1;
- (void)objectTrackingStartedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 shouldStop:(bool*)arg2;

@end
