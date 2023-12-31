
@interface SiriCoreSQLiteStatement : NSObject {
    bool  _finalizeWhenDone;
    struct sqlite3_stmt { } * _impl;
}

- (void)clearBindings;
- (void)dealloc;
- (struct sqlite3_stmt { }*)impl;
- (id)initWithImpl:(struct sqlite3_stmt { }*)arg1 finalizeWhenDone:(bool)arg2;
- (void)reset;

@end
