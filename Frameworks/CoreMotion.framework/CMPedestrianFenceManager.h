
@interface CMPedestrianFenceManager : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) CMPedestrianFenceManagerInternal *_internal;

+ (unsigned long long)availableFenceTypes;
+ (bool)isAvailable;

- (id)_internal;
- (void)clearFence:(id)arg1;
- (void)dealloc;
- (void)endSession;
- (void)forceClearAllFences;
- (void)forceClearFence:(id)arg1;
- (id)init;
- (void)setFence:(id)arg1 withRadius:(float)arg2 withCompletion:(id /* block */)arg3;
- (void)simulateFence:(id)arg1 withExitAfterDelay:(double)arg2 wake:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)startSession;

@end
