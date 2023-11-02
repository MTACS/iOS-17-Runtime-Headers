
@interface BRCFileUnlinker : NSObject {
    NSObject<OS_dispatch_source> * _cachePurgeSource;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic int  _suspendCount;
    NSString * _unlinkRootPath;
}

- (void).cxx_destruct;
- (void)_purge;
- (void)dealloc;
- (void)forcePurgeWithCompletionBlock:(id /* block */)arg1;
- (id)initWithCacheDirPath:(id)arg1;
- (bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (bool)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;
- (void)resume;
- (void)suspend;

@end
