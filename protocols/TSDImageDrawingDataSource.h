
@protocol TSDImageDrawingDataSource <NSObject>

@required

- (TSPData *)imageDrawingHelperAdjustedImageData:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperImageData:(TSDImageDrawingHelper *)arg1;
- (bool)imageDrawingHelperImageHasAlpha:(TSDImageDrawingHelper *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageDrawingHelperImageRect:(TSDImageDrawingHelper *)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperThumbnailAdjustedImageData:(TSDImageDrawingHelper *)arg1;
- (TSPData *)imageDrawingHelperThumbnailImageData:(TSDImageDrawingHelper *)arg1;

@end
