
@interface CAMTimerCache : NSObject {
    NSMutableDictionary * __timersByType;
    <CAMTimerCacheDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableDictionary *_timersByType;
@property (nonatomic) <CAMTimerCacheDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleTimer:(id)arg1 forKey:(id)arg2;
- (id)_timersByType;
- (void)cancelAllTimers;
- (void)cancelTimerForKey:(id)arg1;
- (id)delegate;
- (id)init;
- (bool)isRunningTimerForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startTimerForKey:(id)arg1 duration:(double)arg2;

@end
