
@protocol SIE5RTPortDescriptor <NSObject>

@required

+ (id)new;

- (void)bindIOSurface:(struct __IOSurface { }*)arg1;
- (void)bindRawPointer:(const void*)arg1;
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
- (id)init;
- (id)initWithE5RTPort:(struct e5rt_io_port { }*)arg1 portType:(long long)arg2;

@end
