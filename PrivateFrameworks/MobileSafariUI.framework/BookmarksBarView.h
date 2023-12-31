
@interface BookmarksBarView : UIView <BookmarksBarLabelButtonDelegate, BookmarksNavigationControllerDelegate, SFUnifiedBarContentView, UIPopoverPresentationControllerDelegate, _SFNavigationIntentHandling> {
    int  _bookmarkBarID;
    NSMutableArray * _bookmarkBarLabels;
    BookmarksNavigationController * _bookmarksNavigationController;
    UIButton * _buttonUsedToShowNavigationController;
    WebBookmark * _currentRootBookmark;
    int  _defaultProfileRootBookmarkID;
    <BookmarksBarViewDelegate> * _delegate;
    bool  _isShowingNavigationController;
    <LinkPreviewProvider> * _linkPreviewProvider;
    UIButton * _moreBookmarksButton;
    unsigned int  _moreBookmarksOffset;
    WebBookmark * _moreBookmarksParent;
    <_SFNavigationIntentHandling> * _navigationIntentHandler;
    bool  _needsReloadBookmarkLabels;
    UIView * _separator;
    bool  _showsIcons;
    UIColor * _themeColor;
}

@property (nonatomic) double barBackgroundAlpha;
@property (nonatomic, readonly) SFUnifiedBarMetrics *barMetrics;
@property (nonatomic, retain) SFUnifiedBarTheme *barTheme;
@property (getter=isContentHidden, nonatomic, readonly) bool contentHidden;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) WebBookmark *currentRootBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BookmarksBarViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentlyScrollable;
@property (nonatomic) <LinkPreviewProvider> *linkPreviewProvider;
@property (nonatomic) struct CGPoint { double x1; double x2; } midpointForCenteredContent;
@property (nonatomic) <_SFNavigationIntentHandling> *navigationIntentHandler;
@property (nonatomic) bool pinsScrollPositionToTrailingEdgeDuringResize;
@property (nonatomic, readonly) double preferredBottomSpacing;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) double preferredSquishedBottomSpacing;
@property (nonatomic, readonly) double preferredTopSpacing;
@property (nonatomic) bool showsIcons;
@property (nonatomic) bool showsSeparator;
@property (nonatomic) bool showsSquishedAccessoryViews;
@property (nonatomic, readonly) bool showsSquishedContent;
@property (nonatomic) unsigned long long sizeClass;
@property (nonatomic) double squishTransformFactor;
@property (nonatomic, readonly) NSArray *squishedAccessoryViews;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } squishedContentInset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TabGroupProvider> *tabGroupProvider;
@property (nonatomic, retain) UIColor *themeColor;
@property (nonatomic) double themeColorVisibility;
@property (nonatomic, readonly) double topSquishedSpacingAdjustment;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_receivedBookmarksChangedNotification:(id)arg1;
- (void)bookmarksBarLabelButtonDidSelectOpenInNewTab:(id)arg1;
- (void)bookmarksNavigationControllerDidReload:(id)arg1;
- (void)bookmarksNavigationControllerReloadDidFail:(id)arg1;
- (void)bookmarksNavigationControllerViewDidAppear:(id)arg1;
- (void)bookmarksNavigationControllerViewDidDisappear:(id)arg1;
- (id)containingBookmarkForNavigationController:(id)arg1;
- (id)currentRootBookmark;
- (void)dealloc;
- (id)delegate;
- (void)dispatchNavigationIntent:(id)arg1;
- (void)handleNavigationIntent:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linkPreviewProvider;
- (id)navigationIntentHandler;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (double)preferredBottomSpacing;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLinkPreviewProvider:(id)arg1;
- (void)setNavigationIntentHandler:(id)arg1;
- (void)setNeedsReloadData;
- (void)setShowsIcons:(bool)arg1;
- (void)setShowsSeparator:(bool)arg1;
- (void)setThemeColor:(id)arg1;
- (bool)showsIcons;
- (bool)showsSeparator;
- (id)tabGroupProvider;
- (id)themeColor;
- (void)traitCollectionDidChange:(id)arg1;

@end
