
@interface BMDSLTableUpsertSubscriber : BMDSLSubscriber {
    NSString * _identifier;
    NSString * _tableName;
}

@property (nonatomic, copy) NSString *tableName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsSubscriber;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2;
- (id)initWithTableName:(id)arg1 identifier:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (void)setTableName:(id)arg1;
- (id)tableName;

@end
