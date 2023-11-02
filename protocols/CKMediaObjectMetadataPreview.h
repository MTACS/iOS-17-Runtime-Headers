
@protocol CKMediaObjectMetadataPreview

@required

- (NSString *)previewMetadataFilenameExtension;
- (bool)supportsPreviewMetadata;

@optional

- (void)generateOOPPreviewMetadataToURL:(void *)arg1 WithCompletionBlock:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id)generatePreviewMetadata;
- (id)previewMetadataWithContentsOfURL:(NSURL *)arg1 error:(out id*)arg2;
- (bool)writePreviewMetadata:(id)arg1 toURL:(NSURL *)arg2 error:(out id*)arg3;

@end
