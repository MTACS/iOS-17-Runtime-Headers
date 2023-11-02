
@interface DEDCompressionDebouncer : NSObject {
    bool  _finished;
    double  _interval;
    unsigned long long  _lastKnownCompressedBytes;
    unsigned long long  _lastKnownTotalBytes;
    unsigned long long  _lastSentCompressedBytes;
    unsigned long long  _lastSentTotalBytes;
    double  _lastTriggerTime;
    id /* block */  _trigger;
}

@property (nonatomic) bool finished;
@property (nonatomic) double interval;
@property (nonatomic) unsigned long long lastKnownCompressedBytes;
@property (nonatomic) unsigned long long lastKnownTotalBytes;
@property (nonatomic) unsigned long long lastSentCompressedBytes;
@property (nonatomic) unsigned long long lastSentTotalBytes;
@property (nonatomic) double lastTriggerTime;
@property (nonatomic, copy) id /* block */ trigger;

- (void).cxx_destruct;
- (bool)finished;
- (id /* block */)handler;
- (id)initWithTrigger:(id /* block */)arg1 interval:(double)arg2;
- (double)interval;
- (unsigned long long)lastKnownCompressedBytes;
- (unsigned long long)lastKnownTotalBytes;
- (unsigned long long)lastSentCompressedBytes;
- (unsigned long long)lastSentTotalBytes;
- (double)lastTriggerTime;
- (void)sendTriggerIfStateChanged;
- (void)sendTriggerIfTimeElapsed;
- (void)setFinished:(bool)arg1;
- (void)setInterval:(double)arg1;
- (void)setLastKnownCompressedBytes:(unsigned long long)arg1;
- (void)setLastKnownTotalBytes:(unsigned long long)arg1;
- (void)setLastSentCompressedBytes:(unsigned long long)arg1;
- (void)setLastSentTotalBytes:(unsigned long long)arg1;
- (void)setLastTriggerTime:(double)arg1;
- (void)setTrigger:(id /* block */)arg1;
- (id /* block */)trigger;

@end
