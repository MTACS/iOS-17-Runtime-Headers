
@interface MBCellularDataSubscriptionMonitor : NSObject <CoreTelephonyClientDataDelegate> {
    unsigned long long  _backupOnCellularSupport;
    bool  _backupOnCellularSupportChanged;
    id /* block */  _backupOnCellularSupportHandler;
    int  _cellularRadioType;
    NSObject<OS_dispatch_source> * _delegateTimer;
    NSObject<OS_dispatch_queue> * _queue;
    CoreTelephonyClient * _telephonyClient;
    unsigned long long  _timeout;
}

@property unsigned long long backupOnCellularSupport;
@property (nonatomic, copy) id /* block */ backupOnCellularSupportHandler;
@property int cellularRadioType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *delegateTimer;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (retain) CoreTelephonyClient *telephonyClient;
@property (nonatomic) unsigned long long timeout;

- (void).cxx_destruct;
- (unsigned long long)_backupOnCellularSupportWithError:(id*)arg1;
- (void)_cancelDelegateTimer;
- (void)_refreshBackupOnCellularSupportWithTimeout:(unsigned long long)arg1;
- (bool)_startDelegateTimerWithTimeout:(unsigned long long)arg1;
- (unsigned long long)backupOnCellularSupport;
- (id /* block */)backupOnCellularSupportHandler;
- (void)cancel;
- (int)cellularRadioType;
- (void)currentDataSimChanged:(id)arg1;
- (void)dataSettingsChanged:(id)arg1;
- (id)delegateTimer;
- (id)initWithQueue:(id)arg1 timeout:(unsigned long long)arg2;
- (id)initWithTimeout:(unsigned long long)arg1;
- (void)internetDataStatus:(id)arg1;
- (id)queue;
- (void)setBackupOnCellularSupport:(unsigned long long)arg1;
- (void)setBackupOnCellularSupportHandler:(id /* block */)arg1;
- (void)setCellularRadioType:(int)arg1;
- (void)setDelegateTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTelephonyClient:(id)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)start;
- (id)telephonyClient;
- (unsigned long long)timeout;

@end
