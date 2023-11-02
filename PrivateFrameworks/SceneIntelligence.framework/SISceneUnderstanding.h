
@interface SISceneUnderstanding : NSObject {
    void * _context;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    struct networkparams_t { 
        struct inputparams_t { 
            struct { 
                float bias_r; 
                float bias_g; 
                float bias_b; 
                float scale; 
                bool network_wants_bgr; 
            } preprocessor; 
            struct CGSize { 
                double width; 
                double height; 
            } resolution; 
        } input; 
        struct outputparams_t { 
            struct CGSize { 
                double width; 
                double height; 
            } resolution; 
        } output; 
        struct vImage_Buffer { 
            void *data; 
            unsigned long long height; 
            unsigned long long width; 
            unsigned long long rowBytes; 
        } temp; 
    }  _parameters;
    void * _plan;
    struct networkvariables_t { 
        struct outputvariables_t { 
            struct _SITensorDim { 
                unsigned long long value[4]; 
            } labels; 
            struct _SITensorDim { 
                unsigned long long value[4]; 
            } normals; 
            struct _SITensorDim { 
                unsigned long long value[4]; 
            } propabilities; 
        } output; 
    }  _variables;
}

@property (nonatomic, readonly) struct _SITensorDim { unsigned long long x1[4]; } labelTensorDimensions;
@property (nonatomic, readonly) struct _SITensorDim { unsigned long long x1[4]; } normalTensorDimensions;
@property (nonatomic, readonly) struct _SITensorDim { unsigned long long x1[4]; } probabilitiesTensorDimensions;

+ (struct CGSize { double x1; double x2; })inputResolution;

- (void)dealloc;
- (long long)evaluateImage:(struct __CVBuffer { }*)arg1 results:(id)arg2;
- (bool)initMLNetworkWithComputeEngine:(long long)arg1;
- (id)initWithComputeEngine:(long long)arg1;
- (struct _SITensorDim { unsigned long long x1[4]; })labelTensorDimensions;
- (struct _SITensorDim { unsigned long long x1[4]; })normalTensorDimensions;
- (struct _SITensorDim { unsigned long long x1[4]; })probabilitiesTensorDimensions;

@end
