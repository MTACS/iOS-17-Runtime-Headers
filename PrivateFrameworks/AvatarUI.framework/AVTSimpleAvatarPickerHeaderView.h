
@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView {
    AVTCircularButton * _button;
    id /* block */  _buttonPressedBlock;
    NSString * _currentSymbolName;
    UIImageSymbolConfiguration * _ellipsisSymbolConfiguration;
    UIImageSymbolConfiguration * _plusSymbolConfiguration;
}

@property (nonatomic, readonly) AVTCircularButton *button;
@property (nonatomic, copy) id /* block */ buttonPressedBlock;
@property (nonatomic, retain) NSString *currentSymbolName;
@property (nonatomic, retain) UIImageSymbolConfiguration *ellipsisSymbolConfiguration;
@property (nonatomic, retain) UIImageSymbolConfiguration *plusSymbolConfiguration;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed:(id)arg1;
- (id /* block */)buttonPressedBlock;
- (id)currentSymbolName;
- (id)ellipsisSymbolConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)plusSymbolConfiguration;
- (void)setButtonPressedBlock:(id /* block */)arg1;
- (void)setCurrentSymbolName:(id)arg1;
- (void)setEllipsisSymbolConfiguration:(id)arg1;
- (void)setPlusSymbolConfiguration:(id)arg1;
- (void)setupLayout;
- (void)updateForEditMode:(bool)arg1 animated:(bool)arg2;
- (void)updateWithSymbolNamed:(id)arg1 configuration:(id)arg2 animated:(bool)arg3;

@end
