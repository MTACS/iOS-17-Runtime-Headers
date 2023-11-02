
@interface MediaControlsRouteView : UIView <MTVisualStylingProviderObservingPrivate> {
    bool  _displayMessage;
    bool  _labelHidden;
    UILabel * _messageLabel;
    NSTimer * _messageTimer;
    NSString * _packageName;
    CCUICAPackageView * _packageView;
    NSString * _title;
    UILabel * _titleLabel;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayMessage;
@property (readonly) unsigned long long hash;
@property (getter=isLabelHidden, nonatomic) bool labelHidden;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, retain) NSTimer *messageTimer;
@property (nonatomic, retain) NSString *packageName;
@property (nonatomic, retain) CCUICAPackageView *packageView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)_updateLabelVisualStyling;
- (bool)displayMessage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLabelHidden;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)messageTimer;
- (id)packageName;
- (id)packageView;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setDisplayMessage:(bool)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setLabelHidden:(bool)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMessageTimer:(id)arg1;
- (void)setPackageName:(id)arg1;
- (void)setPackageView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (void)showMessage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (id)visualStylingProvider;

@end
