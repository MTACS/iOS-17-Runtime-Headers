
@interface PAMediaConversionServiceImagingUtilities : NSObject

+ (bool)_generatePosterFrameExportForVideoURL:(id)arg1 imageDestinationToAddToAndFinalize:(struct CGImageDestination { }*)arg2 maximumSize:(struct CGSize { double x1; double x2; })arg3 error:(id*)arg4;
+ (bool)generatePosterFrameExportForVideoURL:(id)arg1 destinationURL:(id)arg2 maximumSize:(struct CGSize { double x1; double x2; })arg3 outputFileType:(id)arg4 error:(id*)arg5;
+ (bool)generatePosterFrameExportForVideoURL:(id)arg1 outputData:(id*)arg2 maximumSize:(struct CGSize { double x1; double x2; })arg3 outputFileType:(id)arg4 error:(id*)arg5;
+ (id)imageDataForPassthroughConversionForSourceURL:(id)arg1 metadataPolicy:(id)arg2 outResultImageSize:(struct CGSize { double x1; double x2; }*)arg3;
+ (id)primaryImagePropertiesForFileAtURL:(id)arg1;

@end
