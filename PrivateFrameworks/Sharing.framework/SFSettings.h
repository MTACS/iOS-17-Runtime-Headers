
@interface SFSettings : PTSettings {
    SFMagicHeadSettings * _magicHeadSettings;
}

@property (nonatomic, retain) SFMagicHeadSettings *magicHeadSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)magicHeadSettings;
- (void)setMagicHeadSettings:(id)arg1;

@end
