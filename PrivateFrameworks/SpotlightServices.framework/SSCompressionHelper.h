
@interface SSCompressionHelper : NSObject

+ (id)sharedInstance;

- (char *)getDataOutWithSize:(unsigned long long)arg1 withFlag:(unsigned long long)arg2 fd:(int*)arg3;
- (int)unTarFileWithFd:(id)arg1 toPath:(id)arg2;
- (void)uncompressedContentsForCompressedFile:(id)arg1 outPath:(id)arg2;
- (int)unpackageTarForFd:(int)arg1 size:(unsigned long long)arg2 parentDir:(const char *)arg3;

@end
