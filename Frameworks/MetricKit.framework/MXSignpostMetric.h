
@interface MXSignpostMetric : MXMetric {
    NSString * _signpostCategory;
    MXSignpostIntervalData * _signpostIntervalData;
    NSString * _signpostName;
    unsigned long long  _totalCount;
}

@property (readonly) NSString *signpostCategory;
@property (readonly) MXSignpostIntervalData *signpostIntervalData;
@property (readonly) NSString *signpostName;
@property (readonly) unsigned long long totalCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignpostName:(id)arg1 withSignpostCategory:(id)arg2 withTotalCount:(unsigned long long)arg3 withSignpostIntervalData:(id)arg4;
- (id)signpostCategory;
- (id)signpostIntervalData;
- (id)signpostName;
- (id)toDictionary;
- (unsigned long long)totalCount;

@end
