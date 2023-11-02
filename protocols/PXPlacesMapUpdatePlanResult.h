
@protocol PXPlacesMapUpdatePlanResult <NSObject>

@required

- (NSSet *)annotationsToAddImmediately;
- (NSSet *)annotationsToRedraw;
- (NSSet *)annotationsToRemoveAfterAnimationHasEnded;
- (NSSet *)annotationsToRemoveAfterAnimationHasStarted;
- (NSSet *)annotationsToRemoveImmediately;
- (NSSet *)annotationsWithUpdatedIndex;
- (NSSet *)overlaysToAddImmediately;
- (NSSet *)overlaysToRemoveImmediately;

@end
