
@interface NUNAegirOffscreen : NSObject {
    int  _height;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    int  _width;
}

@property (nonatomic) int height;
@property (nonatomic, retain) MTLRenderPassDescriptor *renderPassDescriptor;
@property (nonatomic, retain) <MTLTexture> *texture0;
@property (nonatomic, retain) <MTLTexture> *texture1;
@property (nonatomic) int width;

- (void).cxx_destruct;
- (int)height;
- (id)initWithDevice:(id)arg1 width:(int)arg2 height:(int)arg3 pixelFormat0:(unsigned long long)arg4 pixelFormat1:(unsigned long long)arg5 mipmaps:(int)arg6 loadAction:(unsigned long long)arg7 clearColor0:(struct { double x1; double x2; double x3; double x4; })arg8 clearColor1:(struct { double x1; double x2; double x3; double x4; })arg9;
- (id)initWithDevice:(id)arg1 width:(int)arg2 height:(int)arg3 texture0:(id)arg4 texture1:(id)arg5 loadAction:(unsigned long long)arg6 clearColor0:(struct { double x1; double x2; double x3; double x4; })arg7 clearColor1:(struct { double x1; double x2; double x3; double x4; })arg8;
- (id)renderPassDescriptor;
- (void)setHeight:(int)arg1;
- (void)setRenderPassDescriptor:(id)arg1;
- (void)setTexture0:(id)arg1;
- (void)setTexture1:(id)arg1;
- (void)setWidth:(int)arg1;
- (id)texture0;
- (id)texture1;
- (int)width;

@end
