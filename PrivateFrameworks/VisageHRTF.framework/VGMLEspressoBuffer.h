
@interface VGMLEspressoBuffer : NSObject {
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
    }  _buffer;
    unsigned long long  _dimensions;
    NSString * _layerName;
    int  _mode;
    struct { void *x1; int x2; } * _network;
}

- (void).cxx_destruct;
- (bool)bindIOSurface:(id)arg1;
- (bool)bindImage:(struct __CVBuffer { }*)arg1;
- (bool)bindManagedBuffer;
- (bool)bindTensor:(id)arg1;
- (bool)checkBufferAndIOSurfaceConsistency:(id)arg1;
- (bool)copyBufferIntoIOSurface:(id)arg1;
- (const void*)getData;
- (const unsigned long long*)getDimensions;
- (unsigned long long)getSize;
- (id)initWithNetwork:(struct { void *x1; int x2; }*)arg1 withLayerName:(id)arg2 withMode:(int)arg3;

@end
