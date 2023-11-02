
@interface UITableViewCellDetailDisclosureView : UIControl {
    UIButton * _accessoryButton;
    UIColor * _accessoryTintColor;
    UITableViewCell * _cell;
    UIImageView * _disclosureView;
}

@property (nonatomic, readonly) UIButton *accessoryButton;
@property (nonatomic, retain) UIColor *accessoryTintColor;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateDisclosureChevronImage;
- (id)accessoryButton;
- (id)accessoryTintColor;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(bool)arg5;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
