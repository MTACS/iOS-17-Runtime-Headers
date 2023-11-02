
@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {
    NSOrderedSet * _fbsLayers;
    NSString * _identifier;
    NSOrderedSet * _layers;
    NSHashTable * _observers;
    FBScene * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSOrderedSet *layers;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithScene:(id)arg1;
- (void)_observer_didStartTrackingLayers;
- (void)_observer_didStopTrackingLayers;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
- (void)_setLayers:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)layerWithContextID:(unsigned int)arg1;
- (id)layers;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
