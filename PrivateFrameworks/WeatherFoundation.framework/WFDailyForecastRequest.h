
@interface WFDailyForecastRequest : WFAggregateForecastRequest {
    NSLocale * _locale;
}

@property (nonatomic, retain) NSLocale *locale;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)startWithService:(id)arg1;

@end
