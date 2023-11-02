
@interface RMMediaSessionObserver : NSObject {
    RMRelativeMotionManager * _manager;
}

@property (nonatomic, retain) RMRelativeMotionManager *manager;

- (void).cxx_destruct;
- (id)manager;
- (void)setManager:(id)arg1;
- (void)startSessionStatusUpdatesForClientMode:(long long)arg1 toQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)stopSessionStatusUpdates;

@end
