
@interface MSVPersistentTimer : NSObject {
    id /* block */  _block;
    double  _interval;
    NSString * _name;
    NSDate * _startDate;
    PCPersistentTimer * _timer;
}

@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_handleTimerElapsed:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;
- (void)invalidateWithReason:(id)arg1;
- (bool)isValid;

@end
