
@interface _EFSQLDataBinding : EFSQLBinding {
    NSData * _dataValue;
}

@property (nonatomic, readonly, copy) NSData *dataValue;

- (void).cxx_destruct;
- (void)bindTo:(struct sqlite3_stmt { }*)arg1 withSQLIndex:(int)arg2;
- (id)dataValue;
- (id)initWithData:(id)arg1;

@end
