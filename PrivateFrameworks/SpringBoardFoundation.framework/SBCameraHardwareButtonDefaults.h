
@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) double shutterButtonLongPressCancellationTimeout;
@property (nonatomic, readonly) double shutterButtonLongPressTimeout;
@property (nonatomic, readonly) bool shutterButtonShouldUsePocketDetection;

- (void)_bindAndRegisterDefaults;

@end
