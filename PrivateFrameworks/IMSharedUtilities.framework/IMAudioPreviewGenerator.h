
@interface IMAudioPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)audioMedataForFileURL:(id)arg1 senderContext:(id)arg2;
+ (id)generateAndPersistMetadataFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
+ (bool)generatesMetadata;
+ (bool)generatesPreview;
+ (id)metadataExtension;
+ (bool)writesToDisk;

@end
