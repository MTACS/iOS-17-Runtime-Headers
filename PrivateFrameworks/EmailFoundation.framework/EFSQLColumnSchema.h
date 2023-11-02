
@interface EFSQLColumnSchema : NSObject {
    EFSQLTableSchema * _associatedTable;
    unsigned long long  _collation;
    id  _defaultValue;
    unsigned long long  _foreignKeyDeleteAction;
    EFSQLTableSchema * _foreignKeyTarget;
    NSString * _foreignKeyTargetString;
    unsigned long long  _foreignKeyUpdateAction;
    bool  _isAutoincrementing;
    bool  _isPrimaryKey;
    NSString * _name;
    bool  _nullable;
    EFSQLTableSchema * _table;
    unsigned long long  _type;
}

@property (nonatomic) EFSQLTableSchema *associatedTable;
@property (nonatomic, readonly) unsigned long long collation;
@property (nonatomic, readonly) EFSQLColumnExpression *columnExpression;
@property (nonatomic, readonly) EFSQLColumnExpression *columnExpressionWithFullName;
@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly, copy) NSString *definition;
@property (nonatomic) unsigned long long foreignKeyDeleteAction;
@property (nonatomic) EFSQLTableSchema *foreignKeyTarget;
@property (nonatomic, copy) NSString *foreignKeyTargetString;
@property (nonatomic) unsigned long long foreignKeyUpdateAction;
@property (nonatomic, readonly) bool isAutoincrementing;
@property (nonatomic, readonly) bool isPrimaryKey;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool nullable;
@property (nonatomic, readonly) EFSQLTableSchema *table;
@property (nonatomic, readonly) unsigned long long type;

+ (id)blobColumnWithName:(id)arg1 nullable:(bool)arg2;
+ (unsigned long long)columnTypeForString:(id)arg1;
+ (id)integerColumnWithName:(id)arg1 nullable:(bool)arg2;
+ (id)integerColumnWithName:(id)arg1 nullable:(bool)arg2 defaultValue:(id)arg3;
+ (id)realColumnWithName:(id)arg1 nullable:(bool)arg2;
+ (id)realColumnWithName:(id)arg1 nullable:(bool)arg2 defaultValue:(id)arg3;
+ (id)stringForColumnType:(unsigned long long)arg1;
+ (id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(bool)arg3;
+ (id)textColumnWithName:(id)arg1 collation:(unsigned long long)arg2 nullable:(bool)arg3 defaultValue:(id)arg4;

- (void).cxx_destruct;
- (id)_stringForForeignKeyAction:(unsigned long long)arg1;
- (void)associateWithTable:(id)arg1;
- (id)associatedTable;
- (unsigned long long)collation;
- (id)columnExpression;
- (id)columnExpressionWithFullName;
- (id)debugDescription;
- (id)defaultValue;
- (id)definition;
- (id)description;
- (unsigned long long)foreignKeyDeleteAction;
- (id)foreignKeyTarget;
- (id)foreignKeyTargetString;
- (unsigned long long)foreignKeyUpdateAction;
- (id)fullNameWithDatabaseName:(id)arg1;
- (id)initRowIDWithAlias:(id)arg1 isAutoincrementing:(bool)arg2;
- (id)initWithName:(id)arg1 isPrimaryKey:(bool)arg2 isAutoincrementing:(bool)arg3 type:(unsigned long long)arg4 collation:(unsigned long long)arg5 nullable:(bool)arg6 defaultValue:(id)arg7;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 collation:(unsigned long long)arg3 nullable:(bool)arg4 defaultValue:(id)arg5;
- (bool)isAutoincrementing;
- (bool)isPrimaryKey;
- (id)name;
- (bool)nullable;
- (void)setAsForeignKeyForString:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3;
- (void)setAsForeignKeyForTable:(id)arg1 onDelete:(unsigned long long)arg2 onUpdate:(unsigned long long)arg3;
- (void)setAssociatedTable:(id)arg1;
- (void)setForeignKeyDeleteAction:(unsigned long long)arg1;
- (void)setForeignKeyTarget:(id)arg1;
- (void)setForeignKeyTargetString:(id)arg1;
- (void)setForeignKeyUpdateAction:(unsigned long long)arg1;
- (void)setTable:(id)arg1;
- (id)table;
- (unsigned long long)type;

@end
