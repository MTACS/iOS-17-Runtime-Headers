
@interface MapsUI.MUEVChargerAvailabilityProvider : NSObject <MapsUI.EVChargerAvailabilityDownloaderDelegate, VGVirtualGarageObserver> {
    void availability;
    void availabilityRefresher;
    void evCharger;
    void isActive;
    void observers;
    void virtualGarage;
    void virtualGarageService;
}

@property (nonatomic, retain) _TtC6MapsUI23MUEVChargerAvailability *availability;
@property (nonatomic) bool isActive;

- (void).cxx_destruct;
- (id)availability;
- (void)dealloc;
- (void)didDownloadEVChargerAvailabilityWithEvCharger:(id)arg1;
- (id)init;
- (id)initWithPlaceItem:(id)arg1 canAccessVirtualGarage:(bool)arg2;
- (bool)isActive;
- (void)registerObserver:(id)arg1;
- (void)setAvailability:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)virtualGarageDidUpdate:(id)arg1;

@end
