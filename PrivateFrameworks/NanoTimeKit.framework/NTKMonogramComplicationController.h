
@interface NTKMonogramComplicationController : NTKComplicationController <CLKUITimeTravel> {
    NSString * _monogramText;
}

@property (nonatomic, readonly) <NTKMonogramComplicationDisplay> *legacyDisplay;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (void)_updateDisplay;
- (bool)hasTapAction;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
