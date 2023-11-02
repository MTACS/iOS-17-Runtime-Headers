
@protocol IMPreviewGeneratorProtocol

@required

+ (NSURL *)generateAndPersistMetadataFromSourceURL:(NSURL *)arg1 senderContext:(IMSenderContext *)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (NSURL *)generateAndPersistPreviewFromSourceURL:(NSURL *)arg1 senderContext:(IMSenderContext *)arg2 balloonBundleID:(NSString *)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 outSize:(struct CGSize { double x1; double x2; }*)arg5 error:(id*)arg6;
+ (bool)generatesMetadata;
+ (bool)generatesPreview;
+ (double)maxUpScale;
+ (NSString *)metadataExtension;
+ (struct CGImage { }*)newPreviewFromSourceURL:(NSURL *)arg1 senderContext:(IMSenderContext *)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (NSString *)previewExtension;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;
+ (bool)writesToDisk;

@end
