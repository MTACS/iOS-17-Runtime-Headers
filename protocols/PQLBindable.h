
@protocol PQLBindable <NSObject>

@required

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
