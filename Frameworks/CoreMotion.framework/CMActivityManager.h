
@interface CMActivityManager : NSObject {
    id  _internal;
}

@property (getter=isActivityAvailable, nonatomic, readonly) bool activityAvailable;
@property (copy) id /* block */ activityHandler;

- (id /* block */)activityHandler;
- (void)dealloc;
- (id)init;
- (bool)isActivityAvailable;
- (long long)overrideOscarSideband:(bool)arg1 withState:(long long)arg2;
- (void)setActivityHandler:(id /* block */)arg1;
- (long long)simulateMotionState:(bool)arg1 withState:(long long)arg2;
- (long long)simulateMotionStateYouthWithState:(long long)arg1;

@end
