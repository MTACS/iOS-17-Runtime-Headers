
@interface CRTrackingFilter : NSObject

+ (void)filterLowQualityTranscriptRegions:(id)arg1;
+ (bool)shouldEdgeIntersectionFilterQuad:(id)arg1 originalQuad:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
+ (bool)shouldFilterHomographyWithResultQuad:(id)arg1 originalQuad:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
+ (bool)shouldStartTrackingGroup:(id)arg1;
+ (bool)shouldStartTrackingRegion:(id)arg1;

@end
