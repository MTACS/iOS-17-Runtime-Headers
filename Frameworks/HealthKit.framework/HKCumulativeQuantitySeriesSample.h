
@interface HKCumulativeQuantitySeriesSample : HKCumulativeQuantitySample {
    HKQuantity * _sum;
}

@property (readonly, copy) HKQuantity *sum;

- (void).cxx_destruct;
- (id)sum;

@end
