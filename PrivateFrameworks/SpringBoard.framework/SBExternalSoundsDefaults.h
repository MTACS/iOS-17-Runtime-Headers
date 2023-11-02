
@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool buttonsCanChangeRingerVolume;
@property (nonatomic) bool keyboardPlaysSounds;
@property (nonatomic) bool systemHapticsEnabled;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
