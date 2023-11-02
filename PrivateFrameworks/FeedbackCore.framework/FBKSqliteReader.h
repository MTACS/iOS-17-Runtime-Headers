
@interface FBKSqliteReader : NSObject {
    NSURL * _dbFile;
}

@property (nonatomic, retain) NSURL *dbFile;

- (void).cxx_destruct;
- (id)allRowsForTable:(id)arg1;
- (id)csvRepresentationForTable:(id)arg1;
- (id)dbFile;
- (id)initWithFile:(id)arg1;
- (id)runQuery:(id)arg1;
- (void)setDbFile:(id)arg1;
- (id)tableNames;

@end
