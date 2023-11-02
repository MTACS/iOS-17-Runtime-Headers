
@interface MUPlaceRibbonEVChargingViewModel : MUPlaceRibbonItemViewModel <MapsUI.MUEVChargerAvailabilityProviderObserver> {
    _TtC6MapsUI31MUEVChargerAvailabilityProvider * _availabilityProvider;
}

@property (nonatomic, retain) _TtC6MapsUI31MUEVChargerAvailabilityProvider *availabilityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)attributedStringFromString:(id)arg1 color:(id)arg2;

- (void).cxx_destruct;
- (void)_updateStringProviders;
- (id)availabilityProvider;
- (void)dealloc;
- (void)evChargerAvailabilityProvider:(id)arg1 didUpdateAvailability:(id)arg2;
- (id)initWithAvailabilityProvider:(id)arg1;
- (void)setAvailabilityProvider:(id)arg1;

@end
