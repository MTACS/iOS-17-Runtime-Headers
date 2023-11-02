
@interface DEDHomeKitManager : NSObject {
    HMHomeManager * _homeKitManager;
}

@property (readonly) NSString *homeKitIdentifier;
@property (retain) HMHomeManager *homeKitManager;
@property (readonly) NSString *homeTheaterSystemIdentifier;
@property (readonly) NSString *homeTheaterSystemName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)homeKitIdentifier;
- (id)homeKitManager;
- (id)homeTheaterSystemIdentifier;
- (id)homeTheaterSystemName;
- (bool)isHomeKitResident;
- (void)setHomeKitManager:(id)arg1;
- (void)start;
- (id)stringForAirPlayPreference:(id)arg1;

@end
