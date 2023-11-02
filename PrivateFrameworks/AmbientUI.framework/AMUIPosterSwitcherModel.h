
@interface AMUIPosterSwitcherModel : NSObject {
    PRSPosterConfiguration * _activeConfiguration;
    NSHashTable * _observers;
    NSArray * _posterConfigurations;
    AMUIPosterUpdater * _posterConfigurationsUpdater;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    PRSWallpaperObserver * _wallpaperObserver;
}

@property (setter=_setActiveConfiguration:, nonatomic, retain) PRSPosterConfiguration *activeConfiguration;
@property (setter=_setPosterConfigurations:, nonatomic, copy) NSArray *posterConfigurations;
@property (nonatomic, readonly) AMUIPosterUpdater *posterConfigurationsUpdater;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setActiveConfiguration:(id)arg1;
- (void)_setPosterConfigurations:(id)arg1;
- (id)activeConfiguration;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)posterConfigurations;
- (id)posterConfigurationsUpdater;
- (void)removeObserver:(id)arg1;

@end
