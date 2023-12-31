
@interface HKGraphSeriesVisibleBlockCoordinates : NSObject {
    <HKGraphSeriesBlockCoordinate> * _last;
    <HKGraphSeriesBlockCoordinate> * _maximum;
    <HKGraphSeriesBlockCoordinate> * _minimum;
}

@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinate> *last;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinate> *maximum;
@property (nonatomic, readonly) <HKGraphSeriesBlockCoordinate> *minimum;

- (void).cxx_destruct;
- (id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3;
- (id)last;
- (id)maximum;
- (id)minimum;

@end
