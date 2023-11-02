
@interface PAMediaConversionServiceResourceURLCollection : NSObject {
    PAMediaConversionServiceResourceURLCollectionAccessProvider * _accessProviderDelegate;
    NSMutableDictionary * _urlReferencesByRole;
}

@property (retain) PAMediaConversionServiceResourceURLCollectionAccessProvider *accessProviderDelegate;
@property (readonly) bool allURLsAreReadable;
@property (readonly) NSError *blastDoorError;
@property (readonly) NSDictionary *blastDoorMainSourceProperties;
@property (readonly) NSURL *blastDoorSourceURL;
@property (readonly) NSDictionary *blastDoorVideoComplementProperties;
@property (readonly) bool isBlastDoorAccessRequired;
@property (readonly) unsigned long long urlCount;
@property (retain) NSMutableDictionary *urlReferencesByRole;

+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 accessProvider:(id)arg2 error:(id*)arg3;
+ (id)collectionWithMainResourceURL:(id)arg1;
+ (id)filenameSummaryStringForDictionaryRepresentation:(id)arg1;
+ (bool)getSignatureString:(id*)arg1 filenameSummary:(id*)arg2 forDictionaryRepresentation:(id)arg3;

- (void).cxx_destruct;
- (id)accessProviderDelegate;
- (bool)allURLsAreReadable;
- (id)blastDoorError;
- (id)blastDoorMainSourceProperties;
- (id)blastDoorSourceURL;
- (id)blastDoorVideoComplementProperties;
- (id)bookmarkDataDictionaryRepresentationWithError:(id*)arg1;
- (bool)containsAllRoles:(id)arg1;
- (bool)containsAnyRole:(id)arg1;
- (bool)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4;
- (id)description;
- (bool)ensureFilesExistWithError:(id*)arg1;
- (void)enumerateResourceURLReferences:(id /* block */)arg1;
- (void)enumerateResourceURLs:(id /* block */)arg1;
- (id)fileSizeSummary;
- (id)filenameExtensionAndPathHashForRole:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isBlastDoorAccessRequired;
- (bool)isEqual:(id)arg1;
- (id)logMessageSummary;
- (id)logMessageSummaryWithFullPath:(bool)arg1;
- (bool)removeExistingEmptyFilesWithError:(id*)arg1;
- (id)resourceURLForRole:(id)arg1;
- (void)setAccessProviderDelegate:(id)arg1;
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(bool)arg3;
- (void)setShouldDeleteURLOnDeallocation:(bool)arg1 forRole:(id)arg2;
- (void)setUrlReferencesByRole:(id)arg1;
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;
- (unsigned long long)urlCount;
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id*)arg3;
- (id)urlReferencesByRole;

@end
