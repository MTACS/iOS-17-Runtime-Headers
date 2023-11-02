
@interface DTKPSession : NSObject {
    <DTKPKtraceAggregator> * _aggregator;
    <DTKPConfiguration> * _config;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    unsigned char  _recordingPriority;
    unsigned int  _sessionID;
    unsigned int  _state;
}

@property (nonatomic) unsigned char recordingPriority;
@property (nonatomic, readonly) unsigned int sessionID;

+ (int)blessPid:(int)arg1;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_lockKPerf;
- (int)_unlockKperf;
- (void)dealloc;
- (id)init;
- (id)initWithConfig:(id)arg1 andAggregator:(id)arg2;
- (bool)isActive;
- (bool)isPaused;
- (bool)pause:(id*)arg1;
- (unsigned char)recordingPriority;
- (bool)resume:(id*)arg1;
- (unsigned int)sessionID;
- (void)setRecordingPriority:(unsigned char)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;
- (id)swapOutCurrentDatastream:(id*)arg1;

@end
