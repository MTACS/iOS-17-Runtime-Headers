
@interface PIPosterSettlingEffectLoader : NSObject

+ (unsigned long long)_gatingFlagsFromMADStatus:(id)arg1;
+ (id)_resolveOptions:(id)arg1;
+ (bool)adjustCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forEditedLivePhotoResource:(id)arg2 error:(out id*)arg3;
+ (bool)adjustCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 outputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 outputExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forComposition:(id)arg4 applyOrientation:(bool)arg5 error:(out id*)arg6;
+ (void)adjustVideo:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forResource:(id)arg3 completion:(id /* block */)arg4;
+ (id)adjustedCompositionForResource:(id)arg1 videoURL:(id)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 error:(out id*)arg4;
+ (bool)canHandleEditedLivePhotoResource:(id)arg1 error:(out id*)arg2;
+ (void)cancelRequest:(int)arg1;
+ (bool)extractCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 fromStabilizationResultAttributes:(id)arg2 error:(out id*)arg3;
+ (int)loadCropRectWithResource:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (int)loadVideoWithResource:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (id)originalCompositionForResource:(id)arg1 error:(out id*)arg2;
+ (id)temporaryAdjustedVideoURLForURL:(id)arg1;
+ (id)temporaryDirectory;

@end
