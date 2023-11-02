
@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration <NSSecureCoding> {
    NSArray * _queryDescriptors;
}

@property (nonatomic, copy) NSArray *queryDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)queryDescriptors;
- (void)setQueryDescriptors:(id)arg1;

@end
