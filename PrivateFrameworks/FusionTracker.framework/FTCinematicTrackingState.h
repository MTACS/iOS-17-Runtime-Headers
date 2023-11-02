
@interface FTCinematicTrackingState : NSObject {
    unsigned long long  _commitToken;
    struct shared_ptr<ft::Frame> { 
        struct Frame {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _frame;
    FTCinematicHighPriorityTrackerState * _highPriorityTrackerState;
    FTCinematicInput * _input;
    bool  _isTapToTrackOverlapWithIspMitigationEnabled;
    struct shared_ptr<ft::CinematicTracker> { 
        struct CinematicTracker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _tracker;
}

@property (nonatomic, readonly) FTCinematicHighPriorityTrackerState *highPriorityTrackerState;
@property (nonatomic, readonly) FTCinematicInput *input;

+ (id)stateWithTracker:(struct shared_ptr<ft::CinematicTracker> { struct CinematicTracker {} *x1; struct __shared_weak_count {} *x2; })arg1 frame:(struct shared_ptr<ft::Frame> { struct Frame {} *x1; struct __shared_weak_count {} *x2; })arg2 input:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)commit;
- (id)highPriorityTrackerState;
- (id)input;

@end
