
@interface VNTrackMaskDetectorState : NSObject {
    float  _confidence;
    bool  _firstFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameUpdateSpacing;
    struct __CVBuffer { } * _inititalMask;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastProcessedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastUpdatePTS;
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
    }  hiddenMaskBuffer;
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
    }  keyBuffer;
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
    }  outputMaskBuffer;
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
    }  valueBuffer;
}

@property float confidence;
@property bool firstFrame;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameUpdateSpacing;
@property (readonly) struct __CVBuffer { }*inititalMask;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastProcessedPTS;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastUpdatePTS;

- (float)confidence;
- (void)dealloc;
- (bool)firstFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameUpdateSpacing;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)getHiddenMaskBuffer;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)getKeyBuffer;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)getOutputMaskBuffer;
- (struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)getValueBuffer;
- (id)init;
- (id)initWithFrameUpdateSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 mask:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)inititalMask;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastProcessedPTS;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastUpdatePTS;
- (void)setConfidence:(float)arg1;
- (void)setFirstFrame:(bool)arg1;
- (void)setLastProcessedPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastUpdatePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
