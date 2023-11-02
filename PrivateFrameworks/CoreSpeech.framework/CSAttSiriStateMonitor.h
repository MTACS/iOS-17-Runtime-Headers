
@interface CSAttSiriStateMonitor : CSEventMonitor {
    unsigned long long  _attendingState;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long attendingState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (unsigned long long)attendingState;
- (unsigned long long)getAttendingState;
- (id)init;
- (bool)isAttending;
- (bool)isAttendingForDictation;
- (id)queue;
- (void)setAttendingState:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)updateState:(unsigned long long)arg1;

@end
