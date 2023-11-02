
@interface BYSetupStateNotifier : NSObject {
    NSMutableArray * _exclusiveNotificationBlocks;
    int  _exclusiveNotificationToken;
    NSMutableArray * _generalStateNotificationBlocks;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableArray * _relaunchStateNotificationBlocks;
    bool  _shouldRelaunchSetup;
    int  _shouldRemainAliveNotificationToken;
    NSMutableDictionary * _specificStateNotificationBlocks;
    unsigned long long  _state;
    int  _stateNotificationToken;
}

@property (nonatomic, retain) NSMutableArray *exclusiveNotificationBlocks;
@property (nonatomic) int exclusiveNotificationToken;
@property (nonatomic, retain) NSMutableArray *generalStateNotificationBlocks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSMutableArray *relaunchStateNotificationBlocks;
@property (nonatomic) bool shouldRelaunchSetup;
@property (nonatomic) int shouldRemainAliveNotificationToken;
@property (nonatomic, retain) NSMutableDictionary *specificStateNotificationBlocks;
@property (nonatomic) unsigned long long state;
@property (nonatomic) int stateNotificationToken;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (void)_beginObservingState;
- (void)_endObservingState;
- (void)_noLongerExclusiveNotificationFired;
- (void)_shouldRemainAliveNotificationFired;
- (void)_stateChangedTo:(unsigned long long)arg1;
- (void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(id /* block */)arg1;
- (void)addRelaunchStateChangeObserver:(id /* block */)arg1;
- (void)addStateChangeObserver:(id /* block */)arg1;
- (void)addStateCompletionObserver:(id /* block */)arg1 forState:(unsigned long long)arg2;
- (unsigned long long)currentState;
- (void)dealloc;
- (id)exclusiveNotificationBlocks;
- (int)exclusiveNotificationToken;
- (id)generalStateNotificationBlocks;
- (id)init;
- (id)notificationQueue;
- (void)notifySetupShouldRemainAlive;
- (void)notifyStateChangedTo:(unsigned long long)arg1;
- (id)relaunchStateNotificationBlocks;
- (void)setExclusiveNotificationBlocks:(id)arg1;
- (void)setExclusiveNotificationToken:(int)arg1;
- (void)setGeneralStateNotificationBlocks:(id)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setRelaunchStateNotificationBlocks:(id)arg1;
- (void)setShouldRelaunchSetup:(bool)arg1;
- (void)setShouldRemainAliveNotificationToken:(int)arg1;
- (void)setSpecificStateNotificationBlocks:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateNotificationToken:(int)arg1;
- (bool)shouldRelaunchSetup;
- (int)shouldRemainAliveNotificationToken;
- (id)specificStateNotificationBlocks;
- (unsigned long long)state;
- (int)stateNotificationToken;

@end
