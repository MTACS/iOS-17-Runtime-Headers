
@interface PLChangeStore : NSObject {
    struct sqlite3 { } * _database;
    NSURL * _databaseFileURL;
    NSObject<OS_dispatch_queue> * _databaseIsolation;
    NSMutableArray * _events;
    NSObject<OS_dispatch_queue> * _eventsIsolation;
    unsigned long long  _firstOnDiskEventIndex;
    PLPhotoLibraryPathManager * _photoLibraryPathManager;
    int  _sqliteOpenFlags;
}

@property (nonatomic, readonly) NSURL *databaseFileURL;
@property (nonatomic, readonly) unsigned long long firstOnDiskEventIndex;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *photoLibraryPathManager;

- (void).cxx_destruct;
- (void)_backupStore;
- (void)_clearStore;
- (void)bindInt64:(long long)arg1 toStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (void)bindInt:(int)arg1 toStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (void)bindString:(id)arg1 toStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (void)bindUUID:(unsigned char)arg1 toStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (void)bindXPCData:(id)arg1 toStatement:(struct sqlite3_stmt { }*)arg2 column:(int)arg3;
- (void)clearStore:(id /* block */)arg1;
- (id)databaseFileURL;
- (void)dealloc;
- (void)enumeratePersistedDidSaveEventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBlock:(id /* block */)arg2;
- (unsigned long long)firstOnDiskEventIndex;
- (void)getEventsSinceIndex:(unsigned long long)arg1 filteredBy:(id /* block */)arg2 onQueue:(id)arg3 withBlock:(id /* block */)arg4;
- (bool)getInMemoryEventsSinceIndex:(unsigned long long)arg1 filteredBy:(id /* block */)arg2 onQueue:(id)arg3 withBlock:(id /* block */)arg4;
- (void)getOnDiskEventsSinceIndex:(unsigned long long)arg1 filteredBy:(id /* block */)arg2 onQueue:(id)arg3 withBlock:(id /* block */)arg4;
- (id)initWithPhotoLibraryPathManager:(id)arg1;
- (unsigned long long)lastIndex;
- (id)newArrayWithEventsSince:(unsigned long long)arg1 filteredBy:(id /* block */)arg2 lastEventIndex:(unsigned long long*)arg3;
- (void)openDatabase;
- (void)performBlockAsTransaction:(id /* block */)arg1;
- (id)photoLibraryPathManager;
- (void)prepareAndEvaluateStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)prepareStatement:(const char *)arg1;
- (void)setupDatabase;

@end
