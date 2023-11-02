
@interface _TVMonogramInitialsSilhouetteImageGenerator : _TVMonogramImageGenerator

+ (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
+ (bool)_isRomanName:(id)arg1;
+ (id)monogramImageWithDescription:(id)arg1;

- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
