
@protocol TSTStrokeLayerStrokeAndRange <NSObject>

@required

- (int)order;
- (struct TSTSimpleRange { long long x1; unsigned long long x2; })range;
- (TSDStroke *)stroke;

@end
