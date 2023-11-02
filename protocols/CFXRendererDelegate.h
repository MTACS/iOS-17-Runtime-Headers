
@protocol CFXRendererDelegate <NSObject>

@required

- (void)renderer:(CFXRenderer *)arg1 didPrepareToRenderFrameAtPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)renderer:(CFXRenderer *)arg1 didRenderFrame:(CFXFrame *)arg2;

@end
