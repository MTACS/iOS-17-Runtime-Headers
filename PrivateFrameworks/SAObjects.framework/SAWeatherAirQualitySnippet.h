
@interface SAWeatherAirQualitySnippet : SAUISnippet

@property (nonatomic, copy) NSArray *aceAirQualities;
@property (nonatomic, retain) SAUIAppPunchOut *appPunchOut;
@property (nonatomic, retain) SAUIImageResource *attributionImage;

+ (id)airQualitySnippet;
+ (id)airQualitySnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceAirQualities;
- (id)appPunchOut;
- (id)attributionImage;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAceAirQualities:(id)arg1;
- (void)setAppPunchOut:(id)arg1;
- (void)setAttributionImage:(id)arg1;

@end
