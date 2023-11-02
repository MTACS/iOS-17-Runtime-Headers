
@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {
    bool  _connected;
    bool  _shouldAnimateConnection;
}

- (id)accessibilityHUDRepresentation;
- (double)alphaForConnected:(bool)arg1;
- (id)contentsImage;
- (void)performPendedActions;
- (void)setVisible:(bool)arg1;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
