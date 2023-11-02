
@interface CSLookSettings : PTSettings {
    bool  _customizesDateTime;
    bool  _subtitleAboveTime;
    NSString * _timeFontDesign;
    double  _timeFontSize;
    double  _timeFontWeight;
    bool  _useSettingsDateTime;
}

@property (nonatomic) bool customizesDateTime;
@property (nonatomic) bool subtitleAboveTime;
@property (nonatomic) NSString *timeFontDesign;
@property (nonatomic) double timeFontSize;
@property (nonatomic) double timeFontWeight;
@property (nonatomic) bool useSettingsDateTime;

+ (id)settingsControllerModule;

- (id)customTimeFont;
- (bool)customizesDateTime;
- (void)setCustomizesDateTime:(bool)arg1;
- (void)setDefaultValues;
- (void)setSubtitleAboveTime:(bool)arg1;
- (void)setTimeFontDesign:(id)arg1;
- (void)setTimeFontSize:(double)arg1;
- (void)setTimeFontWeight:(double)arg1;
- (void)setUseSettingsDateTime:(bool)arg1;
- (bool)subtitleAboveTime;
- (id)timeFontDesign;
- (double)timeFontSize;
- (double)timeFontWeight;
- (bool)useSettingsDateTime;

@end
