
@protocol VCAudioPowerSpectrumSourceDelegate <NSObject>

@required

- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;

@end
