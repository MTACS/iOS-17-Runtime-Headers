
@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView {
    int  _accessibilityCachedHUDCapacity;
    UIImage * _accessibilityCachedHUDImage;
    int  _capacity;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_accessibilityHUDBatteryInsidesInsets;
- (double)_normalizedCapacity;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraLeftPadding;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
