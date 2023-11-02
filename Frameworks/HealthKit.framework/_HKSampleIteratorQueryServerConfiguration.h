
@interface _HKSampleIteratorQueryServerConfiguration : HKQueryServerConfiguration {
    unsigned long long  _limit;
    HKSampleIteratorQueryCursor * _queryCursor;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) HKSampleIteratorQueryCursor *queryCursor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (id)queryCursor;
- (void)setLimit:(unsigned long long)arg1;
- (void)setQueryCursor:(id)arg1;

@end
