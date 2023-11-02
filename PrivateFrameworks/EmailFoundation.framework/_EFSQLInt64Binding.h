
@interface _EFSQLInt64Binding : EFSQLBinding {
    long long  _integerValue;
}

@property (nonatomic, readonly) long long integerValue;

- (void)bindTo:(struct sqlite3_stmt { }*)arg1 withSQLIndex:(int)arg2;
- (id)initWithInt64:(long long)arg1;
- (long long)integerValue;

@end
