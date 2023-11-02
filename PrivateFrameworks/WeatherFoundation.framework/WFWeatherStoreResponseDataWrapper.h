
@interface WFWeatherStoreResponseDataWrapper : NSObject {
    WFAQIScale * _aqiScale;
    WFParsedForecastData * _forecastData;
    unsigned long long  _requestType;
}

@property (nonatomic, retain) WFAQIScale *aqiScale;
@property (nonatomic, retain) WFParsedForecastData *forecastData;
@property (nonatomic) unsigned long long requestType;

- (void).cxx_destruct;
- (id)aqiScale;
- (id)forecastData;
- (id)initWithAQIScale:(id)arg1;
- (id)initWithForecastData:(id)arg1;
- (unsigned long long)requestType;
- (void)setAqiScale:(id)arg1;
- (void)setForecastData:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;

@end
