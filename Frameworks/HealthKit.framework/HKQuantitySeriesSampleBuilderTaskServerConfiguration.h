
@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration {
    HKDevice * _device;
    HKQuantityType * _quantityType;
    NSDate * _startDate;
}

@property (nonatomic, copy) HKDevice *device;
@property (nonatomic, copy) HKQuantityType *quantityType;
@property (nonatomic, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3;
- (id)quantityType;
- (void)setDevice:(id)arg1;
- (void)setQuantityType:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
