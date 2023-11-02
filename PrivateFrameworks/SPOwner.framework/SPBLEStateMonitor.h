
@interface SPBLEStateMonitor : NSObject <CBCentralManagerDelegate> {
    unsigned long long  _bleState;
    CBCentralManager * _centralManager;
    <SPBLEStateMonitorDelegate> * _delegate;
}

@property (nonatomic) unsigned long long bleState;
@property (nonatomic, retain) CBCentralManager *centralManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPBLEStateMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)bleState;
- (id)centralManager;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)delegate;
- (id)init;
- (void)notifyDelegate:(unsigned long long)arg1;
- (void)setBleState:(unsigned long long)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startMonitoring;

@end
