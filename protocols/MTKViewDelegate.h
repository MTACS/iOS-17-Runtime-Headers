
@protocol MTKViewDelegate <NSObject>

@required

- (void)drawInMTKView:(MTKView *)arg1;
- (void)mtkView:(MTKView *)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;

@end
