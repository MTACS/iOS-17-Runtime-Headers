
@interface AXUIVoiceOverBluetoothDeviceTableCell : PSTableCell {
    UIActivityIndicatorView * _spinner;
    int  _state;
}

+ (id)checkedImage;
+ (id)selectedCheckedImage;
+ (id)spacerImage;
+ (id)textForBTPairedState:(int)arg1;

- (void).cxx_destruct;
- (void)_updateCheckMarkIcon;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setDeviceState:(int)arg1;
- (void)setDeviceStatePaired:(bool)arg1 andConnected:(bool)arg2;

@end
