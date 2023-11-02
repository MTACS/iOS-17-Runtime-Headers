
@interface FLSQLiteDatabaseConnection : NSObject {
    struct sqlite3 { } * _db;
    NSObject<OS_os_log> * _log;
    NSString * _storePath;
}

@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, copy) NSString *storePath;

- (void).cxx_destruct;
- (void)close;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)initWithStorePath:(id)arg1;
- (id)log;
- (bool)open;
- (void)setLog:(id)arg1;
- (void)setStorePath:(id)arg1;
- (id)storePath;

@end
