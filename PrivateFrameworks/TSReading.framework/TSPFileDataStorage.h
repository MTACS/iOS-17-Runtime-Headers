
@interface TSPFileDataStorage : NSObject <TSPDataStorage>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDownload;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;

- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (id)documentResourceLocator;
- (unsigned long long)encodedLength;
- (id)filenameForPreferredFilename:(id)arg1;
- (bool)isInPackage:(id)arg1;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (bool)readOnly;

@end
