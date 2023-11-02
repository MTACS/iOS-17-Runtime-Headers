
@interface _NSSQLGenerator : NSObject {
    NSSQLiteAdapter * _adapter;
    NSMutableString * _selectList;
    NSMutableString * _sqlString;
    NSSQLiteStatement * _statement;
    NSMutableString * _whereClause;
}

+ (void)initialize;

- (void)dealloc;

@end
