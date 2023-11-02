
@interface VUIJSFoundation : NSObject {
    VUIAppContext * _appContext;
    NSMutableDictionary * _dateFormatterCache;
    NSMutableDictionary * _jsTimers;
}

@property (nonatomic) VUIAppContext *appContext;
@property (nonatomic, retain) NSMutableDictionary *dateFormatterCache;
@property (nonatomic, retain) NSMutableDictionary *jsTimers;

- (void).cxx_destruct;
- (void)_clearTimer:(id)arg1;
- (void)_jsTimerFired:(id)arg1;
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(bool)arg3;
- (id)appContext;
- (void)clearInterval:(id)arg1;
- (void)clearTimeout:(id)arg1;
- (id)dateFormatterCache;
- (id)initWithAppContext:(id)arg1;
- (id)jsTimers;
- (void)setAppContext:(id)arg1;
- (void)setDateFormatterCache:(id)arg1;
- (id)setInterval:(id)arg1 time:(long long)arg2;
- (void)setJsTimers:(id)arg1;
- (id)setTimeout:(id)arg1 time:(long long)arg2;
- (void)stopTimers;

@end
