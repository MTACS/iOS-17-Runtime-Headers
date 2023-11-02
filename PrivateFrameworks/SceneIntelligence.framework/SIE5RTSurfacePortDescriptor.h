
@interface SIE5RTSurfacePortDescriptor : NSObject <SIE5RTPortDescriptor> {
    struct e5rt_surface_desc { } * _desc;
    int  _format;
    unsigned long long  _height;
    struct e5rt_io_port { } * _port;
    unsigned long long  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)bindIOSurface:(struct __IOSurface { }*)arg1;
- (void)bindRawPointer:(const void*)arg1;
- (void)dealloc;
- (unsigned long long)getBatchnum;
- (unsigned long long)getBytePerRow;
- (unsigned long long)getChannels;
- (unsigned long long)getComponentSize;
- (void*)getDataPtr;
- (unsigned long long)getHeight;
- (struct __IOSurface { }*)getIOSurface;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRank;
- (unsigned long long)getRowElements;
- (const unsigned long long*)getShape;
- (unsigned long long)getWidth;
- (id)initWithE5RTPort:(struct e5rt_io_port { }*)arg1 portType:(long long)arg2;

@end
