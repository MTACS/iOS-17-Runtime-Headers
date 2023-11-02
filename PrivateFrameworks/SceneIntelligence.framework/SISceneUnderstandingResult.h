
@interface SISceneUnderstandingResult : NSObject {
    struct _SITensorDim { 
        unsigned long long value[4]; 
    }  _labelTensorDimensions;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _labelsTensor;
    struct _SITensorDim { 
        unsigned long long value[4]; 
    }  _normalTensorDimensions;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _normalsTensor;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _probabilitiesTensor;
    struct _SITensorDim { 
        unsigned long long value[4]; 
    }  _probabilitiesTensorDimensions;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
}

@property (nonatomic, readonly) struct _SITensorDim { unsigned long long x1[4]; } labelTensorDimensions;
@property (nonatomic, readonly) struct _SITensorDim { unsigned long long x1[4]; } normalTensorDimensions;
@property (nonatomic, readonly) struct _SITensorDim { unsigned long long x1[4]; } probabilitiesTensorDimensions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } resolution;

+ (struct CGSize { double x1; double x2; })outputDimensions;

- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (struct _SITensorDim { unsigned long long x1[4]; })labelTensorDimensions;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)labelsTensor;
- (struct _SITensorDim { unsigned long long x1[4]; })normalTensorDimensions;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)normalsTensor;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)probabilitiesTensor;
- (struct _SITensorDim { unsigned long long x1[4]; })probabilitiesTensorDimensions;
- (struct CGSize { double x1; double x2; })resolution;
- (long long)writeLabels:(struct __CVBuffer { }*)arg1;
- (long long)writeNormals:(struct __CVBuffer { }*)arg1 orientation:(long long)arg2;
- (long long)writeProbabilities:(struct __CVBuffer { }*)arg1;

@end
