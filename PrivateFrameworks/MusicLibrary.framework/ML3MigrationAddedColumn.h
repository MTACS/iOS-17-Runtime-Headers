
@interface ML3MigrationAddedColumn : NSObject {
    NSString * _columnName;
    NSString * _foreignColumnName;
    NSString * _foreignTableName;
    NSString * _joinColumnName;
}

@property (nonatomic, readonly) NSString *columnName;
@property (nonatomic, readonly) NSString *foreignColumnName;
@property (nonatomic, readonly) NSString *foreignTableName;
@property (nonatomic, readonly) NSString *joinColumnName;
@property (nonatomic, readonly) bool shouldImportFromForeignTable;

- (void).cxx_destruct;
- (id)columnName;
- (id)foreignColumnName;
- (id)foreignTableName;
- (id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4;
- (id)joinColumnName;
- (bool)shouldImportFromForeignTable;

@end
