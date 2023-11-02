
@interface AXMindNetHelpers : NSObject

+ (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)createVImageBuffer:(id)arg1;
+ (struct shared_ptr<CGImage> { struct CGImage {} *x1; struct __shared_weak_count {} *x2; })getCGImageFromCIImage:(id)arg1;
+ (id)resizeImage:(id)arg1 byX:(float)arg2 andY:(float)arg3;
+ (id)resizeImage:(id)arg1 to:(struct CGSize { double x1; double x2; })arg2;
+ (id)resizeImage:(id)arg1 toWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3;
+ (id)setCIContext;
+ (id)setCIContext:(id)arg1;

@end
