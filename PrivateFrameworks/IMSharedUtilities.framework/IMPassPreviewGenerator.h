
@interface IMPassPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)_dictionaryRepresentationForColor:(id)arg1;
+ (id)_dictionaryRepresentationForPassText:(id)arg1;
+ (id)generateAndPersistMetadataFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (bool)generatesMetadata;
+ (bool)generatesPreview;
+ (bool)isSupported;
+ (id)metadataExtension;
+ (id)previewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (id)temporaryDirectory;

@end
