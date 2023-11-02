
@interface EFSQLObjectPropertyMapper : NSObject {
    NSArray * _additionalColumns;
    NSDictionary * _keyPathMappers;
    EFSQLTableSchema * _mainTable;
    NSDictionary * _tableRelationships;
}

@property (nonatomic, readonly) NSArray *additionalColumns;
@property (nonatomic, readonly) NSDictionary *keyPathMappers;
@property (nonatomic, readonly) EFSQLTableSchema *mainTable;
@property (nonatomic, readonly) NSDictionary *tableRelationships;

- (void).cxx_destruct;
- (id)additionalColumns;
- (id)initWithTable:(id)arg1 keyPathMappers:(id)arg2 tableRelationships:(id)arg3 additionalColumns:(id)arg4;
- (id)keyPathMappers;
- (id)mainTable;
- (id)tableRelationships;

@end
