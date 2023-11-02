
@interface IMWorkoutPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (bool)_isAvailable;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 balloonBundleID:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 outSize:(struct CGSize { double x1; double x2; }*)arg5 error:(id*)arg6;
+ (bool)generateWorkoutPreview:(id)arg1 andWriteToURL:(id)arg2 maxPxWidth:(double)arg3 scale:(double)arg4 imagePxSize:(struct CGSize { double x1; double x2; }*)arg5;
+ (bool)writesToDisk;

@end
