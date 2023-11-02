
@interface CHSMutableScreenshotPresentationAttributes : CHSScreenshotPresentationAttributes

@property (nonatomic, copy) NSString *additionalSettingsContext;
@property (nonatomic) bool allowsPrivacySensitiveContent;
@property (nonatomic) long long colorScheme;
@property (nonatomic, copy) CHSWidgetTintParameters *tintParameters;

- (void)setAdditionalSettingsContext:(id)arg1;
- (void)setAllowsPrivacySensitiveContent:(bool)arg1;
- (void)setColorScheme:(long long)arg1;
- (void)setTintParameters:(id)arg1;

@end
