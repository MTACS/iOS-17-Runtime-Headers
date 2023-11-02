
@interface HUGridSectionHeaderView : UICollectionViewListCell <UIGestureRecognizerDelegate> {
    id /* block */  _actionHandler;
    UIImageView * _chevronView;
    NSArray * _layoutConstraints;
    UIListContentView * _listContentView;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    bool  _showsDisclosureIndicator;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) UIImageView *chevronView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, retain) UIListContentView *listContentView;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) bool showsDisclosureIndicator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;

+ (bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_didRecognizeLongPressGesture:(id)arg1;
- (void)_didRecognizeTapGesture:(id)arg1;
- (void)_installGestureRecognizers;
- (void)_uninstallGestureRecognizers;
- (id /* block */)actionHandler;
- (id)chevronView;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutConstraints;
- (id)listContentView;
- (id)longPressGestureRecognizer;
- (void)prepareForReuse;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setChevronView:(id)arg1;
- (void)setContentConfiguration:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setListContentView:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setShowsDisclosureIndicator:(bool)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (bool)showsDisclosureIndicator;
- (id)tapGestureRecognizer;
- (void)updateConstraints;

@end
