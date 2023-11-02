
@interface TRITempDirScopeGuard : NSObject {
    NSString * _canonicalPath;
    bool  _isDisposed;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *canonicalPath;
@property (nonatomic, readonly) NSString *path;

+ (bool)ifUnreferencedCleanupPath:(id)arg1;
+ (id)refCountsLock;

- (void).cxx_destruct;
- (id)canonicalPath;
- (void)dealloc;
- (bool)dispose;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)path;

@end
