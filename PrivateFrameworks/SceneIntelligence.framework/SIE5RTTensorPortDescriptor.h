
@interface SIE5RTTensorPortDescriptor : NSObject <SIE5RTPortDescriptor> {
    struct e5rt_buffer_object { } * _buffer;
    struct e5rt_tensor_desc { } * _client_desc;
    struct e5rt_tensor_desc { } * _desc;
    bool  _isFP16_ANE;
    bool  _isFP32;
    bool  _isS8_ANE;
    bool  _isU8_ANE;
    struct __IOSurface { } * _memory_iosurface;
    struct e5rt_io_port { } * _port;
    bool  _support_zero_copy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)bindIOSurface:(struct __IOSurface { }*)arg1;
- (void)bindRawPointer:(const void*)arg1;
- (struct e5rt_tensor_desc { }*)createPackedFP32TensorDescriptor;
- (void)dealloc;
- (unsigned long long)getBatchnum;
- (unsigned long long)getBytePerRow;
- (unsigned long long)getChannels;
- (unsigned long long)getComponentSize;
- (int)getComponentType;
- (void*)getDataPtr;
- (unsigned long long)getHeight;
- (struct __IOSurface { }*)getIOSurface;
- (unsigned char)getNumComponents;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRank;
- (unsigned long long)getRowElements;
- (const unsigned long long*)getShape;
- (const long long*)getStrides;
- (unsigned long long)getWidth;
- (id)initWithE5RTPort:(struct e5rt_io_port { }*)arg1 portType:(long long)arg2;
- (bool)isFP16_ANE;
- (bool)isPacked;
- (bool)isPackedFP32;
- (bool)isS8_ANE;
- (bool)isU8_ANE;

@end
