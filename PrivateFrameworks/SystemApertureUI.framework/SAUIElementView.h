
@interface SAUIElementView : UIView <SAUIElementLayoutAxisObserving> {
    UIView * _contentView;
    <SAUIElementViewDelegate> * _delegate;
    <SAUIElementViewProviding> * _elementViewProvider;
    unsigned long long  _layoutAxis;
    _SAUIProvidedViewContainerView * _leadingTransformView;
    _SAUIProvidedViewContainerView * _minimalTransformView;
    _SAUIProvidedViewContainerView * _trailingTransformView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SAUIElementViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SAUIElementViewProviding> *elementViewProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic, retain) _SAUIProvidedViewContainerView *leadingTransformView;
@property (nonatomic, retain) _SAUIProvidedViewContainerView *minimalTransformView;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SAUIProvidedViewContainerView *trailingTransformView;

- (void).cxx_destruct;
- (bool)_configureLeadingTransformViewIfNecessary;
- (bool)_configureMinimalTransformViewIfNecessary;
- (bool)_configureTrailingTransformViewIfNecessary;
- (bool)_configureTransformView:(id*)arg1 ifNecessaryWithProvidedView:(id)arg2 assertIfConfigurationRequired:(id /* block */)arg3;
- (void)_didLayoutResizedTransformView:(id)arg1;
- (id)_effectiveMinimalView;
- (double)_paddingForView:(id)arg1 fromProvider:(id)arg2 inLayoutMode:(long long)arg3;
- (id)contentView;
- (id)delegate;
- (id)elementViewProvider;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithElementViewProvider:(id)arg1;
- (unsigned long long)layoutAxis;
- (void)layoutSubviews;
- (id)leadingTransformView;
- (id)minimalTransformView;
- (void)setDelegate:(id)arg1;
- (void)setLayoutAxis:(unsigned long long)arg1;
- (void)setLeadingTransformView:(id)arg1;
- (void)setMinimalTransformView:(id)arg1;
- (void)setTrailingTransformView:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })suggestedOutsetsForLayoutMode:(long long)arg1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)trailingTransformView;

@end
