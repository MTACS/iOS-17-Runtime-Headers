
@interface SHCompression : NSObject

+ (bool)decompressFile:(id)arg1 withAlgorithm:(int)arg2 toLocation:(id)arg3 error:(id*)arg4;
+ (int)supportedCompressionTypeFromFilePathExtension:(id)arg1;
+ (int)supportedCompressionTypeFromFileURL:(id)arg1;

@end
