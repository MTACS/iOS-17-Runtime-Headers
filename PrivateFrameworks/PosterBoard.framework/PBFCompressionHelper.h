
@interface PBFCompressionHelper : NSObject

+ (int)unTarFileWithFd:(id)arg1 toPath:(id)arg2;
+ (bool)unarchiveFileAtURL:(id)arg1 toURL:(id)arg2;
+ (int)unpackageTarData:(void*)arg1 size:(unsigned long long)arg2 parentDir:(const char *)arg3;

@end
