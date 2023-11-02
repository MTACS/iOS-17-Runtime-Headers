
@interface ANFiles : NSObject

+ (id)createTemporaryFileWithData:(id)arg1 extension:(id)arg2 directory:(id)arg3;
+ (id)createTemporaryURLWithFileExtension:(id)arg1 directory:(id)arg2;
+ (void)purgeTemporarySubDirectory:(id)arg1;
+ (void)removeItem:(id)arg1;
+ (id)shared;
+ (id)temporaryDirectoryUrl;

- (id)createDirectory:(id)arg1 andFileURLWithExtension:(id)arg2;
- (id)createTemporaryFileWithData:(id)arg1 extension:(id)arg2 directory:(id)arg3;
- (id)createTemporaryURLWithExtension:(id)arg1 directory:(id)arg2;
- (void)purgeTemporarySubDirectory:(id)arg1;
- (void)removeDirectoryIfEmpty:(id)arg1;
- (void)removeItem:(id)arg1;

@end
