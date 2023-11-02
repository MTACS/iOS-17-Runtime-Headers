
@interface HKPopulationNormsAxisLabel : NSObject {
    NSNumber * _rangeEnd;
    NSNumber * _rangeStart;
}

@property (nonatomic, readonly, copy) NSNumber *rangeEnd;
@property (nonatomic, copy) NSNumber *rangeStart;
@property (nonatomic, readonly) NSString *separatorString;

- (void).cxx_destruct;
- (id)initWithRangeStart:(id)arg1 end:(id)arg2;
- (id)initWithValue:(id)arg1;
- (id)rangeEnd;
- (id)rangeStart;
- (id)separatorString;
- (void)setRangeStart:(id)arg1;
- (id)stringRepresentation;

@end
