
@interface _HDSQLiteEntityColumn : NSObject {
    NSString * _columnType;
    HDSQLiteEntityForeignKey * _foreignKey;
    unsigned char  _keyPathType;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *columnType;
@property (nonatomic, readonly) HDSQLiteEntityForeignKey *foreignKey;
@property (nonatomic, readonly) unsigned char keyPathType;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)columnType;
- (id)creationSQL;
- (id)description;
- (id)foreignKey;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 foreignKey:(id)arg4;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6;
- (unsigned char)keyPathType;
- (id)name;

@end
