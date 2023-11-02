
@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration {
    NSDictionary * _filterDictionary;
}

@property (nonatomic, copy) NSDictionary *filterDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filterDictionary;
- (id)initWithCoder:(id)arg1;
- (void)setFilterDictionary:(id)arg1;

@end
