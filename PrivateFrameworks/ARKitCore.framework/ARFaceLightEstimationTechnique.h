
@interface ARFaceLightEstimationTechnique : ARTechnique {
    NSObject<OS_dispatch_semaphore> * _estimatingSemaphore;
    struct FacialLightEstimation { 
        struct Matrix<float, 0U, 1U, false> { 
            float *m_data; 
            unsigned long long m_capacity; 
            unsigned int m_rows; 
        } m_validSampleIntensities; 
        struct vector<int, std::allocator<int>> { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::allocator<int>> { 
                int *__value_; 
            } __end_cap_; 
        } m_validChromaSampleIDS; 
        struct vector<int, std::allocator<int>> { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::allocator<int>> { 
                int *__value_; 
            } __end_cap_; 
        } m_sampleIndices_all; 
        struct Matrix<float, 0U, 0U, false> { 
            float *m_data; 
            unsigned long long m_capacity; 
            unsigned int m_rows; 
            unsigned int m_cols; 
        } m_validRtfs; 
        struct shared_ptr<arkit::PrecomputedFaceData> { 
            struct PrecomputedFaceData {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } m_precomputedFaceData; 
        struct ExponentialSmoother<cva::Matrix<float, 9, 1>> { 
            struct optional<cva::Matrix<float, 9, 1>> { 
                union { 
                    BOOL __null_state_; 
                    struct Matrix<float, 9U, 1U, false> { 
                        float m_data[9]; 
                    } __val_; 
                } ; 
                bool __engaged_; 
            } state; 
        } m_smoother; 
        struct vector<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                unsigned long long *__value_; 
            } __end_cap_; 
        } m_inliers; 
    }  _faceLightEstimator;
    ARDirectionalLightEstimate * _lastLightEstimate;
    NSObject<OS_dispatch_queue> * _lightEstimationQueue;
    float  _lightIntensity;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    float  _shSmoothingAlpha;
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

+ (float)_computeShSmoothingAlpha:(double)arg1;
+ (struct shared_ptr<arkit::FaceTrackingData> { struct FaceTrackingData {} *x1; struct __shared_weak_count {} *x2; })_transformFaceTrackingData:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processFaceDataInBackground:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 lightIntensity:(float)arg3 timestamp:(double)arg4;
- (void)dealloc;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
