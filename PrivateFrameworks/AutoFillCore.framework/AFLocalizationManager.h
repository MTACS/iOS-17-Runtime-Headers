
@interface AFLocalizationManager : NSObject {
    NSString * _localeIdentifier;
}

@property (nonatomic, retain) NSString *localeIdentifier;

- (void).cxx_destruct;
- (id)_truncationSentinel;
- (id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3;
- (id)init;
- (id)initForLocalizedStrings;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (id)localizedStringForKey:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;

@end
