
@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (id)baseDirectoryURL;
+ (id)sharedManager;

- (id)newDirectoryForDocumentUUID:(id)arg1;

@end
