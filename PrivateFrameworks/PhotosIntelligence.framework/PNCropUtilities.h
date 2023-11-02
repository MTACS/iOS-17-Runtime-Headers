
@interface PNCropUtilities : NSObject

+ (id)cropVariantsForAsset:(id)arg1 faces:(id)arg2;
+ (id)cropVariantsForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 faces:(id)arg3;
+ (id)cropVariantsFromSignalsWithCropTypes:(id)arg1 aspectRatio:(double)arg2 sourcePixelWidth:(long long)arg3 sourcePixelHeight:(long long)arg4 acceptableCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 preferredCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 faceAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 objectSaliencyRects:(id)arg8 gazeAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg9 isDenormalized:(bool)arg10;
+ (id)stringForCropVariantType:(long long)arg1;

- (id)init;

@end
