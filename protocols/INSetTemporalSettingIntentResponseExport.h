
@protocol INSetTemporalSettingIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)errorDetail;
- (INDateComponentsRange *)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setOldValue:(INDateComponentsRange *)arg1;
- (void)setUpdatedValue:(INDateComponentsRange *)arg1;
- (INDateComponentsRange *)updatedValue;

@end
