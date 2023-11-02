
@interface DBFolderView : SBRootFolderView {
    bool  _buttonUXEnabled;
    <DBEnvironment> * _environment;
    NSLayoutConstraint * _leadingScrollArrowLeadingConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _listViewInsets;
    DBScrollButton * _scrollLeftButton;
    DBScrollButton * _scrollRightButton;
    NSLayoutConstraint * _trailingScrollArrowTrailingConstraint;
}

@property (nonatomic) bool buttonUXEnabled;
@property (nonatomic) <DBEnvironment> *environment;
@property (nonatomic, retain) NSLayoutConstraint *leadingScrollArrowLeadingConstraint;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } listViewInsets;
@property (nonatomic, retain) DBScrollButton *scrollLeftButton;
@property (nonatomic, retain) DBScrollButton *scrollRightButton;
@property (nonatomic, retain) NSLayoutConstraint *trailingScrollArrowTrailingConstraint;

+ (Class)_scrollViewClass;
+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (double)maximumPageControlHeightForInteractionAffordances:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (double)_listViewSideInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_listViewVerticalInset;
- (id)_newPageControl;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_scrollButtonPressed:(id)arg1;
- (bool)_showsButtons;
- (void)_updateIconListFrames;
- (void)_updatePageControlToIndex:(long long)arg1;
- (void)_updateScrollButtonStatesForIndex:(long long)arg1;
- (bool)_useParallaxOnPageControl;
- (bool)buttonUXEnabled;
- (long long)defaultPageIndex;
- (id)environment;
- (bool)hidesOffscreenCustomPageViews;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)iconVisibilityHandling;
- (id)initWithConfiguration:(id)arg1;
- (double)internalDockPageControlVerticalMargin;
- (id)leadingScrollArrowLeadingConstraint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })listViewInsets;
- (long long)orientation;
- (double)pageControlAreaHeight;
- (id)scrollLeftButton;
- (id)scrollRightButton;
- (void)setButtonUXEnabled:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLeadingCustomViewVisibilityProgress:(double)arg1;
- (void)setLeadingScrollArrowLeadingConstraint:(id)arg1;
- (void)setListViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollLeftButton:(id)arg1;
- (void)setScrollRightButton:(id)arg1;
- (void)setTrailingScrollArrowTrailingConstraint:(id)arg1;
- (bool)shouldInstallFocusGuides;
- (id)trailingScrollArrowTrailingConstraint;

@end
