
@interface VUIImageFactory : NSObject

+ (id)URLFromSource:(id)arg1 extension:(id)arg2 p3Specifier:(id)arg3 cropCode:(id)arg4 imageSize:(struct CGSize { double x1; double x2; })arg5 centerGrowth:(bool)arg6 focusSizeIncrease:(double)arg7;
+ (id)_getResourceImageFromDescriptor:(id)arg1;
+ (id)_imageProxyWithURL:(id)arg1;
+ (id)_makeImageViewWithDescriptor:(id)arg1 proxy:(id)arg2 existingView:(id)arg3;
+ (id)_makeSourceStringFromSource:(id)arg1 p3Specifier:(id)arg2;
+ (id)makeImageProxyWithDescriptor:(id)arg1;
+ (id)makeImageViewWithDescriptor:(id)arg1 existingView:(id)arg2;
+ (id)makeImageViewWithResourceDescriptor:(id)arg1 existingView:(id)arg2;

@end
