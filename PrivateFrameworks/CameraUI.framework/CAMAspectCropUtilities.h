
@interface CAMAspectCropUtilities : NSObject

+ (id)cropFilterForAspectRatio:(long long)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForAspectRatio:(long long)arg1 inImageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGSize { double x1; double x2; })finalExpectedSizeWithCaptureDimensions:(struct { int x1; int x2; })arg1 orientation:(int)arg2 aspectRatio:(long long)arg3;
+ (struct CGSize { double x1; double x2; })finalExpectedSizeWithPhotoMetadata:(id)arg1 aspectRatio:(long long)arg2;

@end
