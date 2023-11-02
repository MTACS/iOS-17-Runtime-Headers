
@interface GCDTimer : NSObject {
    NSDate * _fireDate;
    bool  _repeating;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, readonly) NSDate *fireDate;
@property (getter=isRepeating, nonatomic, readonly) bool repeating;

+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 repeating:(bool)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)fireDate;
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 repeating:(bool)arg3 block:(id /* block */)arg4;
- (void)invalidate;
- (bool)isRepeating;

@end
