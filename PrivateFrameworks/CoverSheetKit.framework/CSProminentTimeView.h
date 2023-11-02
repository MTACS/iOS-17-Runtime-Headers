
@interface CSProminentTimeView : CSProminentTextElementView {
    UIFont * _baseFont;
    bool  _fourDigitTime;
    NSString * _numberingSystem;
    NSDateFormatter * _timeFormatter;
    bool  _usesLandscapeTimeFontVariant;
    bool  _usesLightTimeFontVariant;
}

@property (nonatomic, retain) UIFont *baseFont;
@property (nonatomic) bool fourDigitTime;
@property (nonatomic, copy) NSString *numberingSystem;
@property (nonatomic, retain) NSDateFormatter *timeFormatter;
@property (nonatomic) bool usesLandscapeTimeFontVariant;
@property (nonatomic) bool usesLightTimeFontVariant;

+ (id)_lightVariantForBaseFont:(id)arg1 size:(double)arg2;
+ (id)_prominentFontFromBaseFont:(id)arg1 usingLightVariant:(bool)arg2 usingLandscapeVariant:(bool)arg3;
+ (unsigned long long)elementType;

- (void).cxx_destruct;
- (id)_correctedDateFormat;
- (id)_localeAccountingForNumberingSystem:(bool)arg1;
- (id)_timeString;
- (void)_updateTimeFormatter;
- (void)_updateTimeFormatterNumberingSystem;
- (void)_updateTimeString;
- (id)baseFont;
- (void)currentLocaleDidChange:(id)arg1;
- (void)dealloc;
- (bool)fourDigitTime;
- (id)initWithDate:(id)arg1 baseFont:(id)arg2 textColor:(id)arg3;
- (id)initWithDate:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)layoutSubviews;
- (id)numberingSystem;
- (void)setBaseFont:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFourDigitTime:(bool)arg1;
- (void)setNumberingSystem:(id)arg1;
- (void)setTimeFormatter:(id)arg1;
- (void)setUsesLandscapeTimeFontVariant:(bool)arg1;
- (void)setUsesLightTimeFontVariant:(bool)arg1;
- (id)timeFormatter;
- (bool)usesLandscapeTimeFontVariant;
- (bool)usesLightTimeFontVariant;

@end
