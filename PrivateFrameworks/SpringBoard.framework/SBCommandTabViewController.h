
@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate> {
    MTMaterialView * _backgroundMaterialView;
    MTShadowView * _backgroundShadowView;
    UIView * _blurredBackgroundView;
    <SBCommandTabViewControllerDelegate> * _delegate;
    SBIconView * _homeIconView;
    UIHoverGestureRecognizer * _hoverGestureRecognizer;
    SBIconController * _iconController;
    SBIconModel * _iconModel;
    NSMutableArray * _iconViews;
    bool  _isIconSelected;
    bool  _isTouchDown;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastHoverLocation;
    UIPanGestureRecognizer * _panGestureRecognizer;
    NSMutableOrderedSet * _recentDisplayItems;
    UILabel * _selectedIconLabel;
    SBIconView * _selectedIconView;
    unsigned long long  _selectedIndex;
    NSLayoutConstraint * _selectedLabelBottomConstraint;
    NSLayoutConstraint * _selectedLabelXConstraint;
    UIView * _selectionSquareView;
    NSLayoutConstraint * _selectionXLayoutConstraint;
    UIStackView * _stackView;
    UITapGestureRecognizer * _tapDismissGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBCommandTabViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canActivateWithRecentDisplayItems:(id)arg1;

- (void).cxx_destruct;
- (void)_configureGridLayoutConfiguration:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleTapDismissGesture:(id)arg1;
- (void)_handleUIGesture:(id)arg1;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;
- (void)_updateForUserInterfaceStyle;
- (void)_updateIconSelectionPositionAndLabelText;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (void)icon:(id)arg1 touchEnded:(bool)arg2;
- (void)iconModelDidChange:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)iconTouchBegan:(id)arg1;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (bool)iconViewDisplaysAccessories:(id)arg1;
- (unsigned long long)indexOfDisplayItem:(id)arg1;
- (id)init;
- (id)initWithRecentDisplayItems:(id)arg1;
- (void)next;
- (void)previous;
- (void)removeDisplayItem:(id)arg1;
- (id)selectedApplicationDisplayItem;
- (void)setDelegate:(id)arg1;
- (void)showCommandTabBar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
