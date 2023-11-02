
@interface NTKStopwatchComplicationController : NTKComplicationController <CLKUITimeTravel> {
    NSDate * _timeTravelDate;
}

@property (nonatomic, readonly) <NTKStopwatchComplicationDisplay> *legacyDisplay;
@property (nonatomic, retain) NSDate *timeTravelDate;

+ (bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_activate;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_deactivate;
- (void)_handleStopwatchChange;
- (void)_updateDisplay;
- (id)complicationApplicationIdentifier;
- (bool)hasTapAction;
- (void)performTapActionForDisplayWrapper:(id)arg1;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (void)setTimeTravelDate:(id)arg1;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;
- (id)timeTravelDate;

@end
