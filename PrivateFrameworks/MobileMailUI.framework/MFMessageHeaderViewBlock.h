
@interface MFMessageHeaderViewBlock : UIView <MUIReusable> {
    MFMessageDisplayMetrics * _displayMetrics;
    bool  _interactivelyResizing;
    <EFCancelable> * _observableCancelable;
    SeparatorLayer * _separator;
    bool  _separatorDrawsFlushWithLeadingEdge;
    bool  _separatorDrawsFlushWithTrailingEdge;
    bool  _separatorIsHidden;
    NSLayoutConstraint * _separatorLeading;
    NSLayoutConstraint * _separatorTrailing;
    UILayoutGuide * _trailingAccessoryViewLayoutGuide;
    NSLayoutConstraint * _trailingAccessoryViewLayoutGuideTrailing;
    NSLayoutConstraint * _trailingAccessoryViewLayoutGuideWidth;
    bool  _usingLargeTextLayout;
    MessageHeaderViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MFMessageDisplayMetrics *displayMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactivelyResizing;
@property (nonatomic, retain) <EFCancelable> *observableCancelable;
@property (nonatomic, retain) SeparatorLayer *separator;
@property (nonatomic) bool separatorDrawsFlushWithLeadingEdge;
@property (nonatomic) bool separatorDrawsFlushWithTrailingEdge;
@property (nonatomic) bool separatorIsHidden;
@property (nonatomic, retain) NSLayoutConstraint *separatorLeading;
@property (nonatomic, retain) NSLayoutConstraint *separatorTrailing;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILayoutGuide *trailingAccessoryViewLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *trailingAccessoryViewLayoutGuideTrailing;
@property (nonatomic, retain) NSLayoutConstraint *trailingAccessoryViewLayoutGuideWidth;
@property (nonatomic) bool usingLargeTextLayout;
@property (nonatomic, retain) MessageHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (void)createPrimaryViews;
- (void)displayMessageUsingViewModel:(id)arg1;
- (id)displayMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initializePrimaryLayoutConstraints;
- (bool)interactivelyResizing;
- (id)observableCancelable;
- (void)prepareForReuse;
- (id)separator;
- (bool)separatorDrawsFlushWithLeadingEdge;
- (bool)separatorDrawsFlushWithTrailingEdge;
- (bool)separatorIsHidden;
- (id)separatorLeading;
- (id)separatorTrailing;
- (void)setDisplayMetrics:(id)arg1;
- (void)setInteractivelyResizing:(bool)arg1;
- (void)setObservableCancelable:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorDrawsFlushWithLeadingEdge:(bool)arg1;
- (void)setSeparatorDrawsFlushWithTrailingEdge:(bool)arg1;
- (void)setSeparatorIsHidden:(bool)arg1;
- (void)setSeparatorLeading:(id)arg1;
- (void)setSeparatorTrailing:(id)arg1;
- (void)setTrailingAccessoryViewLayoutGuide:(id)arg1;
- (void)setTrailingAccessoryViewLayoutGuideTrailing:(id)arg1;
- (void)setTrailingAccessoryViewLayoutGuideWidth:(id)arg1;
- (void)setUsingLargeTextLayout:(bool)arg1;
- (void)setViewModel:(id)arg1;
- (id)trailingAccessoryViewLayoutGuide;
- (id)trailingAccessoryViewLayoutGuideTrailing;
- (id)trailingAccessoryViewLayoutGuideWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (bool)usingLargeTextLayout;
- (id)viewModel;

@end
