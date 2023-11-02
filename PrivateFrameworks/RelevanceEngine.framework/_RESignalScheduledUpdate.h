
@interface _RESignalScheduledUpdate : NSObject {
    id /* block */  _completion;
    double  _interval;
    NSDate * _lastFireDate;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double interval;
@property (nonatomic, retain) NSDate *lastFireDate;

- (void).cxx_destruct;
- (id /* block */)completion;
- (double)interval;
- (id)lastFireDate;
- (void)setCompletion:(id /* block */)arg1;
- (void)setInterval:(double)arg1;
- (void)setLastFireDate:(id)arg1;

@end
