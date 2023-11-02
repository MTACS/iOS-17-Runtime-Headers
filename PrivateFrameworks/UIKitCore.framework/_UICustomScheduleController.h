
@interface _UICustomScheduleController : NSObject {
    bool  _inScheduleTime;
    NSTimer * _nextEventTimer;
    NSMapTable * _observers;
    struct { 
        struct { 
            long long hour; 
            long long minute; 
        } beginTime; 
        struct { 
            long long hour; 
            long long minute; 
        } endTime; 
    }  _schedule;
}

@property (getter=isInScheduleTime, nonatomic, readonly) bool inScheduleTime;
@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } schedule;

- (void).cxx_destruct;
- (void)_notifyChange;
- (void)_significantTimeChange;
- (void)_updateStatus:(bool)arg1;
- (void)_updateTimeMonitoring;
- (void)_updateTimeMonitoring:(bool)arg1;
- (void)_updateWithDate:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)forceUpdate;
- (id)init;
- (bool)isInScheduleTime;
- (id)nextTransition:(bool)arg1;
- (void)removeObserver:(id)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })schedule;
- (void)setSchedule:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;

@end
