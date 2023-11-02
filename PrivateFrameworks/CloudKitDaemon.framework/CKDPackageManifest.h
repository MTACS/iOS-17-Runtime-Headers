
@interface CKDPackageManifest : NSObject

+ (id)packageInClientWithBasePath:(id)arg1 contentsOfFile:(id)arg2 error:(id*)arg3;
+ (bool)readContentsOfFile:(id)arg1 intoPackage:(id)arg2 error:(id*)arg3;
+ (bool)writePackage:(id)arg1 toFile:(id)arg2 error:(id*)arg3;

@end
