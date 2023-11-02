
@interface NTKDateComplicationController : NTKComplicationController <CLKUITimeTravel> {
    unsigned long long  _displayDateStyle;
    NSDate * _timeTravelDate;
}

@property (nonatomic, readonly) NTKDateComplication *complication;
@property (nonatomic, readonly) <NTKDateComplicationDisplay> *legacyDisplay;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_textForDate:(id)arg1 dateStyle:(unsigned long long)arg2;
+ (id)textForDateStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleTimeChangeNotification;
- (void)_setTextInDisplayIfNeededWithDate:(id)arg1;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (bool)hasTapAction;
- (void)performTapActionForDisplayWrapper:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
