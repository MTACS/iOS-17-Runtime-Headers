
@interface VCPFaceUtils : NSObject

+ (id)_firstLocallyAvailableResourceFromResources:(id)arg1;
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)_vnFaceAttributeEthnicityToPHFaceEthnicityType;
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;
+ (id)_vnFaceAttributeFacialHairToPHFaceExpressionType;
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (id)_vnFaceAttributeHairTypeToPHFaceHairType;
+ (id)_vnFaceAttributeHeadGearToPHFaceHeadGearType;
+ (id)_vnFaceAttributePoseToPHFacePoseType;
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+ (id)_vnFaceAttributeSkintoneToPHFaceSkintoneType;
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (id)_vnFaceGazeDirectionToPHFaceGazeType;
+ (void)assignPropertiesOfVCPPhotosFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;
+ (int)configureVNRequest:(id*)arg1 withClass:(Class)arg2 andProcessingVersion:(int)arg3;
+ (int)configureVNRequest:(id*)arg1 withClass:(Class)arg2 andVisionRevision:(unsigned long long)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectFromNormalizedCenterX:(double)arg1 normalizedCenterY:(double)arg2 normalizedSize:(double)arg3 sourceWidth:(double)arg4 sourceHeight:(double)arg5;
+ (id)imageCreationOptions;
+ (id)mad_PHFaceGazeTypeDescription:(unsigned short)arg1;
+ (unsigned short)mad_PHValueFromVNAgeCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNEthnicityCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNExpressionCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNEyesCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNFaceGazeDirection:(long long)arg1;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryV2Label:(id)arg1;
+ (unsigned short)mad_PHValueFromVNGlassesCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNHairColorCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNHeadgearCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNPoseCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNSexCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNSkintoneCategoryLabel:(id)arg1;
+ (unsigned short)mad_PHValueFromVNSmilingCategoryLabel:(id)arg1;
+ (id)mad_VNFaceGazeDirectionDescription:(long long)arg1;
+ (id)phFaceFromVCPPhotosFace:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFacesFromVCPPhotosFaces:(id)arg1 withFetchOptions:(id)arg2;
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)arg1;
+ (id)resourceForFaceProcessing:(id)arg1 allowStreaming:(bool)arg2;
+ (id)resourceForFaceProcessingWithAsset:(id)arg1 allowStreaming:(bool)arg2;

@end
