
@interface BMDSLKeyPathRowTransform : BMDSLBaseCodable <BMDSLRowTransform> {
    NSArray * _columnNames;
    NSArray * _keyPaths;
}

@property (nonatomic, copy) NSArray *columnNames;
@property (nonatomic, copy) NSArray *keyPaths;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)columnNames;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPaths:(id)arg1 columnNames:(id)arg2;
- (id)initWithKeyPaths:(id)arg1 columnNames:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (id)keyPaths;
- (id)rowFromInput:(id)arg1;
- (void)setColumnNames:(id)arg1;
- (void)setKeyPaths:(id)arg1;

@end
