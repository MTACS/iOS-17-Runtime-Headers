
@protocol INOpenSettingIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)errorDetail;
- (NSString *)punchoutUrl;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setPunchoutUrl:(NSString *)arg1;

@end
