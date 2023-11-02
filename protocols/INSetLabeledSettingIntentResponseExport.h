
@protocol INSetLabeledSettingIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)errorDetail;
- (NSString *)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setOldValue:(NSString *)arg1;
- (void)setUpdatedValue:(NSString *)arg1;
- (NSString *)updatedValue;

@end
