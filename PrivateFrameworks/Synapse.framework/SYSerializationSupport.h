
@interface SYSerializationSupport : NSObject

+ (id)archiveDataFromData:(id)arg1 formatIdentifier:(unsigned int)arg2 majorVersion:(unsigned char)arg3 minorVersion:(unsigned char)arg4;
+ (id)archiveDataFromItemData:(id)arg1;
+ (id)itemDataFromArchiveData:(id)arg1 majorVersion:(long long*)arg2 minorVersion:(long long*)arg3 error:(id*)arg4;

@end
