
@interface SAWeatherForecastSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *aceWeathers;
@property (nonatomic, retain) SAUIAppPunchOut *appPunchOut;
@property (nonatomic, retain) SAUIImageResource *attributionImage;

+ (id)forecastSnippet;
+ (id)forecastSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceWeathers;
- (id)appPunchOut;
- (id)attributionImage;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAceWeathers:(id)arg1;
- (void)setAppPunchOut:(id)arg1;
- (void)setAttributionImage:(id)arg1;

@end
