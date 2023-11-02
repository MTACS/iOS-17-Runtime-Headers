
@interface PUParallaxLayerStackViewManager : NSObject <PXChangeObserver, PXSettingsKeyObserver> {
    PUParallaxDebugInfoView * _debugInfoView;
    PUParallaxLayerStackViewModel * _viewModel;
    NSMutableDictionary * _viewsByLayerIdentifier;
}

@property (nonatomic, readonly) NSArray *createdLayerViews;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) PUParallaxDebugInfoView *debugInfoView;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUParallaxVideoLayerView *videoLayerView;
@property (nonatomic, readonly) PUParallaxLayerStackViewModel *viewModel;
@property (nonatomic, readonly) NSMutableDictionary *viewsByLayerIdentifier;

- (void).cxx_destruct;
- (bool)_debugColorsEnabled;
- (id)_layerLayoutInfoForViewModel:(id)arg1;
- (void)_layoutLayerView:(id)arg1;
- (void)_layoutViews;
- (void)_updateViewContents;
- (id)createdLayerViews;
- (id)debugInfoView;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)layoutViewsAnimated:(id /* block */)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)releaseVideoLayerView;
- (void)setDebugInfoView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)videoLayerView;
- (id)viewForLayer:(id)arg1;
- (id)viewForLayerID:(id)arg1;
- (id)viewModel;
- (id)viewsByLayerIdentifier;

@end
