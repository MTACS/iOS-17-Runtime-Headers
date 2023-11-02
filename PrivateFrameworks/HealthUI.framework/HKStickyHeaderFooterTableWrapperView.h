
@interface HKStickyHeaderFooterTableWrapperView : UIView {
    long long  _footerBehavior;
    NSArray * _footerConstraints;
    NSLayoutConstraint * _footerPinningConstraint;
    UIView * _footerView;
    long long  _headerBehavior;
    NSArray * _headerConstraints;
    NSLayoutConstraint * _headerPinningConstraint;
    UIView * _headerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousFooterSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousHeaderSize;
    UITableView * _tableView;
}

@property (nonatomic) long long footerBehavior;
@property (nonatomic, retain) NSArray *footerConstraints;
@property (nonatomic, retain) NSLayoutConstraint *footerPinningConstraint;
@property (nonatomic, retain) UIView *footerView;
@property (nonatomic) long long headerBehavior;
@property (nonatomic, retain) NSArray *headerConstraints;
@property (nonatomic, retain) NSLayoutConstraint *headerPinningConstraint;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) struct CGSize { double x1; double x2; } previousFooterSize;
@property (nonatomic) struct CGSize { double x1; double x2; } previousHeaderSize;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_addFooterConstraintsForBehavior:(long long)arg1;
- (void)_addHeaderConstraintsForBehavior:(long long)arg1;
- (id)_createFooterConstraintsForBehavior:(long long)arg1;
- (id)_createHeaderConstraintsForBehavior:(long long)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateFooterConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_updateHeaderConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_updatePinningConstraintConstantsForCurrentSafeArea;
- (long long)footerBehavior;
- (id)footerConstraints;
- (id)footerPinningConstraint;
- (id)footerView;
- (long long)headerBehavior;
- (id)headerConstraints;
- (id)headerPinningConstraint;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })previousFooterSize;
- (struct CGSize { double x1; double x2; })previousHeaderSize;
- (void)safeAreaInsetsDidChange;
- (void)setFooterBehavior:(long long)arg1;
- (void)setFooterConstraints:(id)arg1;
- (void)setFooterPinningConstraint:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderBehavior:(long long)arg1;
- (void)setHeaderConstraints:(id)arg1;
- (void)setHeaderPinningConstraint:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setPreviousFooterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView;

@end
