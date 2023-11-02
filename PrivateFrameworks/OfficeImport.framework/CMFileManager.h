
@interface CMFileManager : NSObject

+ (id)canonicalUrlPrefix:(id)arg1;
+ (unsigned long long)getFileTypeFromPath:(id)arg1;
+ (unsigned long long)getFileTypeFromUTI:(id)arg1;
+ (id)getTmpDirectory;
+ (id)getUrlProtocol:(id)arg1;
+ (id)uniqueFileName:(id)arg1;

@end
