
@interface WeatherOpenURLHelper : NSObject

+ (id)URLForCity:(id)arg1;
+ (id)URLForWeatherCityComponents:(id)arg1;
+ (id)cityFromURL:(id)arg1 withContainerViewController:(id)arg2;
+ (id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2;
+ (void)displayCity:(id)arg1 usingController:(id)arg2 completion:(id /* block */)arg3;
+ (bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2;
+ (bool)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2;
+ (id)transientCityFromURLComponents:(id)arg1;

@end
