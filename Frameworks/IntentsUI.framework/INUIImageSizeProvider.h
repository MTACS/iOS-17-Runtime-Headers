
@interface INUIImageSizeProvider : NSObject <INImageSizeProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)downscaledPNGImageForImage:(id)arg1 size:(struct { double x1; double x2; })arg2 error:(id*)arg3;
+ (struct { double x1; double x2; })imageSizeForImage:(id)arg1;

@end
