
@interface ABPKMLNetworkBufferV2 : NSObject {
    unsigned long long  _batchNumber;
    void * _bytes;
    unsigned long long  _bytesPerElement;
    unsigned long long  _channels;
    int  _dataType;
    unsigned long long  _height;
    struct e5rt_buffer_object { } * _memory;
    NSString * _name;
    struct __CVBuffer { } * _pixelBuffer;
    struct e5rt_io_port { } * _port;
    unsigned long long  _sequenceLength;
    unsigned long long  _size;
    unsigned long long  _strideBatchNumber;
    unsigned long long  _strideChannels;
    unsigned long long  _strideHeight;
    unsigned long long  _strideSequenceLength;
    unsigned long long  _strideWidth;
    struct e5rt_surface_desc { } * _surfaceDesc;
    int  _surfaceFormat;
    struct e5rt_surface_object { } * _surfaceObject;
    struct e5rt_tensor_desc { } * _tensorDesc;
    bool  _useSurface;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long batchNumber;
@property (nonatomic, readonly) void*bytes;
@property (nonatomic, readonly) unsigned long long channels;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) unsigned long long sequenceLength;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) unsigned long long strideBatchNumber;
@property (nonatomic, readonly) unsigned long long strideChannels;
@property (nonatomic, readonly) unsigned long long strideHeight;
@property (nonatomic, readonly) unsigned long long strideSequenceLength;
@property (nonatomic, readonly) unsigned long long strideWidth;
@property (nonatomic, readonly) int surfaceFormat;
@property (nonatomic, readonly) unsigned long long width;

- (void).cxx_destruct;
- (bool)_readSurfaceDescriptor;
- (bool)_readTensorDescriptor;
- (unsigned long long)batchNumber;
- (void*)bytes;
- (unsigned long long)channels;
- (void)dealloc;
- (unsigned long long)height;
- (id)initWithName:(id)arg1 operation:(struct e5rt_execution_stream_operation { }*)arg2 bindMode:(long long)arg3 useSurface:(bool)arg4;
- (id)name;
- (struct __CVBuffer { }*)pixelBuffer;
- (unsigned long long)sequenceLength;
- (void)setInput:(id)arg1 FromIOSurface:(struct __IOSurface { }*)arg2;
- (unsigned long long)size;
- (unsigned long long)strideBatchNumber;
- (unsigned long long)strideChannels;
- (unsigned long long)strideHeight;
- (unsigned long long)strideSequenceLength;
- (unsigned long long)strideWidth;
- (int)surfaceFormat;
- (unsigned long long)width;

@end
