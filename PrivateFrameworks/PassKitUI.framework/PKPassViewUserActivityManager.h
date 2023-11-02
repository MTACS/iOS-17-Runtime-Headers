
@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver> {
    NSUserActivity * _currentUserActivity;
    bool  _isForegroundActive;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_currentUserActivityPassUniqueID;
- (id)_displayNameForPass:(id)arg1;
- (void)_endedViewingPass;
- (id)_init;
- (bool)_shouldDonateActivity:(id)arg1;
- (id)_templateNameForPass:(id)arg1;
- (void)dealloc;
- (void)endedViewingPass;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)init;
- (void)startedViewingPass:(id)arg1;

@end
