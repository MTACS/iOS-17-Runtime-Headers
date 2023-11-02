
@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate> {
    RERelevanceEnginePreferences * _effectivePreferences;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _preferences;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resetEffectivePreferences;
- (id)effectivePreferences;
- (id)initWithQueue:(id)arg1;
- (void)relevanceEnginePreferencesDidUpdate:(id)arg1;
- (void)removePreferencesForObject:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;

@end
