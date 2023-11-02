
@interface _bmFMDatabasePool : NSObject {
    NSMutableArray * _databaseInPool;
    NSMutableArray * _databaseOutPool;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _lockQueue;
    unsigned long long  _maximumNumberOfDatabasesToCreate;
    int  _openFlags;
    NSString * _path;
    NSString * _vfsName;
}

@property (nonatomic, readonly) unsigned long long countOfCheckedInDatabases;
@property (nonatomic, readonly) unsigned long long countOfCheckedOutDatabases;
@property (nonatomic, readonly) unsigned long long countOfOpenDatabases;
@property id delegate;
@property unsigned long long maximumNumberOfDatabasesToCreate;
@property (readonly) int openFlags;
@property (copy) NSString *path;
@property (copy) NSString *vfsName;

+ (Class)databaseClass;
+ (id)databasePoolWithPath:(id)arg1;
+ (id)databasePoolWithPath:(id)arg1 flags:(int)arg2;
+ (id)databasePoolWithURL:(id)arg1;
+ (id)databasePoolWithURL:(id)arg1 flags:(int)arg2;

- (void).cxx_destruct;
- (void)beginTransaction:(long long)arg1 withBlock:(id /* block */)arg2;
- (unsigned long long)countOfCheckedInDatabases;
- (unsigned long long)countOfCheckedOutDatabases;
- (unsigned long long)countOfOpenDatabases;
- (id)db;
- (void)dealloc;
- (id)delegate;
- (void)executeLocked:(id /* block */)arg1;
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
- (unsigned long long)maximumNumberOfDatabasesToCreate;
- (int)openFlags;
- (id)path;
- (void)pushDatabaseBackInPool:(id)arg1;
- (void)releaseAllDatabases;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNumberOfDatabasesToCreate:(unsigned long long)arg1;
- (void)setPath:(id)arg1;
- (void)setVfsName:(id)arg1;
- (id)vfsName;

@end
