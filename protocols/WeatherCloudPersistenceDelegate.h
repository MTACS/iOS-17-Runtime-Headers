
@protocol WeatherCloudPersistenceDelegate <NSObject>

@required

- (void)cloudPersistenceDidSynchronize:(id <WeatherPreferencesPersistence>)arg1;

@end
