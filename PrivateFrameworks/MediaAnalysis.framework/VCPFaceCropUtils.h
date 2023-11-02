
@interface VCPFaceCropUtils : NSObject

+ (struct CGImageMetadata { }*)createOutputMetadataFromDictionary:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id*)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundsFromFaceCrop:(id)arg1 error:(id*)arg2;
+ (struct CGSize { double x1; double x2; })faceCropDimensionsFromFaceCrop:(id)arg1 error:(id*)arg2;
+ (id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id*)arg2;
+ (id)imageCreationOptions;
+ (bool)isValidFaceCrop:(id)arg1;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andCropRegion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andGroupingIdentifier:(id)arg3;
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource { }*)arg1 withFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 groupingIdentifier:(id)arg3 error:(id*)arg4;
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 groupingIdentifier:(id)arg3 error:(id*)arg4;
+ (id)newFaceCropFromImageURL:(id)arg1 withNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 groupingIdentifier:(id)arg3 error:(id*)arg4;

@end
