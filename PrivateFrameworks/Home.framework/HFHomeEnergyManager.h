
@interface HFHomeEnergyManager : NSObject {
    void cachedHomeEnergyAvailable;
    void home;
    void isHomeEnergyAvailable;
    void temporaryLocation;
}

@property (nonatomic, readonly) bool effectiveHomeEnergyAvailable;
@property (nonatomic, readonly) bool hasLoadedHomeEnergyAvailable;
@property (nonatomic, readonly) bool isHomeEnergyAvailableInCurrentLocale;
@property (nonatomic, readonly) bool isHomeEnergyEnabled;
@property (nonatomic) bool isHomeEnergyVisible;
@property (nonatomic, retain) CLLocation *temporaryLocation;

+ (bool)isSupportedInRegion:(id)arg1;

- (void).cxx_destruct;
- (bool)effectiveHomeEnergyAvailable;
- (bool)hasLoadedHomeEnergyAvailable;
- (id)init;
- (id)initWithHome:(id)arg1;
- (bool)isHomeEnergyAvailableInCurrentLocale;
- (void)isHomeEnergyAvailableInRegionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (bool)isHomeEnergyEnabled;
- (bool)isHomeEnergyVisible;
- (bool)isLocaleSupportingHomeEnergy;
- (void)setIsHomeEnergyVisible:(bool)arg1;
- (void)setTemporaryLocation:(id)arg1;
- (id)temporaryLocation;
- (void)updateIsHomeEnergyEnabledWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
