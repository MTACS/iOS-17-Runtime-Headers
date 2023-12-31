
@protocol TSDContainerRep <TSDLayerProviderRep>

@required

- (bool)canSelectChildRep:(TSDRep *)arg1;
- (NSArray *)childReps;
- (NSObject<TSDContainerInfo> *)containerInfo;
- (void)selectChildRep:(TSDRep *)arg1;

@optional

- (void)addAdditionalChildBackgroundLayersToArray:(NSMutableArray *)arg1;
- (void)addAlternateLayersForChildViewsToArray:(NSMutableArray *)arg1;
- (void)addChildViewsToArray:(NSMutableArray *)arg1;
- (bool)allowSublayerUpdatesWhenPaused;
- (bool)canBeginEditingChildRepOnDoubleTap:(TSDRep *)arg1;
- (bool)canHandleGesture:(id <TSDGesture>)arg1 forChildRep:(TSDRep *)arg2;
- (NSArray *)childRepsForHitTesting;
- (bool)containerManagesChildView;
- (void)didAddChildView:(id)arg1;
- (int)positionForChildView:(UIView *)arg1;
- (int)positionForChildViewAlternateLayer:(CALayer *)arg1;
- (id)viewControllerForView:(id)arg1;
- (void)willAddChildView:(id)arg1 toView:(id)arg2;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;
- (void)willRemoveChildView:(id)arg1;

@end
