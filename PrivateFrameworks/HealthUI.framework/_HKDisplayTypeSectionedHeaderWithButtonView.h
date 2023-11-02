
@interface _HKDisplayTypeSectionedHeaderWithButtonView : _HKDisplayTypeSectionedHeaderView {
    UIButton * _accessoryButton;
    UIAction * _accessoryButtonAction;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) UIAction *accessoryButtonAction;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updatePreferredTitleFont;
- (id)accessoryButton;
- (id)accessoryButtonAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAccessoryButton:(id)arg1;
- (void)setAccessoryButtonAction:(id)arg1;

@end
