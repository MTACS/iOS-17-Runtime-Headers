
@interface SCWRecordSchema : NSObject {
    NSArray * _fieldSchemas;
    NSString * _recordType;
}

@property (nonatomic, readonly, copy) NSArray *fieldNames;
@property (nonatomic, readonly, copy) NSArray *fieldSchemas;
@property (nonatomic, readonly, copy) NSString *recordType;

- (void).cxx_destruct;
- (id)fieldNames;
- (id)fieldSchemas;
- (id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2;
- (bool)isValidRecord:(id)arg1;
- (id)recordType;
- (id)schemaForFieldName:(id)arg1;

@end
