
@interface VCConnectionHealthMonitor : NSObject {
    struct ConnectionStats { 
        unsigned char totalPacketsReceived; 
        unsigned char connectionStats[2]; 
        unsigned char currentIndex; 
        double startTime; 
    }  _currentReceivingStats;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _firstPacketReceived;
    unsigned char  _lastReportedIndex;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _peerStateRWLock;
    struct ConnectionStatsHistory { 
        unsigned char latestConnectionStatsIndex; 
        unsigned char totalPacketsReceived[5]; 
        unsigned char connectionStats[2][5]; 
        unsigned char connectionStatsRatio[2][5]; 
    }  _peerStatsHistory;
    double  _primaryConnHealthAllowedDelay;
    struct ConnectionStatsSequenceNumberData { 
        unsigned short seqNumber; 
        double receivedTimestamp; 
    }  _secondaryConnReceivedSequenceNumberStats;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _stateRWLock;
    struct ConnectionStatsHistory { 
        unsigned char latestConnectionStatsIndex; 
        unsigned char totalPacketsReceived[5]; 
        unsigned char connectionStats[2][5]; 
        unsigned char connectionStatsRatio[2][5]; 
    }  _statsHistory;
    struct ConnectionStats { 
        unsigned char totalPacketsReceived; 
        unsigned char connectionStats[2]; 
        unsigned char currentIndex; 
        double startTime; 
    }  _tempReceivingStats;
    bool  _usingServerBasedLinks;
}

@property <VCConnectionHealthMonitorDelegate> *delegate;
@property double primaryConnHealthAllowedDelay;
@property bool usingServerBasedLinks;

- (void)dealloc;
- (id)delegate;
- (unsigned int)generateStatsBlob;
- (id)init;
- (double)primaryConnHealthAllowedDelay;
- (void)processPeerStatsBlob:(unsigned int)arg1;
- (void)resetConnectionStats:(bool)arg1;
- (void)resetHistory:(struct ConnectionStatsHistory { unsigned char x1; unsigned char x2[5]; unsigned char x3[2][5]; unsigned char x4[2][5]; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrimaryConnHealthAllowedDelay:(double)arg1;
- (void)setUsingServerBasedLinks:(bool)arg1;
- (bool)usingServerBasedLinks;

@end
