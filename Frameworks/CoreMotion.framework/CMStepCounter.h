
@interface CMStepCounter : NSObject {
    CMStepCounterProxy * _stepcounterProxy;
}

@property bool enabled;
@property (nonatomic, readonly) CMStepCounterProxy *stepcounterProxy;

+ (bool)isStepCountingAvailable;

- (void)dealloc;
- (void)deleteHistory;
- (bool)enabled;
- (void)getTotalCountToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)setEnabled:(bool)arg1;
- (void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(id /* block */)arg3;
- (id)stepcounterProxy;
- (void)stopStepCountingUpdates;

@end
