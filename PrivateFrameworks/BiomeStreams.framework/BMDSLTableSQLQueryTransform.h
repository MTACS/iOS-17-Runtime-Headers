
@interface BMDSLTableSQLQueryTransform : BMDSLBaseCodable <BMDSLTransform> {
    NSString * _SQL;
    BMTableSchema * _schema;
    NSArray * _tableNames;
}

@property (nonatomic, readonly, copy) NSString *SQL;
@property (nonatomic, readonly) BMTableSchema *schema;
@property (nonatomic, readonly, copy) NSArray *tableNames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SQL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 SQL:(id)arg3 tableNames:(id)arg4 schema:(id)arg5;
- (id)initWithSQL:(id)arg1 tableNames:(id)arg2 schema:(id)arg3;
- (id)schema;
- (id)tableNames;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;

@end
