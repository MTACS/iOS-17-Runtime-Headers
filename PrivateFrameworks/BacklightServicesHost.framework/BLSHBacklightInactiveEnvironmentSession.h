
@interface BLSHBacklightInactiveEnvironmentSession : NSObject <BLSHBacklightSceneHostEnvironmentObserver> {
    bool  _ended;
    NSHashTable * _environmentObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    BLSHBacklightEnvironmentPresentation * _presentation;
    <BLSHBacklightInactiveEnvironmentSessionUpdating> * _updater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BLSHBacklightInactiveEnvironmentSessionUpdating> *updater;

+ (id)sessionWithPresentation:(id)arg1;

- (void).cxx_destruct;
- (void)addEnvironmentsObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)hostEnvironment:(id)arg1 clientDidUpdateEnabled:(bool)arg2;
- (void)hostEnvironment:(id)arg1 clientDidUpdateSupportsAlwaysOn:(bool)arg2;
- (void)hostEnvironment:(id)arg1 hostDidSetAlwaysOnEnabledForEnvironment:(bool)arg2;
- (void)hostEnvironment:(id)arg1 hostDidSetLiveUpdating:(bool)arg2;
- (void)hostEnvironment:(id)arg1 hostDidSetUnrestrictedFramerateUpdates:(bool)arg2;
- (void)hostEnvironment:(id)arg1 invalidateContentForReason:(id)arg2;
- (id)initWithPresentation:(id)arg1;
- (id)presentation;
- (void)removeEnvironmentsObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)sessionDidEnd;
- (void)setPresentation:(id)arg1;
- (void)setUpdater:(id)arg1;
- (id)updater;
- (void)updaterDidBeginUpdateToBacklightState:(long long)arg1;
- (void)updaterDidUpdateToPresentation:(id)arg1;

@end
