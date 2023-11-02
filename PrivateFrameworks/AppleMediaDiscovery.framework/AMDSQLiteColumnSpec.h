
@interface AMDSQLiteColumnSpec : NSObject {
    NSString * _alias;
    BOOL  _dataType;
    NSObject * _defaultValue;
    NSString * _derivationExpression;
    NSString * _name;
    bool  _notNull;
    NSString * _typeString;
    bool  _unique;
}

@property (nonatomic, retain) NSString *alias;
@property (nonatomic) BOOL dataType;
@property (nonatomic, retain) NSObject *defaultValue;
@property (nonatomic, retain) NSString *derivationExpression;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool notNull;
@property (nonatomic, retain) NSString *typeString;
@property (nonatomic) bool unique;

+ (BOOL)getTypeEnumFor:(id)arg1;

- (void).cxx_destruct;
- (id)alias;
- (BOOL)dataType;
- (id)defaultValue;
- (id)derivationExpression;
- (id)getCreateStatementPart;
- (id)getDefaultValue;
- (id)getName;
- (id)getSelectColumnExpression;
- (id)getSelectColumnName;
- (BOOL)getType;
- (id)getTypeString;
- (id)initWithDict:(id)arg1 withName:(id)arg2 error:(id*)arg3;
- (bool)isNotNull;
- (bool)isRequired;
- (id)name;
- (bool)notNull;
- (void)setAlias:(id)arg1;
- (void)setDataType:(BOOL)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDerivationExpression:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotNull:(bool)arg1;
- (void)setTypeString:(id)arg1;
- (void)setUnique:(bool)arg1;
- (id)typeString;
- (bool)unique;

@end
