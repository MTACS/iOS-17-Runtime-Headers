
@interface NSSQLRowCache : NSPersistentStoreCache {
    int  _debug;
    NSSQLCore * _sqlCore;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1;
- (id)sqlCore;

@end
