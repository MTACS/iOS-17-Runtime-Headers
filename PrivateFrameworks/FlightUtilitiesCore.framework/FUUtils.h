
@interface FUUtils : NSObject

+ (id)airportFromSFAirport:(id)arg1;
+ (id)convertFlightModel:(id)arg1 withError:(id*)arg2;
+ (void)enumerateFlightCodesInString:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2;
+ (void)setTestDate:(id)arg1;
+ (id)testDate;

@end
