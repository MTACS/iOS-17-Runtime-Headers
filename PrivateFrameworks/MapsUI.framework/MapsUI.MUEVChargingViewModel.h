
@interface MapsUI.MUEVChargingViewModel : NSObject <MapsUI.MUEVChargerAvailabilityProviderObserver> {
    void availability;
    void availabilityProvider;
    void connectedVehiclesSectionGroups;
    void isActive;
    void observer;
    void otherPlugsSectionGroup;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)evChargerAvailabilityProvider:(id)arg1 didUpdateAvailability:(id)arg2;
- (id)init;

@end
