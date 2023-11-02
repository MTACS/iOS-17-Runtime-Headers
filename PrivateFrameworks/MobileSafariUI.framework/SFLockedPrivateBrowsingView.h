
@interface SFLockedPrivateBrowsingView : UIView {
    UIContentUnavailableView * _contentUnavailableView;
    UIAction * _tabGroupPickerAction;
    TabOverviewToolbar * _toolbar;
}

@property (nonatomic, copy) UIAction *tabGroupPickerAction;
@property (nonatomic, copy) UIAction *unlockAction;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)setTabGroupPickerAction:(id)arg1;
- (void)setUnlockAction:(id)arg1;
- (id)tabGroupPickerAction;
- (id)unlockAction;

@end
