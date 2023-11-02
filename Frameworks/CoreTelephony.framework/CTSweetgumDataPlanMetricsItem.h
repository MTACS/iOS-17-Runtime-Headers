
@interface CTSweetgumDataPlanMetricsItem : NSObject <NSSecureCoding> {
    NSNumber * _capacityBytes;
}

@property (nonatomic, retain) NSNumber *capacityBytes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capacityBytes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCapacityBytes:(id)arg1;

@end
