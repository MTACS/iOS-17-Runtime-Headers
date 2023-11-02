
@interface BSEventQueueLock : NSObject {
    BSEventQueue * _eventQueue;
    NSString * _reason;
    bool  _relinquished;
}

@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithEventQueue:(id)arg1 reason:(id)arg2;
- (id)reason;
- (void)relinquish;

@end
