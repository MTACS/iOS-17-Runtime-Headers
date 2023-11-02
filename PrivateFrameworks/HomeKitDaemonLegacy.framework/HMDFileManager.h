
@interface HMDFileManager : HMFObject <HMDFileManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *heroFrameStoreDirectoryURL;
@property (readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property (readonly) Class superclass;

- (id)JSONObjectWithURL:(id)arg1 error:(id*)arg2;
- (bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(bool)arg2 attributes:(id)arg3 error:(id*)arg4;
- (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)enumerateItemsAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)fileExistsAtURL:(id)arg1;
- (id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2;
- (id)heroFrameStoreDirectoryURL;
- (bool)isDeletableFileAtPath:(id)arg1;
- (id)legacyHeroFrameStoreDirectoryURL;
- (bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)writeDictionary:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)writeJSONObject:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)zipItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

@end
