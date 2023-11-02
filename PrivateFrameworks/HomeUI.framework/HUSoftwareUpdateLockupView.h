
@interface HUSoftwareUpdateLockupView : HULockupView {
    NSSet * _affectedAccessories;
    NSLayoutConstraint * _gridHeightConstraint;
    HUItemCollectionViewController * _gridViewController;
    bool  _isObservingPreferredContentSize;
    HFItem * _item;
    UILabel * _tertiaryDetailLabel;
}

@property (nonatomic, retain) NSSet *affectedAccessories;
@property (nonatomic, retain) NSLayoutConstraint *gridHeightConstraint;
@property (nonatomic, retain) HUItemCollectionViewController *gridViewController;
@property (nonatomic) bool isObservingPreferredContentSize;
@property (nonatomic, retain) UILabel *tertiaryDetailLabel;

- (void).cxx_destruct;
- (id)affectedAccessories;
- (void)dealloc;
- (id)gridHeightConstraint;
- (id)gridViewController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initializeIconViewWithSize:(unsigned long long)arg1;
- (bool)isObservingPreferredContentSize;
- (id)item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAffectedAccessories:(id)arg1;
- (void)setGridHeightConstraint:(id)arg1;
- (void)setGridViewController:(id)arg1;
- (void)setIsObservingPreferredContentSize:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setTertiaryDetailLabel:(id)arg1;
- (id)tertiaryDetailLabel;
- (void)updateDescriptionExpandableTextView:(id)arg1 animate:(bool)arg2;
- (void)updateIconView:(id)arg1 animate:(bool)arg2;
- (void)updateUIWithAnimation:(bool)arg1;

@end
