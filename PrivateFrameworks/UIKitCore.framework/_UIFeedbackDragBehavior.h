
@interface _UIFeedbackDragBehavior : _UIDragFeedbackGenerator

+ (id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)dragBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (id)retargetBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;

- (void)snappedToFinalPosition;
- (void)targetUpdated;

@end
