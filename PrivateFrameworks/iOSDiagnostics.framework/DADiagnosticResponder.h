
@interface DADiagnosticResponder : NSObject <DKBrightnessResponder, DKVolumeHUDResponder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)enableVolumeHUD:(bool)arg1;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;

@end
