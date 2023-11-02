
@interface TRASettingsValidator : NSObject <TRASettingsValidating> {
    TRASettingsOrientation * _orientationSettings;
    bool  _orientationSettingsValidated;
    NSString * _orientationSettingsValidatedReason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) TRASettingsOrientation *orientationSettings;
@property (getter=didValidateOrientationSettings, nonatomic) bool orientationSettingsValidated;
@property (nonatomic, copy) NSString *orientationSettingsValidatedReason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)didValidateOrientationSettings;
- (id)orientationSettings;
- (id)orientationSettingsValidatedReason;
- (void)setOrientationSettings:(id)arg1;
- (void)setOrientationSettingsValidated:(bool)arg1;
- (void)setOrientationSettingsValidatedReason:(id)arg1;
- (void)validateOrientationSettingsWithBlock:(id /* block */)arg1;

@end
