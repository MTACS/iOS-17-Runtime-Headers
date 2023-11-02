
@interface DTOSLogLoader : XRMobileAgentQueueStop {
    XRMobileAgent<DTOSLogLoaderVisitor> * _agentWaitingForEvents;
    XRMobileAgent<DTOSLogLoaderVisitor> * _agentWaitingForStop;
    NSMutableArray * _argReferenceConstants;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _beginRef;
    bool  _calledForHelp;
    DTOSLogLoaderConfiguration * _configuration;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _debugLevelRef;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _defaultLevelRef;
    <DTOSLogLoaderDelegate> * _delegate;
    OSLogEventStreamBase * _deserializedEventStream;
    bool  _deserializedEventStreamIsActivated;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _deviceSessionRef;
    bool  _didHandleRecord;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _emitRef;
    struct DTStateActionEncoder { 
        int _state; 
        struct OutputTape { 
            unsigned short *start; 
            unsigned short *head; 
            unsigned short *end; 
        } _tape; 
        char *_pushBufferStart; 
        char *_pushBufferEnd; 
        unsigned long long _pushBufferBitOffset; 
        unsigned long long _backgroundPatternStart; 
        struct StackReference { 
            unsigned short _generation; 
            unsigned short _reference; 
        } _topOfStackRef; 
        unsigned char _background; 
        int _stateWhenTapeRanOut; 
        unsigned int _pushBufferSizeToXmit; 
    }  _encoder;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _endRef;
    NSDate * _endTime;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _errorLevelRef;
    NSError * _failureReason;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _faultLevelRef;
    bool  _ignoreNextRecord;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _infoLevelRef;
    bool  _isLastBuffer;
    DTOSLogLoaderFetchTicket * _lastFetchTicket;
    unsigned long long  _lastMachTime;
    OSLogEventLiveStore * _liveEventStore;
    OSLogEventLiveStream * _liveStream;
    OSLogEventStore * _loggedEventStore;
    OSLogEventStreamBase * _loggedStream;
    unsigned int  _lostEventAccumulator;
    unsigned long long  _machTimeAdjustment;
    XRIntKeyedDictionary * _pidToExecNameMapping;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _processScopeRef;
    XRIntKeyedDictionary * _pushedProcessesByPid;
    XRIntKeyedDictionary * _pushedThreadsByTid;
    NSMutableDictionary * _repeatedPlaceholders;
    NSMutableDictionary * _repeatedStrings;
    NSMutableDictionary * _repeatedUUIDs;
    int  _rowsSent;
    bool  _running;
    unsigned long long  _slackInMachTimeUnits;
    NSDate * _startTime;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _stateChanged;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _stateLock;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _systemScopeRef;
    struct unique_ptr<DTOSLogTableLoader, std::default_delete<DTOSLogTableLoader>> { 
        struct __compressed_pair<DTOSLogTableLoader *, std::default_delete<DTOSLogTableLoader>> { 
            struct DTOSLogTableLoader {} *__value_; 
        } __ptr_; 
    }  _tableLoader;
    struct StackReference { 
        unsigned short _generation; 
        unsigned short _reference; 
    }  _threadScopeRef;
    NSMutableData * _workingBuffer;
    bool  _workingBufferCanBeReplaced;
    bool  _workingBufferFull;
}

@property (nonatomic) <DTOSLogLoaderDelegate> *delegate;
@property (nonatomic, readonly) NSError *failureReason;

+ (void)heartbeat;
+ (id)heartbeatPredicate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_escortAgentToExit:(id)arg1 withTicket:(id)arg2;
- (void)_handleRecord:(id)arg1;
- (bool)_holdReceivedAgent:(id)arg1 ticket:(id)arg2;
- (void)_performResetOnOutputStream;
- (void)_prepareAgentToExecute:(id)arg1 withTicket:(id)arg2;
- (void)_setupCommonStreamParameters:(id)arg1;
- (void)_setupLiveStream:(id)arg1;
- (id)_setupLoggedStreamForNextChunk:(id)arg1;
- (id)_stackReferenceForRepeatedString:(id)arg1;
- (id)_stackReferenceForRepeatedUUID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)failureReason;
- (id)init;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (id)ticketToFetchData:(id)arg1 window:(double)arg2;
- (id)ticketToPrepare:(id)arg1 configuration:(id)arg2;
- (id)ticketToStartStream:(id)arg1;
- (id)ticketToStopStream:(id)arg1;

@end
