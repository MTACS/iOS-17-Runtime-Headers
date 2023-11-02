
@interface _LSSharedWebCredentialsAppLink : LSAppLink {
    struct LSBinding { 
        unsigned int bundle; 
        struct LSBundleData {} *bundleData; 
        unsigned int claim; 
        struct { /* ? */ } *claimData; 
        id userInfo; 
        NSString *reason; 
    }  _binding;
    _SWCServiceDetails * _serviceDetails;
}

@property (readonly) struct LSBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; id x6; } binding;
@property (nonatomic, retain) _SWCServiceDetails *serviceDetails;

+ (id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id*)arg2;
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1;
+ (bool)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id*)arg2;
+ (bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id*)arg4;
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(id /* block */)arg3;
+ (void)initialize;
+ (bool)removeAllSettingsReturningError:(id*)arg1;
+ (bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id*)arg3;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_SWCSettingsReturningError:(id*)arg1;
- (id)_SWCSpecifierForSettings;
- (bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct LSBinding { unsigned int x1; struct LSBundleData {} *x2; unsigned int x3; struct { /* ? */ } *x4; id x5; id x6; })binding;
- (id)browserSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAlwaysEnabled;
- (bool)isEnabled;
- (bool)removeSettingsReturningError:(id*)arg1;
- (id)serviceDetails;
- (bool)setBrowserSettings:(id)arg1 error:(id*)arg2;
- (bool)setEnabled:(bool)arg1 error:(id*)arg2;
- (void)setServiceDetails:(id)arg1;

@end
