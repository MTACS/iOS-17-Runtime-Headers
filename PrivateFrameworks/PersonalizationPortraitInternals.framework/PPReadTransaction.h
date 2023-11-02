
@interface PPReadTransaction : NSObject {
    _PASSqliteDatabase * _db;
}

@property (readonly) _PASSqliteDatabase *db;

- (void).cxx_destruct;
- (id)db;
- (id)initWithHandle:(id)arg1;

@end
