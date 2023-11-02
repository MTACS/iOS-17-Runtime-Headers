
@interface HKUserTrackedConceptQueryConfiguration : HKQueryServerConfiguration {
    NSArray * _sortDescriptors;
}

@property (nonatomic, copy) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
