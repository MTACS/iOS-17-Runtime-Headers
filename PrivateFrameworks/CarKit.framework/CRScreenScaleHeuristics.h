
@interface CRScreenScaleHeuristics : NSObject

+ (double)getPrimaryDisplayScale:(struct CGSize { double x1; double x2; })arg1 viewAreas:(id)arg2;
+ (double)getSecondaryDisplayScale:(struct CGSize { double x1; double x2; })arg1 physicalSize:(struct CGSize { double x1; double x2; })arg2;
+ (void)scaledDisplays:(id)arg1 reply:(id /* block */)arg2;

@end
