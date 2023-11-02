
@protocol SBHardwareButtonColluding <NSObject>

@required

- (void)cancelHardwareButtonPress;
- (SBHardwareButtonCoordinator *)hardwareButtonCoordinator;
- (NSString *)hardwareButtonIdentifier;
- (void)setHardwareButtonCoordinator:(SBHardwareButtonCoordinator *)arg1;

@end
