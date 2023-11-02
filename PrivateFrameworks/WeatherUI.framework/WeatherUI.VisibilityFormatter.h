
@interface WeatherUI.VisibilityFormatter : NSMeasurementFormatter

@property (nonatomic, copy) NSLocale *locale;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;

@end
