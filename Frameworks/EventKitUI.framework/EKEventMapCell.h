
@interface EKEventMapCell : UITableViewCell {
    bool  _currentlyLoading;
    EKEventMapDetailItem * _detailItem;
    bool  _mapViewSetup;
    bool  _setupAsEmptyView;
}

@property (nonatomic) bool currentlyLoading;
@property (nonatomic) EKEventMapDetailItem *detailItem;
@property (nonatomic) bool mapViewSetup;
@property (nonatomic) bool setupAsEmptyView;

- (void).cxx_destruct;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)currentlyLoading;
- (id)detailItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (bool)mapViewSetup;
- (void)setCurrentlyLoading:(bool)arg1;
- (void)setDetailItem:(id)arg1;
- (void)setMapViewSetup:(bool)arg1;
- (void)setSetupAsEmptyView:(bool)arg1;
- (bool)setupAsEmptyView;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;

@end
