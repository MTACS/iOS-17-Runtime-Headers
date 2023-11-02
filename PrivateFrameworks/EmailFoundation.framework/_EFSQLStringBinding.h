
@interface _EFSQLStringBinding : EFSQLBinding {
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (void)bindTo:(struct sqlite3_stmt { }*)arg1 withSQLIndex:(int)arg2;
- (id)initWithString:(id)arg1;
- (id)stringValue;

@end
