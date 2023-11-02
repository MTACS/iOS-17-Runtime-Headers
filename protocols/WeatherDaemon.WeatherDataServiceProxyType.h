
@protocol WeatherDaemon.WeatherDataServiceProxyType

@required

- (void)fetchAirQualityScaleWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _TtC13WeatherDaemon27AirQualityScaleProxyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC13WeatherDaemon28AirQualityScaleProxyResponse *, void*
- (void)fetchAvailableDataSetsWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _TtC13WeatherDaemon24AvailabilityProxyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC13WeatherDaemon25AvailabilityProxyResponse *, void*
- (void)fetchHistoricalWeatherWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _TtC13WeatherDaemon33HistoricalWeatherDataProxyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC13WeatherDaemon34HistoricalWeatherDataProxyResponse *, void*
- (void)fetchStatisticsWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _TtC13WeatherDaemon29WeatherStatisticsProxyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC13WeatherDaemon30WeatherStatisticsProxyResponse *, void*
- (void)performRequestsWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: _TtC13WeatherDaemon23WeatherDataProxyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC13WeatherDaemon24WeatherDataProxyResponse *, void*

@end
