
@interface AVCStatisticsCollector : NSObject {
    VCRateControlBandwidthEstimatorMap * _bandwidthEstimatorMap;
    struct __CFAllocator { } * _changeHandlerRequestAllocator;
    struct tagAVCStatisticsCollectorChangedHandlerRequest { 
        struct tagAVCStatisticsCollectorChangedHandlerRequest {} *next; 
        struct tagAVCStatisticsCollectorChangedHandlerRequest {} *prev; 
        int requestType; 
        int handlerType; 
        struct tagAVCStatisticsCollectorChangeHandlerEntry {} *entry; 
    }  _changeHandlerRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changeHandlerRequestsLock;
    unsigned int  _estimatedBandwidthCap;
    unsigned int  _expectedBitrate;
    bool  _fastSuddenBandwidthDetectionEnabled;
    unsigned int  _feedbackOutOfOrderTotalCount;
    int  _forceQueueWaitTimeMs;
    VCStatisticsHistory * _history;
    bool  _isStarted;
    unsigned int  _maxAudioLocalBurstyLoss;
    unsigned int  _maxVideoLocalBurstyLoss;
    unsigned char  _mediaControlInfoFECFeedbackVersion;
    unsigned int  _mode;
    unsigned int  _nextChangeHandlerIdentifier;
    VCRateControlOWRDEstimator * _owrdEstimator;
    double  _packetReceivedOWRD;
    double  _previousProcessTime;
    VCStatisticsCollectorQueue * _queue;
    unsigned int  _radioAccessTechnology;
    unsigned int  _remotePacketReceivedAudio;
    unsigned int  _remotePacketReceivedVideo;
    bool  _resetRemoteAudioPacketReceived;
    VCRateControlServerBag * _serverBag;
    unsigned int  _sharedEstimatedBandwidth;
    unsigned int  _sharedEstimatedBandwidthUncapped;
    unsigned int  _sharedRemoteEstimatedBandwidth;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _startMutex;
    struct __CFAllocator { } * _statisticsChangeHandlerEntryAllocator;
    struct _VCSingleLinkedList { 
        struct _VCSingleLinkedListEntry {} *head; 
        bool initialized; 
        int (*compare)(); 
        unsigned long long countEntries; 
    }  _statisticsChangeHandlers;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _statisticsChangeHandlersLock;
    struct tagVCStatisticsCollection { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; double x_1_1_13; double x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; double x_1_1_17; unsigned int x_1_1_18; bool x_1_1_19; struct { int x_20_2_1; unsigned int x_20_2_2; unsigned int x_20_2_3; unsigned int x_20_2_4; double x_20_2_5; double x_20_2_6; double x_20_2_7; unsigned int x_20_2_8; unsigned int x_20_2_9; } x_1_1_20; struct { unsigned short x_21_2_1; bool x_21_2_2; bool x_21_2_3; unsigned int x_21_2_4; } x_1_1_21; struct tagVCStatisticsECNStats { unsigned short x_22_2_1; unsigned short x_22_2_2; } x_1_1_22; struct tagVCStatisticsECNStats { unsigned short x_23_2_1; unsigned short x_23_2_2; } x_1_1_23; bool x_1_1_24; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned long long x_2_1_9; unsigned int x_2_1_10; } x2; } * _statisticsCollection;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _statisticsCollectionLock;
    bool  _useExternalThread;
}

@property (nonatomic) unsigned int estimatedBandwidthCap;
@property (nonatomic) unsigned int expectedBitrate;
@property (nonatomic, readonly) bool fastSuddenBandwidthDetectionEnabled;
@property (nonatomic, readonly) bool isStarted;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, retain) VCRateControlServerBag *serverBag;
@property (nonatomic, readonly) unsigned int sharedEstimatedBandwidth;
@property (nonatomic, readonly) unsigned int sharedEstimatedBandwidthUncapped;
@property (nonatomic, readonly) unsigned int sharedRemoteEstimatedBandwidth;

- (void)dealloc;
- (unsigned int)estimatedBandwidthCap;
- (unsigned int)expectedBitrate;
- (bool)fastSuddenBandwidthDetectionEnabled;
- (id)getStatistics:(id)arg1;
- (struct tagVCStatisticsMessage { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; struct tagVCStatisticsECNStats { unsigned short x_22_3_1; unsigned short x_22_3_2; } x_2_2_22; struct tagVCStatisticsECNStats { unsigned short x_23_3_1; unsigned short x_23_3_2; } x_2_2_23; bool x_2_2_24; } x_8_1_2; } x8; })getVCStatisticsWithType:(int)arg1 time:(double)arg2;
- (id)init;
- (id)initForSimulation:(bool)arg1 useExternalThread:(bool)arg2;
- (bool)isStarted;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (unsigned int)mode;
- (unsigned int)radioAccessTechnology;
- (int)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(id /* block */)arg2;
- (id)serverBag;
- (void)setEstimatedBandwidthCap:(unsigned int)arg1;
- (void)setExpectedBitrate:(unsigned int)arg1;
- (void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)setServerBag:(id)arg1;
- (void)setStatistics:(id)arg1;
- (unsigned int)sharedEstimatedBandwidth;
- (unsigned int)sharedEstimatedBandwidthUncapped;
- (unsigned int)sharedRemoteEstimatedBandwidth;
- (bool)shouldProcessAtTime:(double)arg1;
- (void)start;
- (void)stop;
- (void)unregisterAllStatisticsChangeHandlers;
- (bool)unregisterStatisticsChangeHandlerWithType:(int)arg1 handlerIndex:(int)arg2;

@end
