
@interface HFServiceMigrationController : NSObject {
    HFHomeKitDispatcher * _dispatcher;
    HMHome * _home;
    unsigned long long  _timeoutOverride;
}

@property (nonatomic, retain) HFHomeKitDispatcher *dispatcher;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) unsigned long long timeoutOverride;

+ (id)accessoriesToMigrateFavoritesForHome:(id)arg1;
+ (bool)homeNeedsMigration:(id)arg1;
+ (bool)homeNeedsToDisplayMigrationOnboardingUI;
+ (id)primaryServicesToMigrateForHome:(id)arg1;

- (void).cxx_destruct;
- (id)dispatcher;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)migrateServicesToAccessory;
- (void)setDispatcher:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setTimeoutOverride:(unsigned long long)arg1;
- (unsigned long long)timeoutOverride;

@end
