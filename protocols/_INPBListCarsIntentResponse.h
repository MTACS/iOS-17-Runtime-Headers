
@protocol _INPBListCarsIntentResponse <NSObject>

@required

+ (Class)carsType;

- (void)addCars:(_INPBCar *)arg1;
- (NSArray *)cars;
- (_INPBCar *)carsAtIndex:(unsigned long long)arg1;
- (unsigned long long)carsCount;
- (void)clearCars;
- (void)setCars:(NSArray *)arg1;

@end
