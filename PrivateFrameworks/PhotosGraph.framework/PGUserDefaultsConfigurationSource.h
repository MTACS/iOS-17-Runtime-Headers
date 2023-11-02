
@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource> {
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
