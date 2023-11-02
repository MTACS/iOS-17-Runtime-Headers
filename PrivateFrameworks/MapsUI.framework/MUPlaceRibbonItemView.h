
@interface MUPlaceRibbonItemView : UIView <MUActivityObserving, MUPlaceRibbonItemViewModelUpdateDelegate> {
    id /* block */  _actionHandler;
    UITapGestureRecognizer * _selectRecognizer;
    UITapGestureRecognizer * _tapRecognizer;
    UIView<MULabelViewProtocol> * _titleLabel;
    MUHairlineView * _trailingHairlineView;
    UIView<MULabelViewProtocol> * _valueLabel;
    MUPlaceRibbonItemViewModel * _viewModel;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showTrailingHairline;
@property (readonly) Class superclass;
@property (nonatomic, retain) MUPlaceRibbonItemViewModel *viewModel;

- (void).cxx_destruct;
- (void)_handleTap;
- (void)_setAXIdentifierWithItemType:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateGestureRecognizers;
- (void)_updateLabelWithAlpha:(double)arg1;
- (void)_updateValueText;
- (id /* block */)actionHandler;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)ribbonItemViewModelDidUpdate:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setShowTrailingHairline:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (bool)showTrailingHairline;
- (id)viewModel;

@end
