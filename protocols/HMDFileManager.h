
@protocol HMDFileManager <NSObject>

@required

- (id)JSONObjectWithURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)copyItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(bool)arg2 attributes:(NSDictionary *)arg3 error:(id*)arg4;
- (NSData *)dataWithContentsOfURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)enumerateItemsAtURL:(void *)arg1 includingPropertiesForKeys:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*
- (bool)fileExistsAtURL:(NSURL *)arg1;
- (NSFileHandle *)fileHandleForReadingFromURL:(NSURL *)arg1 error:(id*)arg2;
- (NSURL *)heroFrameStoreDirectoryURL;
- (bool)isDeletableFileAtPath:(NSString *)arg1;
- (NSURL *)legacyHeroFrameStoreDirectoryURL;
- (bool)linkItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)removeItemAtURL:(NSURL *)arg1 error:(id*)arg2;
- (bool)writeData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (bool)writeDictionary:(NSDictionary *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)writeJSONObject:(id)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)zipItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id*)arg3;

@end
