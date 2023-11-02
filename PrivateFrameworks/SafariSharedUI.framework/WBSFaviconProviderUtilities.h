
@interface WBSFaviconProviderUtilities : NSObject

+ (long long)computeRelativeSize:(struct CGSize { double x1; double x2; })arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)imageWithURL:(id)arg1 closetToPreferredSize:(struct CGSize { double x1; double x2; })arg2;
+ (bool)isFaviconSize:(struct CGSize { double x1; double x2; })arg1 morePreferrableThanFaviconSize:(struct CGSize { double x1; double x2; })arg2 givenDesiredSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)multiResolutionImageFromImageData:(id)arg1 withPreferredSize:(struct CGSize { double x1; double x2; })arg2 atScales:(id)arg3 didGenerateResolutions:(bool*)arg4;
+ (struct CGSize { double x1; double x2; })sizeOfImageWithData:(id)arg1 closestToPreferredSize:(struct CGSize { double x1; double x2; })arg2 isMultiResolution:(bool*)arg3;

@end
