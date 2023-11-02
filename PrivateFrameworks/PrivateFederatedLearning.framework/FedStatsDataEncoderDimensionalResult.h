
@interface FedStatsDataEncoderDimensionalResult : NSObject {
    NSNumber * _dimensionality;
    NSNumber * _index;
}

@property (copy) NSNumber *dimensionality;
@property (copy) NSNumber *index;

+ (id)resultWithIndex:(id)arg1 dimensionality:(id)arg2;

- (void).cxx_destruct;
- (id)dimensionality;
- (id)index;
- (id)initWithIndex:(id)arg1 dimensionality:(id)arg2;
- (void)setDimensionality:(id)arg1;
- (void)setIndex:(id)arg1;

@end
