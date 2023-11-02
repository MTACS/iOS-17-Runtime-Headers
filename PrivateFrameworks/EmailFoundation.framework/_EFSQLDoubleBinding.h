
@interface _EFSQLDoubleBinding : EFSQLBinding {
    double  _doubleValue;
}

@property (nonatomic, readonly) double doubleValue;

- (void)bindTo:(struct sqlite3_stmt { }*)arg1 withSQLIndex:(int)arg2;
- (double)doubleValue;
- (id)initWithDouble:(double)arg1;

@end
