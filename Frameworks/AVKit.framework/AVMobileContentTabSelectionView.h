
@interface AVMobileContentTabSelectionView : UIView {
    NSArray * _contentTabs;
    <AVMobileContentTabSelectionViewDelegate> * _delegate;
    CAGradientLayer * _gradientFadeoutLayer;
    UIScrollView * _scrollingContentView;
    AVMobileContentTab * _selectedTab;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
    NSMutableArray * _tabButtons;
}

@property (nonatomic, copy) NSArray *contentTabs;
@property (nonatomic) <AVMobileContentTabSelectionViewDelegate> *delegate;
@property (nonatomic, readonly) AVMobileContentTab *selectedTab;
@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;

- (void).cxx_destruct;
- (void)_contentTabPressed:(id)arg1;
- (void)_selectTab:(id)arg1 withReason:(unsigned long long)arg2;
- (id)contentTabs;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithStyleSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)resetSelection;
- (id)selectedTab;
- (void)setContentTabs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStyleSheet:(id)arg1;
- (id)styleSheet;

@end
