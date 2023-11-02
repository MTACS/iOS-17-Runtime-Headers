
@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting> {
    <_CDContextPersisting> * _persistenceSurvivingReboot;
    <_CDContextPersisting> * _persistenceSurvivingRelaunch;
}

@property (nonatomic, readonly) <_CDContextPersisting> *persistenceSurvivingReboot;
@property (nonatomic, readonly) <_CDContextPersisting> *persistenceSurvivingRelaunch;

+ (id)persistenceWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;

- (void).cxx_destruct;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (id)initWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;
- (id)loadRegistrations;
- (id)loadValues;
- (id)persistenceSurvivingReboot;
- (id)persistenceSurvivingRelaunch;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;

@end
