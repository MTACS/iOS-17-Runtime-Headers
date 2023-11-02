
@interface GEOUnarchiver : NSObject

+ (bool)decompressBZip2DataAtURL:(id)arg1 toURL:(id)arg2 log:(id)arg3 error:(id*)arg4;
+ (bool)decompressDataAtURL:(id)arg1 toURL:(id)arg2 log:(id)arg3 error:(id*)arg4;
+ (bool)decompressGZipDataAtURL:(id)arg1 toURL:(id)arg2 log:(id)arg3 error:(id*)arg4;
+ (id)getContentsOfArchiveAtURL:(id)arg1 log:(id)arg2 error:(id*)arg3;
+ (bool)unarchiveDataAtURL:(id)arg1 log:(id)arg2 inMemoryDataSizeThreshold:(unsigned long long)arg3 fileVisitor:(id /* block */)arg4 error:(id*)arg5;
+ (bool)unarchiveDataAtURL:(id)arg1 toURL:(id)arg2 log:(id)arg3 error:(id*)arg4;

@end
