
@interface CHSScreenshotPresentationAttributes : NSObject {
    NSString * _additionalSettingsContext;
    bool  _allowsPrivacySensitiveContent;
    long long  _colorScheme;
    CHSWidgetTintParameters * _tintParameters;
}

@property (nonatomic, readonly, copy) NSString *additionalSettingsContext;
@property (nonatomic, readonly) bool allowsPrivacySensitiveContent;
@property (nonatomic, readonly) long long colorScheme;
@property (nonatomic, readonly, copy) CHSWidgetTintParameters *tintParameters;

- (void).cxx_destruct;
- (id)additionalSettingsContext;
- (bool)allowsPrivacySensitiveContent;
- (long long)colorScheme;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)tintParameters;

@end
