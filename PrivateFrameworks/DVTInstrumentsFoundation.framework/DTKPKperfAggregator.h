
@interface DTKPKperfAggregator : NSObject <DTKPKtraceAggregator> {
    id /* block */  _callback;
    unsigned long long  _callbackCalledCount;
    unsigned long long  _callbackNotificationCount;
    <DTKPConfiguration> * _config;
    unsigned long long  _dataPulledSize;
    struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { 
        struct duration<long long, std::ratio<1, 1000000000>> { 
            long long __rep_; 
        } __d_; 
    }  _endTime;
    bool  _hasUsedKperf;
    unsigned long long  _id;
    struct kperf_buf { } * _kperfBuffer;
    bool  _kperfSample;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    DVTStreamManager * _manager;
    unsigned long long  _numberOfPulls;
    struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { 
        struct duration<long long, std::ratio<1, 1000000000>> { 
            long long __rep_; 
        } __d_; 
    }  _startTime;
    DVTQueueBasedTimer * _timer;
    bool  _usingTimer;
}

@property (copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_flushDataFromKernel:(unsigned int)arg1 more:(bool*)arg2 error:(id*)arg3;
- (id)_getKernelBufferLocked:(bool*)arg1 error:(id*)arg2;
- (id)_getKperfKernelBufferLocked:(bool*)arg1 error:(id*)arg2;
- (id)_kdebugReadWithMoreLocked:(bool*)arg1 error:(id*)arg2;
- (void)_kernelCallbackError;
- (unsigned int)_kernelCallbackImpl;
- (id)_kernelCallbackInit;
- (void)_kernelCallbackNotifyCallblock:(unsigned int)arg1;
- (id)_kernelCallbackStart;
- (void)_kernelCallbackStop;
- (bool)_ktraceTeardown:(id*)arg1;
- (void)_releaseKernelResources;
- (void)_reportCallbackStats;
- (void)_reportStats;
- (void)_reportTimeStats;
- (void)_resetStats;
- (id /* block */)callback;
- (id)initWithConfig:(id)arg1;
- (id)pause;
- (id)resume;
- (void)setCallback:(id /* block */)arg1;
- (id)start;
- (id)stop;
- (id)swapOutCurrentDatastream:(id*)arg1;

@end
