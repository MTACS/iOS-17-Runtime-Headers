
@protocol NightShiftSupportProtocol <NSObject>

@required

- (id)copyPreferenceForKey:(NSString *)arg1 user:(NSString *)arg2;
- (void)setNightShiftFactorDictionary:(NSDictionary *)arg1;
- (void)setPreference:(id)arg1 forKey:(NSString *)arg2 user:(NSString *)arg3;

@end
