
@interface SiriAnalyticsTimePeriodBuffer : NSObject {
    double  _bufferInterval;
    NSObject<OS_dispatch_source> * _bufferTimer;
    NSMutableSet * _bufferedMessages;
    double  _leeway;
    id /* block */  _onMessagesProduced;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_startProducing;
- (void)_stopProducing;
- (void)_timerElapsed;
- (void)enqueueMessages:(id)arg1;
- (id)initWithInterval:(double)arg1 queue:(id)arg2;
- (void)onMessagesProduced:(id /* block */)arg1;

@end
