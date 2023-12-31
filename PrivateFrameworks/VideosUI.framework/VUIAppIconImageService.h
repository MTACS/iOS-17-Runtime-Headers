
@interface VUIAppIconImageService : NSObject

+ (id)_MD5StringForString:(id)arg1;
+ (void)_cacheImage:(id)arg1 forKey:(id)arg2;
+ (id)_cachePath;
+ (id)_cachedImageForKey:(id)arg1;
+ (id)_imageURLForInstallable:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_keyForInstallable:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (void)fetchIconForInstallable:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
+ (double)iconCornerRadiusForSize:(struct CGSize { double x1; double x2; })arg1;

@end
