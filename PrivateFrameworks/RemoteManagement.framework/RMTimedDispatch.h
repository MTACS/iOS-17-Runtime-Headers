
@interface RMTimedDispatch : NSObject {
    bool  _complete;
    id /* block */  _timerCompletionBlock;
    NSString * _timerID;
}

@property bool complete;
@property (copy) id /* block */ timerCompletionBlock;
@property (retain) NSString *timerID;

+ (id)timedDispatchAfterInterval:(double)arg1 completionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (bool)complete;
- (id)initAfterInterval:(double)arg1 completionBlock:(id /* block */)arg2;
- (void)setComplete:(bool)arg1;
- (void)setTimerCompletionBlock:(id /* block */)arg1;
- (void)setTimerID:(id)arg1;
- (id /* block */)timerCompletionBlock;
- (id)timerID;

@end
