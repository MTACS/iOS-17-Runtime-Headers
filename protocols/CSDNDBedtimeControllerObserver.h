
@protocol CSDNDBedtimeControllerObserver <NSObject>

@required

- (void)dndBedtimeControllerActiveStateDidChange:(CSDNDBedtimeController *)arg1;
- (void)dndBedtimeControllerShowGreetingStateDidChange:(CSDNDBedtimeController *)arg1 animated:(bool)arg2;

@end
