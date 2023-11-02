
@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration {
    bool  _observeUnfrozenSeries;
    NSArray * _queryDescriptors;
}

@property (nonatomic) bool observeUnfrozenSeries;
@property (nonatomic, copy) NSArray *queryDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)observeUnfrozenSeries;
- (id)queryDescriptors;
- (void)setObserveUnfrozenSeries:(bool)arg1;
- (void)setQueryDescriptors:(id)arg1;

@end
