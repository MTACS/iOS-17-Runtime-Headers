
@protocol SMCCoreTelephonyClientDelegate <NSObject>

@required

- (void)cellularDataStateChanged;
- (void)cellularDataStateChangedWithCellularDataEnabled:(bool)arg1;
- (void)cellularDataStateChangedWithRoaming:(bool)arg1;

@end
