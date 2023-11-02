
@protocol BCUPurgeableImage <NSObject>

@required

- (struct CGImage { }*)CGImage;
- (double)contentsScale;
- (id)layerContents;
- (bool)markAsNonVolatile;
- (bool)markAsVolatile;
- (struct CGSize { double x1; double x2; })size;

@end
