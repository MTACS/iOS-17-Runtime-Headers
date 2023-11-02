
@interface WeatherDaemon.WeatherDataServiceProxy : NSObject <WeatherDaemon.WeatherDataServiceProxyType> {
    void $__lazy_storage_$_airQualityScaleService;
    void $__lazy_storage_$_availabilityDataManager;
    void $__lazy_storage_$_availabilityService;
    void $__lazy_storage_$_dailyStatisticsService;
    void $__lazy_storage_$_dailySummaryService;
    void $__lazy_storage_$_dataManager;
    void $__lazy_storage_$_monthlyStatisticsService;
    void $__lazy_storage_$_session;
    void $__lazy_storage_$_statisticsDataManager;
    void $__lazy_storage_$_weatherAlertService;
    void $__lazy_storage_$_weatherService;
    void appConfigurationSettingsProvider;
    void authenticator;
    void availabilityRequestDeduper;
    void availableDataSetCaching;
    void caching;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endpoint;
    void networkMonitor;
    void statisticsCaching;
    void statisticsRequestDeduper;
    void weatherDataRequestDeduper;
    void weatherHistoryRequestDeduper;
    void weatherInstantRequestDeduper;
    void weatherInstantsRequestDeduper;
}

- (void).cxx_destruct;
- (void)fetchAirQualityScaleWith:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAvailableDataSetsWith:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchHistoricalWeatherWith:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchStatisticsWith:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)performRequestsWith:(id)arg1 completion:(id /* block */)arg2;

@end
