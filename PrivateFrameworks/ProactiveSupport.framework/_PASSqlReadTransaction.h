
@interface _PASSqlReadTransaction : NSObject {
    _PASSqliteDatabase * _db;
}

@property (nonatomic, readonly) _PASSqliteDatabase *db;

- (void).cxx_destruct;
- (id)db;
- (id)init;
- (id)initWithHandle:(id)arg1;

@end
