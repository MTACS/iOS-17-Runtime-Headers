
@interface IATextInputActionsServer : NSObject {
    IATextInputActionsAccumulator * _accumulator;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableOrderedSet * _recentActions;
    <IAServerAnalyticsDelegate> * _serverDelegate;
}

@property (nonatomic, retain) IATextInputActionsAccumulator *accumulator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableOrderedSet *recentActions;
@property (nonatomic) <IAServerAnalyticsDelegate> *serverDelegate;

- (void).cxx_destruct;
- (id)accumulator;
- (void)consumeAction:(id)arg1;
- (void)dispatchEventToCoreAnalytics;
- (void)enumerateTextInputActionsAnalytics:(id /* block */)arg1;
- (id)init;
- (id)initWithEventHandler:(id /* block */)arg1;
- (void)q_flushRecentActions;
- (id)queue;
- (id)recentActions;
- (id)serverDelegate;
- (void)setAccumulator:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecentActions:(id)arg1;
- (void)setServerDelegate:(id)arg1;

@end
