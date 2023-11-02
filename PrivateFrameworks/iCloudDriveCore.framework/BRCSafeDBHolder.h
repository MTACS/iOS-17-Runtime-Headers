
@interface BRCSafeDBHolder : NSObject {
    NSURL * _databaseURL;
    BRCPQLConnection * _db;
}

@property (nonatomic, readonly) BRCPQLConnection *db;

+ (id)newSafeDBHolder:(id)arg1 withDatabaseURL:(id)arg2;

- (void).cxx_destruct;
- (void)asyncClose;
- (void)asyncCloseWithCompletionHandler:(id /* block */)arg1;
- (bool)closeWithError:(id*)arg1;
- (id)db;
- (void)dealloc;

@end
