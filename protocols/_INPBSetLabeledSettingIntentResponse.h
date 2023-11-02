
@protocol _INPBSetLabeledSettingIntentResponse <NSObject>

@required

- (NSString *)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasOldValue;
- (bool)hasUpdatedValue;
- (NSString *)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setOldValue:(NSString *)arg1;
- (void)setUpdatedValue:(NSString *)arg1;
- (NSString *)updatedValue;

@end
