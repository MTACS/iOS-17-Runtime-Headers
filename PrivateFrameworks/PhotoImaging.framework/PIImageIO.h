
@interface PIImageIO : NSObject

+ (bool)writeCGImage:(struct CGImage { }*)arg1 fileURL:(id)arg2;
+ (bool)writeCGImage:(struct CGImage { }*)arg1 fileURL:(id)arg2 options:(id)arg3;
+ (bool)writeImage:(id)arg1 fileURL:(id)arg2;
+ (id)writeImage:(id)arg1 toDirectoryAtPath:(id)arg2 withBasename:(id)arg3;
+ (id)writeImage:(id)arg1 toTemporaryDirectoryWithBasename:(id)arg2;

@end
