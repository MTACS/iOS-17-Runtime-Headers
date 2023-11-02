
@interface _bmFMDatabaseQueue : NSObject {
    _bmFMDatabase * _db;
    int  _openFlags;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _vfsName;
}

@property (readonly) int openFlags;
@property (retain) NSString *path;
@property (copy) NSString *vfsName;

+ (Class)databaseClass;
+ (id)databaseQueueWithPath:(id)arg1;
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;
+ (id)databaseQueueWithURL:(id)arg1;
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;

- (void).cxx_destruct;
- (void)beginTransaction:(long long)arg1 withBlock:(id /* block */)arg2;
- (bool)checkpoint:(int)arg1 error:(id*)arg2;
- (bool)checkpoint:(int)arg1 name:(id)arg2 error:(id*)arg3;
- (bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int*)arg3 checkpointCount:(int*)arg4 error:(id*)arg5;
- (void)close;
- (id)database;
- (void)dealloc;
- (void)inDatabase:(id /* block */)arg1;
- (void)inDeferredTransaction:(id /* block */)arg1;
- (void)inExclusiveTransaction:(id /* block */)arg1;
- (void)inImmediateTransaction:(id /* block */)arg1;
- (id)inSavePoint:(id /* block */)arg1;
- (void)inTransaction:(id /* block */)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2;
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 flags:(int)arg2;
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;
- (void)interrupt;
- (int)openFlags;
- (id)path;
- (void)setPath:(id)arg1;
- (void)setVfsName:(id)arg1;
- (id)vfsName;

@end
