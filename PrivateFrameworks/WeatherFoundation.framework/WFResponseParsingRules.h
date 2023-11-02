
@interface WFResponseParsingRules : NSObject {
    <WFSettings> * _settings;
}

@property (nonatomic, readonly) <WFSettings> *settings;

+ (bool)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2;

- (void).cxx_destruct;
- (bool)aqiEnabledForCountryCode:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)settings;

@end
