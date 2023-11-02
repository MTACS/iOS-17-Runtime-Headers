
@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate> {
    UIView * _clipView;
    unsigned long long  _currentChevronStyle;
    TUIPredictionCellButton * _expandButton;
    bool  _hidesExpandButton;
    bool  _layoutIsDirty;
    <TUISystemInputAssistantPageViewDelegate> * _pageViewDelegate;
    UIView * _primaryContainerView;
    UIView * _primaryView;
    bool  _scrollEnabled;
    UIScrollView * _scrollView;
    UIView * _secondaryView;
    bool  _secondaryViewInitialized;
    bool  _secondaryViewVisible;
}

@property (nonatomic, retain) UIView *clipView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TUIPredictionCellButton *expandButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesExpandButton;
@property (nonatomic) <TUISystemInputAssistantPageViewDelegate> *pageViewDelegate;
@property (nonatomic, retain) UIView *primaryContainerView;
@property (nonatomic, retain) UIView *primaryView;
@property (nonatomic) bool scrollEnabled;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *secondaryView;
@property (nonatomic) bool secondaryViewVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkOldBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentOffsetChangeWithNewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })_contentSize;
- (id)_createExpandButtonIfNecessary;
- (bool)_expandButtonVisible;
- (unsigned long long)_expandChevronImageStyleForRenderConfig:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)_updateExpandButtonChevronImage;
- (id)clipView;
- (void)didMoveToWindow;
- (id)expandButton;
- (bool)hidesExpandButton;
- (id)imageSymbolConfigurationForAssistantItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pageViewDelegate;
- (id)primaryContainerView;
- (id)primaryView;
- (bool)scrollEnabled;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)secondaryView;
- (bool)secondaryViewVisible;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClipView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidesExpandButton:(bool)arg1;
- (void)setNeedsLayout;
- (void)setPageViewDelegate:(id)arg1;
- (void)setPrimaryContainerView:(id)arg1;
- (void)setPrimaryView:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSecondaryView:(id)arg1;
- (void)setSecondaryViewVisible:(bool)arg1;
- (void)setSecondaryViewVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSecondaryViewVisible:(bool)arg1 force:(bool)arg2 withAnimationType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setSecondaryViewVisible:(bool)arg1 withAnimationType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)updateScrollEnabled;

@end
