
@protocol _INPBSetBinarySettingIntentResponse <NSObject>

@required

- (int)StringAsOldValue:(NSString *)arg1;
- (int)StringAsUpdatedValue:(NSString *)arg1;
- (NSString *)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasOldValue;
- (bool)hasUpdatedValue;
- (int)oldValue;
- (NSString *)oldValueAsString:(int)arg1;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setHasOldValue:(bool)arg1;
- (void)setHasUpdatedValue:(bool)arg1;
- (void)setOldValue:(int)arg1;
- (void)setUpdatedValue:(int)arg1;
- (int)updatedValue;
- (NSString *)updatedValueAsString:(int)arg1;

@end
