
@interface ACHCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration {
    NSDictionary * _collectionIntervals;
}

@property (nonatomic, copy) NSDictionary *collectionIntervals;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collectionIntervals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCollectionIntervals:(id)arg1;

@end
