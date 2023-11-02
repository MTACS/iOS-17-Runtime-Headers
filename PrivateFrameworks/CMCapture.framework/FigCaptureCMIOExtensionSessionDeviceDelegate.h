
@interface FigCaptureCMIOExtensionSessionDeviceDelegate : NSObject <CMIOExtensionSessionDeviceDelegate> {
    struct OpaqueFigCaptureDevice { } * _figCaptureDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)device:(id)arg1 availableStreamsChanged:(id)arg2;
- (void)device:(id)arg1 deviceControlPIDChanged:(int)arg2;
- (void)device:(id)arg1 propertiesChanged:(id)arg2;
- (void)device:(id)arg1 runningSomewhereChanged:(bool)arg2;
- (void)deviceHasBeenInvalidated:(id)arg1;

@end
