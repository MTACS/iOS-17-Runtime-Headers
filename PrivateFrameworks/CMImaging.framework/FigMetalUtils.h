
@interface FigMetalUtils : NSObject {
    <MTLDevice> * _device;
}

@property (nonatomic, readonly) <MTLDevice> *device;

- (void).cxx_destruct;
- (unsigned long long)computeLinearTextureStride:(unsigned long long)arg1 format:(unsigned long long)arg2;
- (id)device;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (id)texture2DFromBuffer:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4 offset:(unsigned long long)arg5 usage:(unsigned long long)arg6;

@end
