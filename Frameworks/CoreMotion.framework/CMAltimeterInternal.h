
@interface CMAltimeterInternal : NSObject {
    id /* block */  fAbsoluteAltitudeClientHandler;
    NSOperationQueue * fAbsoluteAltitudeClientQueue;
    NSObject<OS_dispatch_queue> * fAppQueue;
    float  fBarometricBaseAltitude;
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    }  fBaseAltimeterSample;
    bool  fBaselineReceived;
    double  fElevationAscendedOffset;
    double  fElevationDescendedOffset;
    double  fFilteredElevationOffset;
    struct Dispatcher { int (**x1)(); id x2; } * fFilteredPressureDispatcher;
    id /* block */  fHandler;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
    float  fMostRecentFilteredPressure;
    struct deque<float, std::allocator<float>> { 
        struct __split_buffer<float *, std::allocator<float *>> { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::allocator<float *>> { 
                float **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<float>> { 
            unsigned long long __value_; 
        } __size_; 
    }  fPressureSamples;
    id /* block */  fRelativeAltimeterHandler;
    NSOperationQueue * fRelativeAltimeterQueue;
    id /* block */  fSignificantElevationSampleHandler;
    bool  fStopRelativeAltitudeUpdates;
    bool  fStopSignificantElevationUpdates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_handleAbsoluteAltitudeUpdate:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)_pauseAbsoluteAltitudeUpdates;
- (void)_queryElevationProfileFromDate:(id)arg1 toDate:(id)arg2 withBatchSize:(unsigned long long)arg3 fromRecordId:(int)arg4 withHandler:(id /* block */)arg5;
- (void)_queryElevationProfileFromDate:(id)arg1 toDate:(id)arg2 withBatchSize:(unsigned long long)arg3 withHandler:(id /* block */)arg4;
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_releaseHandlerObjects;
- (void)_resumeAbsoluteAltitudeUpdates;
- (void)_startAbsoluteAltitudeUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)_startElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_startRelativeAltitudeUpdates;
- (void)_startSignificantElevationUpdatesWithHandler:(id /* block */)arg1;
- (void)_stopAbsoluteAltitudeUpdates;
- (void)_stopElevationUpdates;
- (void)_stopRelativeAltitudeUpdates;
- (void)_stopSignificantElevationUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
