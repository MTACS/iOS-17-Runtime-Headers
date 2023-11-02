
@interface SGSqliteReadTransaction : NSObject {
    SGSqliteDatabase * _db;
}

@property (nonatomic, readonly) SGSqliteDatabase *db;

- (void).cxx_destruct;
- (id)db;
- (id)initWithHandle:(id)arg1;

@end
