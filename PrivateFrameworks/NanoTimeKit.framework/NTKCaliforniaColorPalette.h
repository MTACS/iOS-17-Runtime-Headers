
@interface NTKCaliforniaColorPalette : NTKFaceColorPalette <NTKCaliforniaColorPalette, NTKCircularAnalogDialColorPalette>

@property (nonatomic, readonly) UIColor *background;
@property (nonatomic, readonly) UIColor *bezelComplication;
@property (nonatomic, readonly) UIColor *circularBackground;
@property (nonatomic, readonly) UIColor *circularComplication;
@property (nonatomic, readonly) UIColor *circularComplicationSecondary;
@property (nonatomic, readonly) UIColor *clockHands;
@property (nonatomic, readonly) UIColor *clockHandsInlay;
@property (nonatomic, readonly) UIColor *cornerComplication;
@property (nonatomic, readonly) UIColor *cornerComplicationSecondary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *digit;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBlackBackground;
@property (nonatomic, readonly) bool isMulticolorPalette;
@property (nonatomic, readonly) UIColor *largeTick;
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *primaryShiftedColor;
@property (nonatomic, readonly) long long richComplicationViewTheme;
@property (nonatomic, readonly) UIColor *secondHand;
@property (nonatomic, readonly) UIColor *secondaryColor;
@property (nonatomic, readonly) UIColor *secondaryShiftedColor;
@property (nonatomic, readonly) UIColor *simpleTextComplication;
@property (nonatomic, retain) UIColor *simpleTextComplicationColorValue;
@property (nonatomic, readonly) UIColor *smallTick;
@property (nonatomic, readonly) UIColor *smallTickCircular;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *swatch;

- (id)_background;
- (id)_bezelComplication;
- (id)_circularBackground;
- (id)_circularComplication;
- (id)_clockHands;
- (id)_clockHandsInlay;
- (id)_colorForCircularTicksForMinute:(unsigned long long)arg1;
- (id)_cornerComplication;
- (id)_digit;
- (id)_largeTick;
- (id)_simpleTextComplication;
- (id)_smallTick;
- (id)_smallTickCircular;
- (id)circularDialFillColor;
- (id)circularDialSubtickColor;
- (id)circularDialTickColor;
- (id)colorForCircularTicksForHour:(unsigned long long)arg1;
- (id)colorForCircularTicksForMinute:(unsigned long long)arg1;
- (id)colorForHourMarker:(unsigned long long)arg1;
- (id)digitColorAtIndex:(unsigned long long)arg1;
- (id)init;
- (bool)isBlackBackground;
- (bool)isLightColor;
- (bool)isMulticolorPalette;
- (long long)richComplicationViewTheme;
- (id)tritium_digit;
- (id)tritium_largeTick;
- (id)tritium_simpleTextComplication;
- (id)tritium_smallTick;

@end
