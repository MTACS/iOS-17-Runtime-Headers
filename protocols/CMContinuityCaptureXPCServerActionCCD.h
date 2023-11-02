
@protocol CMContinuityCaptureXPCServerActionCCD <NSObject>

@required

- (void)serverXPCConnectionInterrupted;
- (void)sessionDidUpdateWithConfiguration:(CMContinuityCaptureUIConfiguration *)arg1;
- (void)tearDownShield;

@end
