
@interface IMAnimatedImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)generateAndPersistPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 balloonBundleID:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 outSize:(struct CGSize { double x1; double x2; }*)arg5 error:(id*)arg6;
+ (bool)writesToDisk;

@end
