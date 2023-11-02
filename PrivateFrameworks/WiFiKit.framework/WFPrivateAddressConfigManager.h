
@interface WFPrivateAddressConfigManager : NSObject {
    struct __SCPreferences { } * _prefs;
}

@property (nonatomic) struct __SCPreferences { }*prefs;

- (void)dealloc;
- (id)init;
- (struct __SCPreferences { }*)prefs;
- (id)privateAddressConfig;
- (void)setPrefs:(struct __SCPreferences { }*)arg1;

@end
