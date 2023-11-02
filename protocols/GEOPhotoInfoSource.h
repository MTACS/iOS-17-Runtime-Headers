
@protocol GEOPhotoInfoSource <NSObject>

@required

- (<GEOMapItemPhotoInfo> *)bestPhotoForSize:(struct CGSize { double x1; double x2; })arg1 options:(GEOMapItemPhotoOptions *)arg2;
- (<GEOMapItemPhotoInfo> *)largestPhoto;
- (double)sizeRatio;

@end
