
@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (id)contactCardPreviewPayloadFileURLFrom:(id)arg1 previewURL:(id)arg2 withFileExtension:(id)arg3;
+ (id)contactCardPreviewPayloadsDirectoryFrom:(id)arg1 previewURL:(id)arg2;
+ (double)contactMonogramDiameter;
+ (id)generateContactPlistFrom:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 error:(id*)arg4;
+ (struct CGImage { }*)monogramForFirstName:(id)arg1 lastName:(id)arg2;
+ (struct CGImage { }*)newContactCardPreviewFrom:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 error:(id*)arg5;
+ (struct CGImage { }*)newMonogramImageForData:(id)arg1 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg4 error:(id*)arg5;
+ (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg2 error:(id*)arg3;
+ (bool)supportsBlastDoor;
+ (id)vCardDataForURL:(id)arg1;

@end
