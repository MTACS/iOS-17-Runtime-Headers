
@interface PUParallaxDebugInfoView : PUParallaxLayerView <PXChangeObserver> {
    NSDictionary * _additionalDebugInfo;
    PUParallaxLayerLayoutInfo * _currentLayoutInfo;
    UILabel * _debugHUDLabel;
    NSString * _debugHUDString;
    CALayer * _maskLayer;
    NSMutableDictionary * _rectViewsByIdentifier;
    PUParallaxLayerStackViewModel * _viewModel;
}

@property (nonatomic, copy) NSDictionary *additionalDebugInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UILabel *debugHUDLabel;
@property (nonatomic, copy) NSString *debugHUDString;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *maskLayer;
@property (nonatomic, readonly) NSMutableDictionary *rectViewsByIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUParallaxLayerStackViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateDebugHUDString;
- (void)_layoutWithCurrentLayoutInfo;
- (id)_rectViewForIdentifier:(id)arg1;
- (void)_updateDebugHUDString;
- (id)additionalDebugInfo;
- (id)currentLayoutInfo;
- (id)debugHUDLabel;
- (id)debugHUDString;
- (void)displayAdditionalDebugInfo:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)layoutWithInfo:(id)arg1;
- (id)maskLayer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)rectViewsByIdentifier;
- (void)setAdditionalDebugInfo:(id)arg1;
- (void)setCurrentLayoutInfo:(id)arg1;
- (void)setDebugHUDString:(id)arg1;
- (id)viewModel;

@end
