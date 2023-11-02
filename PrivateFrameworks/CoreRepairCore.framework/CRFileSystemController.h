
@interface CRFileSystemController : NSObject {
    NSString * fdrDataPathStr;
    NSString * tmpFDRDataPathStr;
}

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)_init;
- (bool)_mountBindFSFrom:(const char *)arg1 To:(const char *)arg2 withFlag:(int)arg3;
- (long long)commitToFileSystem;
- (id)init;
- (id)setupFileSystemForRepair;

@end
