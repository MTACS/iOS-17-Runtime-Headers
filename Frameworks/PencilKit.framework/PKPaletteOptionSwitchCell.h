
@interface PKPaletteOptionSwitchCell : PKPaletteOptionCell {
    UISwitch * _switchButton;
    UILabel * _textLabel;
}

@property (nonatomic, readonly) UISwitch *switchButton;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (id)init;
- (id)switchButton;
- (id)textLabel;

@end
