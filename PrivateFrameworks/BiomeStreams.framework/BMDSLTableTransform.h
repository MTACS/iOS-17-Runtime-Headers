
@interface BMDSLTableTransform : BMDSLBaseCodable {
    <BMDSLRowTransform> * _rowTransform;
    BMTableSchema * _schema;
    NSString * _tableName;
}

@property (nonatomic, retain) <BMDSLRowTransform> *rowTransform;
@property (nonatomic, retain) BMTableSchema *schema;
@property (nonatomic, readonly, copy) NSString *tableName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRowTransform:(id)arg1 schema:(id)arg2 tableName:(id)arg3;
- (id)initWithRowTransform:(id)arg1 schema:(id)arg2 tableName:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;
- (id)rowTransform;
- (id)schema;
- (void)setRowTransform:(id)arg1;
- (void)setSchema:(id)arg1;
- (id)tableName;

@end
