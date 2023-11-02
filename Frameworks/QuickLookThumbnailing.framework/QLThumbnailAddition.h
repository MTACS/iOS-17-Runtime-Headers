
@interface QLThumbnailAddition : NSObject {
    GSAddition * _addition;
    NSURL * _additionURL;
    long long  _additionURLSandboxToken;
    NSDictionary * _metadata;
    NSDictionary * _thumbnailDataDictionary;
    QLThumbnailVersion * _thumbnailVersion;
}

@property (readonly) unsigned long long additionSize;
@property (retain) NSURL *additionURL;
@property long long additionURLSandboxToken;
@property (readonly) GSAddition *genStoreAddition;
@property (retain) NSDictionary *metadata;
@property (retain) NSDictionary *thumbnailDataDictionary;
@property (readonly) QLThumbnailVersion *thumbnailVersion;

+ (void)_hitAdditionsOnURL:(id)arg1 size:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (bool)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2;
+ (bool)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (bool)_removedAdditionsOnURL:(id)arg1;
+ (bool)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (id)additionCreationInfo;
+ (void)adjustFileProtectionForThumbnail:(id)arg1 fromOriginalDocument:(id)arg2;
+ (bool)associateImage:(struct CGImage { }*)arg1 metadata:(id)arg2 automaticallyGenerated:(bool)arg3 withURL:(id)arg4 error:(id*)arg5;
+ (bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4;
+ (bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(bool)arg3 atURL:(id)arg4 error:(id*)arg5;
+ (bool)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id*)arg3;
+ (bool)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(bool)arg2 atURL:(id)arg3 error:(id*)arg4;
+ (void)downloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1;
+ (void)downloadOrGenerateThumbnailAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fpfsDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)generateThumbnailIfPossibleAtLogicalURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (bool)imageContainsAlpha:(struct CGImage { }*)arg1;
+ (bool)imageContainsAlphaForOtherImages:(struct CGImage { }*)arg1;
+ (id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource { }*)arg1;
+ (bool)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4;
+ (id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2;
+ (void)noteCloudDocsDownloadedFileAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4;
+ (void)preFPFSDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)preFPFSDownloadThumbnailAtTaggedURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)removeAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (bool)removeExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4;
+ (bool)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id*)arg2;
+ (bool)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char *)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id*)arg5;
+ (bool)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3;
+ (bool)shouldUseXattrsToStoreThumbnailsOnURL:(id)arg1;
+ (unsigned long long)sizeOfAdditionsPresentOnURL:(id)arg1;
+ (bool)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2;
- (bool)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
- (bool)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2;
- (unsigned long long)additionSize;
- (id)additionURL;
- (long long)additionURLSandboxToken;
- (id)allImageURLs;
- (void)dealloc;
- (id)genStoreAddition;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2;
- (id)initWithAdditionsPresentOnURL:(id)arg1 includingExtendedAttributes:(bool)arg2 error:(id*)arg3;
- (id)metadata;
- (void)setAdditionURL:(id)arg1;
- (void)setAdditionURLSandboxToken:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setThumbnailDataDictionary:(id)arg1;
- (bool)shouldBeInvalidatedByThumbnailVersion:(id)arg1;
- (id)thumbnailDataDictionary;
- (id)thumbnailDataForKey:(id)arg1;
- (id)thumbnailURLForKey:(id)arg1;
- (id)thumbnailVersion;
- (struct CGImage { }*)thumbnailWithMaximumDimension:(double)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 properties:(id*)arg3;
- (id)thumbnailsDictionaryWithError:(id*)arg1;

@end
