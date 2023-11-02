
@protocol DIAudioPowerControllerDelegate <NSObject>

@optional

- (void)controller:(DIAudioPowerController *)arg1 didUpdateAudioPowerForDropInDevice:(float)arg2;

@end
