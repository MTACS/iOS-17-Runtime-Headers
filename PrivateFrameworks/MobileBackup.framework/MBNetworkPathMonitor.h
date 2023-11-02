
@interface MBNetworkPathMonitor : NSObject {
    unsigned long long  _backupOnCellularSupport;
    bool  _backupOnCellularSupportChanged;
    id /* block */  _backupOnCellularSupportUpdateHandler;
    NSObject<OS_nw_path_monitor> * _cellularPathMonitor;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _cellularPathState;
    MBCellularDataSubscriptionMonitor * _dataSubscriptionMonitor;
    NSObject<OS_dispatch_group> * _initialBackupOnCellularSupportGroup;
    NSObject<OS_dispatch_group> * _initialCellularStateGroup;
    NSObject<OS_dispatch_group> * _initialWiFiStateGroup;
    NSObject<OS_dispatch_group> * _initialWiredStateGroup;
    id /* block */  _networkPathUpdateHandler;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic bool  _started;
    NSObject<OS_nw_path_monitor> * _wifiPathMonitor;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _wifiPathState;
    NSObject<OS_nw_path_monitor> * _wiredPathMonitor;
    struct { 
        bool isMonitored; 
        bool isAvailable; 
        bool isExpensive; 
        bool isConstrained; 
    }  _wiredPathState;
}

@property (readonly) unsigned long long backupOnCellularSupport;
@property (nonatomic, copy) id /* block */ backupOnCellularSupportUpdateHandler;
@property (readonly) int cellularRadioType;
@property (retain) MBCellularDataSubscriptionMonitor *dataSubscriptionMonitor;
@property (retain) NSObject<OS_dispatch_group> *initialBackupOnCellularSupportGroup;
@property (retain) NSObject<OS_dispatch_group> *initialCellularStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialWiFiStateGroup;
@property (retain) NSObject<OS_dispatch_group> *initialWiredStateGroup;
@property (nonatomic, copy) id /* block */ networkPathUpdateHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (const char *)_pathTypeStringWithPathType:(int)arg1;

- (void).cxx_destruct;
- (void)_cancelMonitors;
- (void)_handleCellularStateChange:(struct { bool x1; bool x2; bool x3; bool x4; })arg1 backupOnCellularSupport:(unsigned long long)arg2;
- (void)_handleWiFiStateChange;
- (void)_performBlock:(id /* block */)arg1;
- (void)_startCellularMonitor;
- (void)_startWiFiMonitor;
- (bool)_updateState:(struct { bool x1; bool x2; bool x3; bool x4; }*)arg1 path:(id)arg2 pathType:(int)arg3;
- (unsigned long long)backupOnCellularSupport;
- (id /* block */)backupOnCellularSupportUpdateHandler;
- (void)cancel;
- (int)cellularRadioType;
- (id)dataSubscriptionMonitor;
- (void)dealloc;
- (void)fetchNetworkConnectivityWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initialBackupOnCellularSupportGroup;
- (id)initialCellularStateGroup;
- (id)initialWiFiStateGroup;
- (id)initialWiredStateGroup;
- (struct { bool x1; bool x2; bool x3; int x4; unsigned long long x5; })networkConnectivity;
- (id /* block */)networkPathUpdateHandler;
- (id)queue;
- (void)setBackupOnCellularSupportUpdateHandler:(id /* block */)arg1;
- (void)setDataSubscriptionMonitor:(id)arg1;
- (void)setInitialBackupOnCellularSupportGroup:(id)arg1;
- (void)setInitialCellularStateGroup:(id)arg1;
- (void)setInitialWiFiStateGroup:(id)arg1;
- (void)setInitialWiredStateGroup:(id)arg1;
- (void)setNetworkPathUpdateHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)start;

@end
