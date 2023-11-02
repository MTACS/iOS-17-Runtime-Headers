
@protocol MOSettingsWriter

@required

- (void)removeValueForSetting:(NSString *)arg1 inGroup:(NSString *)arg2;
- (void)setValue:(id)arg1 forSetting:(NSString *)arg2 inGroup:(NSString *)arg3;

@end
