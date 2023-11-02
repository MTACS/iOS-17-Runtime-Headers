
@interface CBFrameStats : NSObject {
    NSMutableArray * _frameArray;
    bool  _frameInfoLoggingEnabled;
    float  _lastFrameAPCE;
    NSObject<OS_os_log> * _logHandle;
    double  _movingAverageDuration;
    struct PeakAPCE { 
        float current; 
        float cap; 
        float timeTaperConstant; 
        float windowSize; 
        float windowStart; 
        NSObject<OS_dispatch_source> *recoveryTimer; 
        float recoveryMultiplier; 
        float recoveryWindowSize; 
    }  _peakAPCE;
    float  _previousFramePresentationTime;
    NSObject<OS_dispatch_queue> * _queue;
    struct RTPLCCapApplied { 
        bool previous; 
        float count; 
        float triggerCount; 
    }  _rtplcCapApplied;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _rtplcFrameDelayedAPCETable;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _rtplcFrameDelayedNitsTable;
    float  _scaleFactor;
    CAWindowServerDisplay * _windowServerDisplay;
}

@property double movingAverageDuration;
@property (readonly) float scaleFactor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enableFrameInfoLogging:(bool)arg1;
- (float)getMovingAverage;
- (float)getPeakAPCE;
- (float)getPeakAPCECap;
- (id)initWithQueue:(id)arg1;
- (void)initialiseWindowServerDisplay;
- (double)movingAverageDuration;
- (void)processFrameInfo:(struct { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; bool x8; bool x9; bool x10; float x11; float x12; float x13; unsigned long long x14; unsigned int x15; })arg1;
- (float)scaleFactor;
- (void)setMovingAverageDuration:(double)arg1;
- (bool)shouldPop;
- (void)startMonitoring:(id /* block */)arg1;
- (void)stopMonitoring;

@end
