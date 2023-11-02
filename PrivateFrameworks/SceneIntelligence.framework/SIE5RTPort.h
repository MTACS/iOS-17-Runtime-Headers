
@interface SIE5RTPort : NSObject {
    <SIE5RTPortDescriptor> * _desc;
    NSString * _name;
    struct e5rt_io_port { } * _port;
    long long  _portType;
}

@property (readonly) struct e5rt_io_port { }*port;

- (void).cxx_destruct;
- (void)bindIOSurface:(struct __IOSurface { }*)arg1;
- (void)bindPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)bindRawPointer:(const void*)arg1;
- (unsigned long long)getBatchnum;
- (unsigned long long)getBytePerRow;
- (unsigned long long)getChannels;
- (unsigned long long)getComponentSize;
- (void*)getDataPtr;
- (unsigned long long)getHeight;
- (struct __IOSurface { }*)getIOSurface;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (const unsigned long long*)getShape;
- (unsigned long long)getWidth;
- (id)initPortWithE5RTStreamOperation:(struct e5rt_execution_stream_operation { }*)arg1 blobName:(id)arg2 portType:(long long)arg3;
- (struct e5rt_io_port { }*)port;

@end
