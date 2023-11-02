
@interface DTGPUDataSource : NSObject {
    NSDictionary * _apsConfig;
    DTGPUCounterProfile * _collectingProfile;
    <DTGPUDataSourceDelegate> * _delegate;
    <MTLDevice> * _device;
    NSObject<OS_dispatch_source> * _dispatchTimer;
    bool  _enableCliquePositionTracing;
    bool  _enableShaderProfiler;
    bool  _isAGXDevice;
    bool  _isAPS;
    bool  _isImportAPS;
    <DTGPUPerformanceStateControl> * _perfStateControl;
    struct vector<std::vector<DTGPUCounterSampleBuffer>, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<DTGPUCounterSampleBuffer> *, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _sampleBuffers;
    unsigned long long  _sampleInterval;
    unsigned long long  _stopTime;
    NSArray * _supportedCounterProfiles;
    unsigned long long  _windowLimit;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) DTGPUCounterProfile *collectingProfile;
@property (nonatomic) <DTGPUDataSourceDelegate> *delegate;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) NSDictionary *deviceInfoDict;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) unsigned long long minSampleInterval;
@property (nonatomic, readonly) NSArray *supportedCounterProfiles;
@property (nonatomic, readonly) unsigned long long windowLimit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_queryDisplayInfoDict;
- (void)_sampleCounters;
- (id)collectingProfile;
- (id)configure:(unsigned int)arg1 interval:(unsigned long long)arg2 windowLimit:(unsigned long long)arg3;
- (id)currentConsistentGPUPerformanceState;
- (id)delegate;
- (id)device;
- (id)deviceInfoDict;
- (id)deviceName;
- (id)disableConsistentGPUPerformanceState;
- (void)enableCliquePositionTracing:(bool)arg1;
- (bool)enableConsistentGPUPerformanceState:(unsigned long long)arg1;
- (void)enableShaderProfiler:(bool)arg1;
- (void)getRemainingData:(id /* block */)arg1;
- (id)initWithImportAPSDataPath:(id)arg1 workQueue:(id)arg2;
- (id)initWithMTLDevice:(id)arg1 workQueue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minSampleInterval;
- (void)overideAPSConfig:(id)arg1;
- (void)reset;
- (bool)run;
- (void)setAPSCounterConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stop;
- (id)supportedCounterProfiles;
- (unsigned long long)timestampOfFirstSample;
- (unsigned long long)windowLimit;

@end
