
@interface NTKBlackcombColorPalette : NTKFaceColorPalette <NTKBlackcombColorPalette> {
    unsigned long long  _dialColorStyle;
    NTKInterpolatedColorPalette * _dialColorTransitionalPalette;
}

@property (nonatomic, readonly) UIColor *background;
@property (nonatomic, readonly) UIColor *complication;
@property (nonatomic, readonly) UIColor *darkBackground;
@property (nonatomic, readonly) UIColor *darkHourMarker;
@property (nonatomic, readonly) UIColor *darkLargeTick;
@property (nonatomic, readonly) UIColor *darkPlatterText;
@property (nonatomic, readonly) UIColor *darkSmallTick;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long dialColorStyle;
@property (nonatomic, retain) NTKInterpolatedColorPalette *dialColorTransitionalPalette;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *hourMarker;
@property (nonatomic, readonly) UIColor *largeTick;
@property (nonatomic, readonly) UIColor *lightBackground;
@property (nonatomic, readonly) UIColor *lightHourMarker;
@property (nonatomic, readonly) UIColor *lightLargeTick;
@property (nonatomic, readonly) UIColor *lightPlatterText;
@property (nonatomic, readonly) UIColor *lightSmallTick;
@property (nonatomic, readonly) UIColor *platterText;
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *primaryShiftedColor;
@property (nonatomic, readonly) long long richComplicationViewTheme;
@property (nonatomic, readonly) UIColor *secondHand;
@property (nonatomic, readonly) UIColor *secondaryColor;
@property (nonatomic, readonly) UIColor *secondaryShiftedColor;
@property (nonatomic, readonly) UIColor *smallTick;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *swatch;

- (void).cxx_destruct;
- (id)_background;
- (id)_complication;
- (id)_hourMarker;
- (id)_largeTick;
- (id)_platterText;
- (id)_secondHand;
- (id)_smallTick;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dialColorStyle;
- (id)dialColorTransitionalPalette;
- (id)identifier;
- (id)init;
- (long long)richComplicationViewTheme;
- (void)setDialColorStyle:(unsigned long long)arg1;
- (void)setDialColorTransitionalPalette:(id)arg1;
- (id)transitionalPaletteFromDialColor:(unsigned long long)arg1 toDialColor:(unsigned long long)arg2;
- (id)tritiumPalette;

@end
