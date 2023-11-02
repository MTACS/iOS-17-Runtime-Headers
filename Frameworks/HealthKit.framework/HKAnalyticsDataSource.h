
@interface HKAnalyticsDataSource : NSObject {
    HKAnalyticsEnvironmentDataSource * _environmentDataSource;
    <HKAnalyticsHealthDataSource> * _strongHealthDataSource;
    <HKAnalyticsHealthDataSource> * _weakHealthDataSource;
}

@property (nonatomic, readonly) HKAnalyticsEnvironmentDataSource *environmentDataSource;
@property (nonatomic, readonly) <HKAnalyticsHealthDataSource> *healthDataSource;
@property (nonatomic, readonly) <HKAnalyticsHealthDataSource> *strongHealthDataSource;
@property (nonatomic, readonly) <HKAnalyticsHealthDataSource> *weakHealthDataSource;

- (void).cxx_destruct;
- (id)environmentDataSource;
- (id)healthDataSource;
- (id)initWithHealthDataSource:(id)arg1;
- (id)strongHealthDataSource;
- (id)weakHealthDataSource;

@end
