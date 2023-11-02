
@protocol _INPBOpenSettingIntentResponse <NSObject>

@required

- (NSString *)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasPunchoutUrl;
- (NSString *)punchoutUrl;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setPunchoutUrl:(NSString *)arg1;

@end
