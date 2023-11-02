
@protocol INSetBinarySettingIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)errorDetail;
- (long long)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setOldValue:(long long)arg1;
- (void)setUpdatedValue:(long long)arg1;
- (long long)updatedValue;

@end
