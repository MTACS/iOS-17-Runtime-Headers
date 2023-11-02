
@interface EDPersistenceAssociationPlaceholder : NSObject {
    EFSQLColumnSchema * _column;
    NSString * _tableName;
}

@property (nonatomic, readonly) EFSQLColumnSchema *column;
@property (nonatomic, readonly, copy) NSString *tableName;

- (void).cxx_destruct;
- (id)column;
- (id)description;
- (id)initWithColumn:(id)arg1 tableName:(id)arg2;
- (bool)resolveWithSchema:(id)arg1;
- (id)tableName;

@end
