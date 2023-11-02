
@interface _SFSiriReaderPlaybackPositionAndStateController : NSObject <_SFSettingsAlertStepperController> {
    bool  _isPlaying;
    <_SFSettingsAlertStepperConfiguration> * _stepper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decrementValue:(id)arg1;
- (void)incrementValue:(id)arg1;
- (void)prepareStepper:(id)arg1;
- (void)resetValue:(id)arg1;

@end
