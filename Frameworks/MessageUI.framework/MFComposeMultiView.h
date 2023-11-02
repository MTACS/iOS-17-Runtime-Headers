
@interface MFComposeMultiView : MFMailComposeHeaderView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource> {
    bool  _accountAutoselected;
    NSString * _accountDescription;
    bool  _accountHasUnsafeDomain;
    MFActivityIndicatorLabel * _accountLabel;
    CNComposeHeaderLabelView * _imageSizeHeaderLabelView;
    UILabel * _imageSizeLabel;
    bool  _imageSizeShown;
    UILabel * _placeholderImageSizeLabel;
    <MFComposeMultiViewDelegate> * _scribbleDelegate;
}

@property (getter=isAccountAutoselected, nonatomic) bool accountAutoselected;
@property (nonatomic) bool accountHasUnsafeDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MFComposeMultiViewDelegate> *scribbleDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountDescriptionAttributedString;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)accountHasUnsafeDomain;
- (id)accountLabel;
- (id)imageSizeHeaderLabelView;
- (id)imageSizeLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccountAutoselected;
- (id)labelColor;
- (void)layoutSubviews;
- (id)placeholderImageSizeLabel;
- (void)refreshPreferredContentSize;
- (id)scribbleDelegate;
- (void)setAccountAutoselected:(bool)arg1;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountHasUnsafeDomain:(bool)arg1;
- (void)setImageSizeDescription:(id)arg1;
- (void)setScribbleDelegate:(id)arg1;
- (void)setShowsImageSize:(bool)arg1;
- (void)showLoadingState:(bool)arg1;

@end
