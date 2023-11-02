
@interface HKValueHistogramCollection : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _anchorDate;
    _HKDateIntervalCollection * _intervalCollection;
    NSDateComponents * _intervalComponents;
    NSArray * _quantityRanges;
    NSDictionary * _valueHistogramsByDateIntervalIndex;
}

@property (nonatomic, readonly, copy) NSDate *anchorDate;
@property (nonatomic, readonly) _HKDateIntervalCollection *intervalCollection;
@property (nonatomic, readonly, copy) NSDateComponents *intervalComponents;
@property (nonatomic, readonly, copy) NSArray *quantityRanges;
@property (nonatomic, readonly, copy) NSArray *valueHistograms;
@property (nonatomic, readonly) NSDictionary *valueHistogramsByDateIntervalIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityRanges:(id)arg1 valueHistogramsByDateIntervalIndex:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4;
- (id)intervalCollection;
- (id)intervalComponents;
- (bool)isEqual:(id)arg1;
- (id)quantityRanges;
- (id)valueHistogramForDate:(id)arg1;
- (id)valueHistograms;
- (id)valueHistogramsByDateIntervalIndex;

@end
