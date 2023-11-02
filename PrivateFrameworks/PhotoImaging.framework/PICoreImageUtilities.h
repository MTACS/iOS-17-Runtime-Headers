
@interface PICoreImageUtilities : NSObject

+ (id)framedRectImageWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 borderWidth:(double)arg3;
+ (id)loadFilterWithName:(id)arg1;
+ (id)metalKernelWithFunctionName:(id)arg1 error:(id*)arg2;
+ (id)metalLibraryData;

@end
