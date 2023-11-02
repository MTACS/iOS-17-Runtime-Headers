
@interface IMMoviePreviewGenerator : IMPreviewGenerator

+ (id)UTITypes;
+ (id)_avAssetForURL:(id)arg1;
+ (id)fetchUTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 balloonBundleID:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 outSize:(struct CGSize { double x1; double x2; }*)arg5 error:(id*)arg6;
+ (bool)isAutoloopAsset:(id)arg1;
+ (struct CGImage { }*)newImageWithPlayButtonOverlay:(struct CGImage { }*)arg1 scale:(double)arg2 transferGUID:(id)arg3 error:(id*)arg4;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (bool)writesToDisk;

@end
