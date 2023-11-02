
@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate> {
    HUQuickControlRingSliderView * _ringSliderView;
}

@property (nonatomic, readonly) HFRangeControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUQuickControlRingSliderView *ringSliderView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUQuickControlRingSliderViewProfile *viewProfile;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_getHeaterCoolerThresholdControlItemStateString:(out id*)arg1 temperatureString:(out id*)arg2 withRangeControlItemValue:(id)arg3;
- (void)_getTemperatureThresholdControlItemStateString:(out id*)arg1 temperatureString:(out id*)arg2 withRangeControlItemValue:(id)arg3;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (void)invalidateViewProfile;
- (void)modelValueDidChange;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (id)ringSliderView;
- (void)setRingSliderView:(id)arg1;
- (void)updateMainStatusStringWithValue:(id)arg1;
- (void)updateSupplementaryValue;

@end
