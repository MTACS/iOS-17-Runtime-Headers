
@interface PXSettingsConfigurationsSource : NSObject <PXSettingsConfigurationsMutableSource> {
    NSMutableArray * _configurations;
    <PXSettingsConfigurationsSourceObserver> * _observer;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSMutableArray *configurations;
@property (nonatomic, readonly) long long numberOfConfigurations;
@property (nonatomic) <PXSettingsConfigurationsSourceObserver> *observer;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)_save;
- (id)configurationAtIndex:(long long)arg1;
- (id)configurations;
- (void)deleteAllConfigurations;
- (void)deleteConfigurationAtIndex:(long long)arg1;
- (long long)indexOfConfiguration:(id)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (void)insertConfiguration:(id)arg1 atIndex:(long long)arg2;
- (void)insertConfigurations:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfConfigurations;
- (id)observer;
- (void)performChanges:(id /* block */)arg1;
- (void)renameConfigurationAtIndex:(long long)arg1 withName:(id)arg2;
- (void)setObserver:(id)arg1;
- (void)updateConfigurationAtIndex:(long long)arg1;
- (id)userDefaults;

@end
