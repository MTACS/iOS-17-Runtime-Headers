
@interface _PASSqliteStatementCache : NSObject {
    void * _associatedObjects;
    struct sqlite3_stmt {} * _cached;
    struct _PASSqliteCacheScore { 
        unsigned int crc32; 
        unsigned char score; 
    }  _scores;
}

- (id)init;

@end
