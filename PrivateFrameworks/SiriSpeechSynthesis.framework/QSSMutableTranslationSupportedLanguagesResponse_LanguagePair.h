
@interface QSSMutableTranslationSupportedLanguagesResponse_LanguagePair : QSSTranslationSupportedLanguagesResponse_LanguagePair

@property (nonatomic, copy) NSString *source_locale;
@property (nonatomic, copy) NSString *target_locale;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setSource_locale:(id)arg1;
- (void)setTarget_locale:(id)arg1;
- (id)source_locale;
- (id)target_locale;

@end
