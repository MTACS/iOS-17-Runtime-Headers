
@interface QSSMutableLanguageDetected : QSSLanguageDetected

@property (nonatomic, copy) NSString *detected_locale;
@property (nonatomic, copy) NSArray *predictions;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detected_locale;
- (id)init;
- (id)predictions;
- (void)setDetected_locale:(id)arg1;
- (void)setPredictions:(id)arg1;

@end
