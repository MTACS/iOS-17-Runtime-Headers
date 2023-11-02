
@interface OBBulletedList : UIView {
    NSMutableArray * _items;
    NSLayoutConstraint * _leadingConstraint;
    NSLayoutConstraint * _trailingConstraint;
    NSMutableArray * _verticalConstraints;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSLayoutConstraint *leadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *trailingConstraint;
@property (nonatomic, retain) NSMutableArray *verticalConstraints;

- (void).cxx_destruct;
- (bool)_shouldHandleLandscapeiPhoneLayout;
- (void)_updateConstraints;
- (void)_updatePaddingForOrientation;
- (void)addBulletedListItem:(id)arg1;
- (void)addItemWithDescription:(id)arg1 image:(id)arg2;
- (void)addItemWithDescription:(id)arg1 symbolName:(id)arg2;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 linkButton:(id)arg4;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 tintColor:(id)arg4;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 tintColor:(id)arg4 linkButton:(id)arg5;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3 linkButton:(id)arg4;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3 tintColor:(id)arg4;
- (void)addItemWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3 tintColor:(id)arg4 linkButton:(id)arg5;
- (double)bulletedListItemSpacing;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (void)layoutSubviews;
- (id)leadingConstraint;
- (void)setItems:(id)arg1;
- (void)setLeadingConstraint:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (void)setVerticalConstraints:(id)arg1;
- (id)trailingConstraint;
- (id)verticalConstraints;

@end
