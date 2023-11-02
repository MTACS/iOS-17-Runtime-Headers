
@interface PXPeopleSocialGroupViewGenerator : NSObject

+ (id)_faceCropFetchOptionsForSocialGroup:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
+ (void)_layoutAvatarViews:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (unsigned long long)_numberOfFacesToShowForSocialGroup:(id)arg1;
+ (id)generateViewForSocialGroup:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
+ (id)indexesThatNeedPortraitCropsForNumberOfFaces:(unsigned long long)arg1;
+ (void)prefetchForSocialGroup:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
+ (void)resizeThumbnailSizeForSocialGroupView:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;

@end
