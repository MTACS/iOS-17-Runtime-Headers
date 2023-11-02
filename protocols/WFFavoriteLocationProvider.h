
@protocol WFFavoriteLocationProvider <NSObject>

@required

- (void)addLocation:(WFLocation *)arg1;
- (<WFFavoriteLocationProviderDelegate> *)delegate;
- (id)initWithDelegate:(id <WFFavoriteLocationProviderDelegate>)arg1 persistence:(id <WeatherPreferencesPersistence>)arg2;
- (NSArray *)locations;
- (void)removeLocation:(WFLocation *)arg1;
- (void)setDelegate:(id <WFFavoriteLocationProviderDelegate>)arg1;
- (void)setLocations:(NSArray *)arg1;

@optional

- (NSOperation *)migrationOperation;

@end
