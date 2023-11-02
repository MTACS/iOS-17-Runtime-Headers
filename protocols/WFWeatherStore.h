
@protocol WFWeatherStore <NSObject>

@required

- (void)airQualityForLocation:(void *)arg1 locale:(void *)arg2 requestIdentifier:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: WFLocation *, NSLocale *, NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)dailyForecastForLocation:(void *)arg1 locale:(void *)arg2 requestIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WFLocation *, id, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)forecast:(void *)arg1 forLocation:(void *)arg2 locale:(void *)arg3 requestIdentifier:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: unsigned long long, WFLocation *, NSLocale *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)forecast:(void *)arg1 forLocation:(void *)arg2 withUnits:(void *)arg3 locale:(void *)arg4 requestIdentifier:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: unsigned long long, WFLocation *, int, NSLocale *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)forecast:(void *)arg1 forLocation:(void *)arg2 withUnits:(void *)arg3 locale:(void *)arg4 requestIdentifier:(void *)arg5 requestOptions:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: unsigned long long, WFLocation *, int, NSLocale *, NSUUID *, WFRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)forecastForLocation:(void *)arg1 locale:(void *)arg2 onDate:(void *)arg3 requestIdentifier:(void *)arg4 options:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 11: WFLocation *, id, NSDate *, NSUUID *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*
- (void)hourlyForecastForLocation:(void *)arg1 locale:(void *)arg2 requestIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: WFLocation *, id, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFResponse *, void*

@end
