
@protocol TSPDataStorage <NSObject>

@required

- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 contentTypeUTI:(NSString *)arg2;
- (AVAsset *)AVAssetWithOptions:(NSDictionary *)arg1 usingResourceLoaderWithContentTypeUTI:(NSString *)arg2;
- (NSData *)NSDataWithOptions:(unsigned long long)arg1;
- (NSData *)bookmarkDataWithOptions:(unsigned long long)arg1;
- (NSString *)documentResourceLocator;
- (unsigned long long)encodedLength;
- (NSString *)filenameForPreferredFilename:(NSString *)arg1;
- (bool)isInPackage:(id <TSPPackage>)arg1;
- (struct CGDataProvider { }*)newCGDataProvider;
- (struct CGImageSource { }*)newCGImageSource;
- (unsigned char)packageIdentifier;
- (NSString *)packageLocator;
- (void)performIOChannelReadWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TSUReadChannel> *, void*
- (void)performReadWithAccessor:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (bool)readOnly;

@optional

- (void)addDownloadObserver:(void *)arg1 forData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: id, TSPData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, TSPData *, long long, void*
- (bool)copyToTemporaryURL:(NSURL *)arg1;
- (SFUCryptoKey *)decryptionKey;
- (bool)needsDownload;
- (id)storageForDataCopyFromOtherContext;

@end
