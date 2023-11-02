
@interface HDFeatureSettingsManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observersByFeatureIdentifier;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_settingsDidSyncNotification:(id)arg1;
- (void)dealloc;
- (id)featureSettingsForFeatureIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (void)registerObserver:(id)arg1 featureIdentifier:(id)arg2 queue:(id)arg3;
- (bool)removeFeatureSettingsValueForKey:(id)arg1 featureIdentifier:(id)arg2 error:(id*)arg3;
- (bool)resetFeatureSettingsForFeatureIdentifier:(id)arg1 suppressNotificationsToObserver:(id)arg2 error:(id*)arg3;
- (bool)setFeatureSettingsData:(id)arg1 forKey:(id)arg2 featureIdentifier:(id)arg3 error:(id*)arg4;
- (bool)setFeatureSettingsNumber:(id)arg1 forKey:(id)arg2 featureIdentifier:(id)arg3 suppressNotificationsToObserver:(id)arg4 error:(id*)arg5;
- (bool)setFeatureSettingsString:(id)arg1 forKey:(id)arg2 featureIdentifier:(id)arg3 error:(id*)arg4;
- (bool)setFeatureSettingsValues:(id)arg1 featureIdentifier:(id)arg2 suppressNotificationsToObserver:(id)arg3 error:(id*)arg4;
- (void)unregisterObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 featureIdentifier:(id)arg2;

@end
