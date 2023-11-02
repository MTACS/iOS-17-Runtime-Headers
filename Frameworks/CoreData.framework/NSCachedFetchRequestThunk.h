
@interface NSCachedFetchRequestThunk : NSObject {
    id  _connection;
    NSSQLiteStatement * _limitedStatement;
    NSSQLiteStatement * _unlimitedStatement;
}

- (void)dealloc;
- (id)initForConnection:(id)arg1;

@end
