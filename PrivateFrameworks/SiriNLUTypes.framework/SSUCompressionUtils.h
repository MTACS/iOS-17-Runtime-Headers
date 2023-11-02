
@interface SSUCompressionUtils : NSObject

+ (id)SSUFileFromCompressedSSUFilePath:(id)arg1 error:(id*)arg2;
+ (bool)_compressArchiveForData:(id)arg1 outputFileURL:(id)arg2 error:(id*)arg3;
+ (id)_dataFromCompressedSSUFilePath:(id)arg1 error:(id*)arg2;
+ (bool)compressArchiveForSSUFile:(id)arg1 outputFileURL:(id)arg2 error:(id*)arg3;
+ (bool)compressArchiveForSSUFileURL:(id)arg1 outputFileURL:(id)arg2 error:(id*)arg3;
+ (bool)decompressFromCompressedSSUFilePath:(id)arg1 outputFileURL:(id)arg2 error:(id*)arg3;

@end
