
@interface CRSUIWallpaperPreferences : NSObject {
    CRVehicle * _vehicle;
    CRPairedVehicleManager * _vehicleManager;
}

@property (nonatomic, retain) CRSUIWallpaper *currentWallpaper;
@property (nonatomic, retain) CRVehicle *vehicle;
@property (nonatomic, retain) CRPairedVehicleManager *vehicleManager;

+ (id)_wallpaperWithIdentifier:(id)arg1;
+ (id)availableWallpapers;
+ (id)defaultWallpaper;
+ (id)wallpaperWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)currentWallpaper;
- (id)init;
- (void)setCurrentWallpaper:(id)arg1;
- (void)setVehicle:(id)arg1;
- (void)setVehicleManager:(id)arg1;
- (id)vehicle;
- (id)vehicleManager;

@end
