
@interface PowerUISleepWakeMonitor : NSObject {
    unsigned long long  _checkpoint;
    <_CDUserContext> * _context;
    NSDate * _desktopTransitionEvaluationDate;
    bool  _enabled;
    NSObject<OS_os_log> * _log;
    PowerUISmartChargeManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long checkpoint;
@property (nonatomic, retain) <_CDUserContext> *context;
@property (nonatomic, retain) NSDate *desktopTransitionEvaluationDate;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) PowerUISmartChargeManager *manager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (unsigned long long)checkpoint;
- (id)context;
- (id)desktopTransitionEvaluationDate;
- (bool)enabled;
- (id)initWithManager:(id)arg1 withCheckpoint:(unsigned long long)arg2 withLastDesktopCheck:(id)arg3;
- (id)log;
- (id)manager;
- (id)queue;
- (void)setCheckpoint:(unsigned long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDesktopTransitionEvaluationDate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setQueue:(id)arg1;

@end
