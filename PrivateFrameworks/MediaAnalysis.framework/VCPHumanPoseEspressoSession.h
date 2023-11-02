
@interface VCPHumanPoseEspressoSession : NSObject {
    void * _ctx;
    /* Warning: Unrecognized filer type: ' ' using 'void*' */ void** _heatmapNms;
    int  _height;
    bool  _loadModel;
    /* Warning: Unrecognized filer type: ' ' using 'void*' */ void** _modelOutput16bit;
    int  _modelOutputSize;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
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
    }  _outputBlob;
    void * _plan;
    int  _revision;
    int  _width;
}

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (int)keypointsFromTensor:(/* Warning: Unrecognized filer type: ' ' using 'void*' */ void**)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 channels:(unsigned long long)arg4 withOptions:(id)arg5 results:(id)arg6;
- (int)keypointsFromTensor:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 withOptions:(id)arg2 results:(id)arg3;
- (id)keypointsToObservation:(id)arg1;
- (int)processFrame:(struct __CVBuffer { }*)arg1 withOptions:(id)arg2 results:(id)arg3;
- (int)requiredInputFormat:(int*)arg1 height:(int*)arg2 format:(unsigned int*)arg3;

@end
