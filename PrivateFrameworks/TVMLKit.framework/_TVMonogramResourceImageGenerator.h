
@interface _TVMonogramResourceImageGenerator : _TVMonogramImageGenerator

+ (bool)isResourceURL:(id)arg1;
+ (id)tintImage:(id)arg1 withColor:(id)arg2;

- (void)cancelLoad:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
