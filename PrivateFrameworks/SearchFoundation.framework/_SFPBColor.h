
@interface _SFPBColor : PBCodable <NSSecureCoding, _SFPBColor> {
    _SFPBGraphicalFloat * _alphaComponent;
    _SFPBAppColor * _appColor;
    _SFPBGraphicalFloat * _blueComponent;
    _SFPBCalendarColor * _calendarColor;
    int  _colorTintStyle;
    _SFPBColor * _darkModeColor;
    _SFPBGradientColor * _gradientColor;
    _SFPBGraphicalFloat * _greenComponent;
    _SFPBImageDerivedColor * _imageDerivedColor;
    _SFPBGraphicalFloat * _redComponent;
    _SFPBWeatherColor * _weatherColor;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBGraphicalFloat *alphaComponent;
@property (nonatomic, retain) _SFPBAppColor *appColor;
@property (nonatomic, retain) _SFPBGraphicalFloat *blueComponent;
@property (nonatomic, retain) _SFPBCalendarColor *calendarColor;
@property (nonatomic) int colorTintStyle;
@property (nonatomic, retain) _SFPBColor *darkModeColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBGradientColor *gradientColor;
@property (nonatomic, retain) _SFPBGraphicalFloat *greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImageDerivedColor *imageDerivedColor;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBGraphicalFloat *redComponent;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBWeatherColor *weatherColor;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)alphaComponent;
- (id)appColor;
- (id)blueComponent;
- (id)calendarColor;
- (int)colorTintStyle;
- (id)darkModeColor;
- (id)dictionaryRepresentation;
- (id)gradientColor;
- (id)greenComponent;
- (unsigned long long)hash;
- (id)imageDerivedColor;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)redComponent;
- (void)setAlphaComponent:(id)arg1;
- (void)setAppColor:(id)arg1;
- (void)setBlueComponent:(id)arg1;
- (void)setCalendarColor:(id)arg1;
- (void)setColorTintStyle:(int)arg1;
- (void)setDarkModeColor:(id)arg1;
- (void)setGradientColor:(id)arg1;
- (void)setGreenComponent:(id)arg1;
- (void)setImageDerivedColor:(id)arg1;
- (void)setRedComponent:(id)arg1;
- (void)setWeatherColor:(id)arg1;
- (id)weatherColor;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
