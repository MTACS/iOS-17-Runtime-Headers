
@interface _VUIMonogramInitialsSilhouetteImageGenerator : _VUIMonogramImageGenerator

+ (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
+ (void)drawInitialsWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andDescription:(id)arg2;
+ (id)monogramImageWithDescription:(id)arg1;

- (void)cancelLoad:(id)arg1;
- (id)imageKeyForObject:(id)arg1;
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize { double x1; double x2; })arg2 cropToFit:(bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(id /* block */)arg6;

@end
