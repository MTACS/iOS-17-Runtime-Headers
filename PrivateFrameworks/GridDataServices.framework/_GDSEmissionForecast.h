
@interface _GDSEmissionForecast : NSObject {
    NSDate * _fetchDate;
    NSDictionary * _forecastMap;
    NSDate * _generationDate;
    double  _refetchInterval;
}

@property (nonatomic, readonly) NSDate *fetchDate;
@property (nonatomic, readonly) NSDictionary *forecastMap;
@property (nonatomic, readonly) NSDate *generationDate;
@property (nonatomic, readonly) double refetchInterval;

- (void).cxx_destruct;
- (id)fetchDate;
- (id)forecastMap;
- (id)generationDate;
- (id)initWithForecast:(id)arg1 generatedAt:(id)arg2 fetchedAt:(id)arg3 refetchInterval:(double)arg4;
- (double)refetchInterval;

@end
