
@interface NWCFiveHourForecastPrecipitationView : NWCFiveHourForecastConditionGlyphView {
    NWMPrecipitationFormatter * _formatter;
}

@property (nonatomic, retain) NWMPrecipitationFormatter *formatter;

- (void).cxx_destruct;
- (id)_setupViewBuilderForDevice:(id)arg1;
- (id)dataFormatter;
- (id)formatter;
- (void)setFormatter:(id)arg1;

@end
