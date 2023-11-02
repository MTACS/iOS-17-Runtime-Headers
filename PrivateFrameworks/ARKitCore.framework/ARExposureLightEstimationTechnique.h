
@interface ARExposureLightEstimationTechnique : ARTechnique <ARTechniqueBusyState> {
    float  _lightIntensity;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    struct ExponentialSmoother<float> { 
        struct optional<float> { 
            union { 
                BOOL __null_state_; 
                float __val_; 
            } ; 
            bool __engaged_; 
        } state; 
    }  _smoother;
    float  _temperature;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (bool)isBusy;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
