
@interface UNCBlueListMonitor : NSObject {
    _CDContextualKeyPath * _blueListKeyPath;
    bool  _budgetExhausted;
    <_CDContext> * _context;
    <UNCBlueListMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <UNCBlueListMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_startMonitoring;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (bool)shouldBoostOpportunisticTopicsToEnabled;

@end
