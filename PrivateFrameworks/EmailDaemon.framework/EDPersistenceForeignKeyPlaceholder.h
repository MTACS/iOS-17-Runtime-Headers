
@interface EDPersistenceForeignKeyPlaceholder : NSObject {
    EFSQLColumnSchema * _column;
    unsigned long long  _deleteAction;
    NSString * _tableName;
    unsigned long long  _updateAction;
}

@property (nonatomic, readonly) EFSQLColumnSchema *column;
@property (nonatomic, readonly) unsigned long long deleteAction;
@property (nonatomic, readonly, copy) NSString *tableName;
@property (nonatomic, readonly) unsigned long long updateAction;

- (void).cxx_destruct;
- (id)column;
- (unsigned long long)deleteAction;
- (id)description;
- (id)initWithColumn:(id)arg1 tableName:(id)arg2 onDelete:(unsigned long long)arg3 onUpdate:(unsigned long long)arg4;
- (bool)resolveToStringForTableNames:(id)arg1;
- (bool)resolveWithSchema:(id)arg1;
- (id)tableName;
- (unsigned long long)updateAction;

@end
