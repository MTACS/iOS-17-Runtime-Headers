
@interface NEL2TPUserPreferences : NSObject <NEConfigurationValidating> {
    bool  _current;
    bool  _forced;
    NSString * _identifier;
    NSString * _name;
    NEVPNProtocolL2TP * _settings;
    struct __SCUserPreferencesRef { } * _userPrefs;
}

@property (getter=isCurrent) bool current;
@property (getter=isForced, readonly) bool forced;
@property (readonly) NSString *identifier;
@property (retain) NSString *name;
@property (copy) NEVPNProtocolL2TP *settings;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (void)dealloc;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1;
- (bool)isCurrent;
- (bool)isForced;
- (id)name;
- (void)setCurrent:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
