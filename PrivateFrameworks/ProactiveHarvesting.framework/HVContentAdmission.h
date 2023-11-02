
@interface HVContentAdmission : NSObject {
    NSUserDefaults * _defaults;
    HVContentAdmissionKVOObserver * _kvoObserver;
    _PASLock * _lock;
    HVContentAdmissionKVOObserver * _pastEventsObserver;
}

+ (void)addContentAdmissionObserver:(id)arg1;
+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)arg1;
+ (void)initialize;
+ (void)migrateForTests;
+ (void)registerConfigurationAsset:(id)arg1;
+ (bool)shouldAdmitContentFromBundleIdentifier:(id)arg1;
+ (bool)suggestionsShouldShowPastEvents;
+ (void)updateConfigurableBundleIdentifierDenyList:(id)arg1;

- (void).cxx_destruct;
- (id)init;

@end
