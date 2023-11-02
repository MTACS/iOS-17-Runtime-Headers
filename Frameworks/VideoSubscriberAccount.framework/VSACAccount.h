
@interface VSACAccount : NSObject {
    unsigned long long  _overridingPasswordOption;
}

@property (nonatomic) unsigned long long overridingPasswordOption;

+ (id)sharedInstance;

- (id)account;
- (unsigned long long)convertedAMSAccountPasswordPromptSettingWithPaid:(bool)arg1;
- (unsigned long long)freeAppPasswordPromptSetting;
- (bool)hasAccount;
- (id)initWithManualPasswordOption:(unsigned long long)arg1;
- (unsigned long long)overridingPasswordOption;
- (unsigned long long)paidAppPasswordPromptSetting;
- (void)setOverridingPasswordOption:(unsigned long long)arg1;
- (id)username;

@end
