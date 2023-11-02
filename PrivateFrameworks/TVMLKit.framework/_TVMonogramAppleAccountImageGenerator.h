
@interface _TVMonogramAppleAccountImageGenerator : _TVMonogramImageGenerator

+ (bool)isAppleAccountsURL:(id)arg1;

- (void)cancelLoad:(id)arg1;
- (id)loadImageForURL:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
