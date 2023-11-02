
@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization <LPMetadataProviderSpecializationDelegate> {
    NSString * _MIMEType;
    NSString * _UTI;
    bool  _cancelled;
    NSObject<OS_dispatch_group> * _fetchGroup;
    LPFileMetadata * _fileMetadata;
    LPLinkMetadata * _metadata;
    LPImage * _originalImage;
    LPImage * _quickLookThumbnail;
    LPImage * _smallQuickLookThumbnail;
    NSURL * _temporaryFileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_thumbnailQueue;
+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForResourceWithContext:(id)arg1;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)cleanUpTemporaryFile;
- (void)complete;
- (void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg1;
- (void)fetchMetadataForReachableFile:(id)arg1;
- (void)fetchMetadataFromURL:(id)arg1;
- (void)generateFallbackMetadataForUnreachableFile:(id)arg1;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)requestQuickLookThumbnailForURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 badgeType:(unsigned long long)arg3 image:(id*)arg4;
- (bool)shouldUseQuickLookForFileType;
- (void)start;
- (void)updatePreliminaryMetadata;

@end
