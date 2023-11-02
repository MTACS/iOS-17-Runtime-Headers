
@interface HKValueHistogramCollectionQueryServerConfiguration : HKQueryServerConfiguration {
    NSDate * _anchorDate;
    NSDateComponents * _intervalComponents;
    NSArray * _quantityRanges;
}

@property (nonatomic, copy) NSDate *anchorDate;
@property (nonatomic, copy) NSDateComponents *intervalComponents;
@property (nonatomic, copy) NSArray *quantityRanges;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (id)quantityRanges;
- (void)setAnchorDate:(id)arg1;
- (void)setIntervalComponents:(id)arg1;
- (void)setQuantityRanges:(id)arg1;

@end
