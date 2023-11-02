
@interface WFModuleTitleView : UIView <WFActionEventObserver> {
    unsigned long long  _accessoryMode;
    WFAction * _action;
    <WFModuleTitleViewDelegate> * _delegate;
    UIButton * _handoffButton;
    bool  _hideSubtitle;
    WFIconHostingView * _iconView;
    UIButton * _installButton;
    unsigned long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic, retain) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFModuleTitleViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIButton *handoffButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSubtitle;
@property (nonatomic, retain) WFIconHostingView *iconView;
@property (nonatomic) UIButton *installButton;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (double)viewHeight;

- (void).cxx_destruct;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (unsigned long long)accessoryMode;
- (id)action;
- (void)actionNameDidChange:(id)arg1;
- (void)configureWithTitle:(id)arg1 subtitle:(id)arg2 applicationBundleIdentifer:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)handoffButton;
- (void)handoffButtonPressed:(id)arg1;
- (bool)hideSubtitle;
- (struct CGSize { double x1; double x2; })iconSize;
- (double)iconTitlePadding;
- (id)iconView;
- (double)imageViewWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)installAction;
- (id)installButton;
- (void)installButtonPressed:(id)arg1;
- (bool)isAccessibilityElement;
- (bool)isTitleLabelMultiline;
- (void)layoutSubviews;
- (void)setAccessoryMode:(unsigned long long)arg1;
- (void)setAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandoffButton:(id)arg1;
- (void)setHideSubtitle:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInstallButton:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForLabel:(id)arg1 withMaxWidth:(double)arg2;
- (unsigned long long)style;
- (id)subtitleLabel;
- (id)titleLabel;
- (double)titleSubtitlePadding;
- (bool)toggleFavorited;
- (void)updateFont;

@end
