
@interface BLSHPresentationUpdates : NSObject {
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _nextUpdatesStart;
    NSDate * _startDate;
    NSMutableArray * _updates;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDate *nextUpdatesStart;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (id)dequeueAllUpdates;
- (id)dequeueNextUpdate;
- (id)description;
- (id)initWithStartDate:(id)arg1 updates:(id)arg2 nextUpdatesStart:(id)arg3;
- (id)invalidate;
- (bool)isCompleted;
- (bool)isValidWithNowDate:(id)arg1;
- (id)nextUpdatesStart;
- (id)peekNextUpdate;

@end
