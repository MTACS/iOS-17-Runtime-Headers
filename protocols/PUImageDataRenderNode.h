
@protocol PUImageDataRenderNode <PUImageDataNode>

@required

- (struct CGSize { double x1; double x2; })baseImageSize;
- (struct CGSize { double x1; double x2; })renderedImageSize;

@end
