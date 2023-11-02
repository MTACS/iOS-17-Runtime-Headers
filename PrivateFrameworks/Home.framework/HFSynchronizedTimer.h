
@interface HFSynchronizedTimer : NSObject {
    NSTimer * _activeTimer;
    NSMapTable * _observers;
}

@property (nonatomic, retain) NSTimer *activeTimer;
@property (nonatomic, readonly) NSMapTable *observers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)_updateTimerState;
- (id)activeTimer;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setActiveTimer:(id)arg1;

@end
