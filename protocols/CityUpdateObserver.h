
@protocol CityUpdateObserver <NSObject>

@optional

- (void)cityDidFinishWeatherUpdate:(City *)arg1;
- (void)cityDidStartWeatherUpdate:(City *)arg1;

@end
