
@interface SWAttributionView : UIView <SLAttributionViewDelegate> {
    long long  _backgroundStyle;
    NSString * _blurEffectGroupName;
    NSArray * _constraints;
    long long  _displayContext;
    bool  _enablesMarquee;
    SWHighlight * _highlight;
    UIMenu * _highlightMenu;
    long long  _horizontalAlignment;
    NSString * _menuTitleForHideAction;
    double  _preferredMaxLayoutWidth;
    SLAttributionView * _slAttributionView;
    UIMenu * _supplementalMenu;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic, retain) NSString *blurEffectGroupName;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayContext;
@property (nonatomic) bool enablesMarquee;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic, readonly) UIMenu *highlightMenu;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic, retain) NSString *menuTitleForHideAction;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic, retain) SLAttributionView *slAttributionView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIMenu *supplementalMenu;

+ (void)presentTranscriptForAttributionIdentifier:(id)arg1 attachmentGUID:(id)arg2 presentingViewController:(id)arg3;

- (void).cxx_destruct;
- (void)_sendFeedbackForCurrentDisplayContext;
- (void)_updateSLAttributionViewAlignment;
- (void)_updateSLAttributionViewBackgroundStyle;
- (void)_updateSLAttributionViewEnablesMarquee;
- (void)_updateSLAttributionViewHideMenuItemTitle;
- (void)_updateSLAttributionViewSupplementalMenu;
- (long long)backgroundStyle;
- (id)blurEffectGroupName;
- (id)closeButton;
- (id)constraints;
- (void)didMoveToWindow;
- (long long)displayContext;
- (bool)enablesMarquee;
- (id)highlight;
- (id)highlightMenu;
- (long long)horizontalAlignment;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)menuTitleForHideAction;
- (double)preferredMaxLayoutWidth;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBlurEffectGroupName:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDisplayContext:(long long)arg1;
- (void)setEnablesMarquee:(bool)arg1;
- (void)setHighlight:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setMenuTitleForHideAction:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setSlAttributionView:(id)arg1;
- (void)setSupplementalMenu:(id)arg1;
- (id)slAttributionView;
- (id)supplementalMenu;
- (void)updateConstraints;
- (void)useBannerLayout;

@end
