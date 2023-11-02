
@interface _UITableCellAccessoryButton : UIButton {
    UIColor * _accessoryTintColor;
    long long  _accessoryType;
    id /* block */  _backgroundImageProvider;
}

@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, readonly) long long accessoryType;
@property (nonatomic, copy) id /* block */ backgroundImageProvider;

- (void).cxx_destruct;
- (id)_backgroundImageView;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_reloadBackgroundImage;
- (id)accessoryTintColor;
- (long long)accessoryType;
- (id /* block */)backgroundImageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundImageProvider:(id /* block */)arg2 accessoryType:(long long)arg3;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setBackgroundImageProvider:(id /* block */)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
