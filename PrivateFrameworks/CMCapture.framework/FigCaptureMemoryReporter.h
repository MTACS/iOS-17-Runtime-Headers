
@interface FigCaptureMemoryReporter : NSObject {
    bool  _activeClientsIncludeCamera;
    bool  _activeClientsIncludeCameraMessagesApp;
    bool  _alwaysGenerateLog;
    bool  _alwaysGenerateMemGraph;
    bool  _alwaysListTransactions;
    bool  _anyLoggingEnabled;
    unsigned long long  _currentFootprint;
    unsigned long long  _highFrequencyMilliseconds;
    unsigned int  _hostPort;
    unsigned int  _listTransactionsFootprintLowerKb;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    unsigned long long  _lowFrequencyMilliSeconds;
    unsigned int  _memGraphFootprintLowerKb;
    NSObject<OS_dispatch_source> * _memgraphCoolDownTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _memgraphLock;
    BWMemoryPool * _memoryPool;
    NSObject<OS_dispatch_queue> * _memoryReporterDispatchQueue;
    NSObject<OS_dispatch_source> * _memoryReporterTimer;
    int  _my_pid;
    int  _numActiveClients;
    unsigned long long  _pageSize;
    unsigned long long  _peakFootprint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _peakFootprintLock;
    unsigned int  _reportFootprintLowerBandkB;
    unsigned int  _reportFootprintUpperBandkB;
    unsigned int  _reportWiredLowerBandkB;
    unsigned int  _reportWiredUpperBandkB;
    unsigned long long  _sessionStartFootprint;
    bool  _stateChangedSinceLastReport;
}

@property (readonly) unsigned long long currentFootprint;

+ (id)sharedInstance;

- (unsigned long long)currentFootprint;
- (void)dealloc;
- (void)decrementActiveClientCount:(bool)arg1 clientIsCameraMessagesApp:(bool)arg2;
- (unsigned long long)footprintDeltaSinceActiveClientStart;
- (void)incrementActiveClientCount:(bool)arg1 clientIsCameraMessagesApp:(bool)arg2 withMemoryPool:(id)arg3;
- (id)init;
- (void)resetPeakFootprint;

@end
