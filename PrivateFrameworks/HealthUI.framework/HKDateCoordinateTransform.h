
@interface HKDateCoordinateTransform : HKCoordinateTransform {
    NSCalendar * _currentCalendar;
}

@property (nonatomic, retain) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (double)coordinateForValue:(id)arg1;
- (id)currentCalendar;
- (id)initWithCurrentCalendar:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCurrentCalendar:(id)arg1;
- (id)valueForCoordinate:(double)arg1;

@end
