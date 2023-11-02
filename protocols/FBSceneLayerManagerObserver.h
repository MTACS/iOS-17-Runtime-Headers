
@protocol FBSceneLayerManagerObserver <NSObject>

@optional

- (void)sceneLayerManagerDidStartTrackingLayers:(FBSceneLayerManager *)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(FBSceneLayerManager *)arg1;
- (void)sceneLayerManagerDidUpdateLayers:(FBSceneLayerManager *)arg1;

@end
