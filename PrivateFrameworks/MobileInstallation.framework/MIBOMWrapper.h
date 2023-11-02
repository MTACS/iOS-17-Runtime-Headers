
@interface MIBOMWrapper : NSObject

+ (bool)_countFilesAndBytesInArchiveAtURL:(id)arg1 withBOMCopier:(struct _BOMCopier { }*)arg2 totalFiles:(unsigned long long*)arg3 totalUncompressedBytes:(unsigned long long*)arg4 error:(id*)arg5;
+ (bool)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3;
+ (bool)extractZipArchiveAtURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3 extractionProgressBlock:(id /* block */)arg4;

@end
