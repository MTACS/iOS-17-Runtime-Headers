
@interface NSSQLiteIntarrayTable : NSObject {
    struct sqlite3_intarray { } * _intarrayTable;
    NSString * _intarrayTableName;
}

- (void)dealloc;

@end
