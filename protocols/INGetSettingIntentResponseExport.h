
@protocol INGetSettingIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)errorDetail;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setSettingResponseDatas:(NSArray *)arg1;
- (NSArray *)settingResponseDatas;

@end
