
@interface CNStarkHeaderPlatterView : UIView {
    UIImageView * _accessory;
    UIImage * _accessoryImage;
    UILabel * _label;
    NSString * _labelText;
}

@property (nonatomic, retain) UIImageView *accessory;
@property (nonatomic, retain) UIImage *accessoryImage;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, copy) NSString *labelText;

- (void).cxx_destruct;
- (void)_updateForFocusedState:(bool)arg1;
- (id)accessory;
- (id)accessoryImage;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithLabelText:(id)arg1 accessoryImage:(id)arg2;
- (id)label;
- (id)labelText;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryImage:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;

@end
