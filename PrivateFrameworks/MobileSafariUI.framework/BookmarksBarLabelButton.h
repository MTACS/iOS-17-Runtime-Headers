
@interface BookmarksBarLabelButton : UIButton <UIEditMenuInteractionDelegate> {
    WebBookmark * _bookmark;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cursorRegionInset;
    <BookmarksBarLabelButtonDelegate> * _delegate;
    UIEditMenuInteraction * _editMenuInteraction;
    id  _faviconToken;
    SFFaviconView * _faviconView;
    bool  _hasLeadingEmoji;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    bool  _usesLightControls;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cursorRegionInset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BookmarksBarLabelButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *themeColor;
@property (nonatomic) bool usesLightControls;

+ (id)labelButton;
+ (id)labelButtonWithSiteIcon;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bookmarksBarLabelButtonHitRect;
- (bool)_canShowIcon;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_installFaviconView;
- (void)_openInNewTabs:(id)arg1;
- (void)_setIcon:(id)arg1;
- (void)_updateFaviconForURL:(id)arg1;
- (id)bookmark;
- (bool)canBecomeFirstResponder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cursorRegionInset;
- (id)delegate;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)setBookmark:(id)arg1;
- (void)setCursorRegionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setThemeColor:(id)arg1;
- (void)setUsesLightControls:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)themeColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)usesLightControls;

@end
