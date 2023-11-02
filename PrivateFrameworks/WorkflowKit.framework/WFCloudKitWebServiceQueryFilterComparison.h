
@interface WFCloudKitWebServiceQueryFilterComparison : WFCloudKitWebServiceQueryFilter {
    NSString * _recordKey;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, retain) NSString *recordKey;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)recordKey;
- (void)setRecordKey:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)stringRepresentationWithRecordType:(id)arg1;
- (unsigned long long)type;
- (id)value;

@end
