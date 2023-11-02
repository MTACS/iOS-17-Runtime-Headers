
@interface DNDSLocationTriggerConfiguration : NSObject {
    NSMutableDictionary * _modeIdentifierByRegionIdentifier;
    NSMutableDictionary * _regionByRegionIdentifier;
}

+ (id)emptyConfiguration;

- (void).cxx_destruct;
- (void)addTriggerForModeWithIdentifier:(id)arg1 forRegion:(id)arg2;
- (id)init;
- (id)modeIdentifierForRegion:(id)arg1;
- (id)regionForRegionIdentifier:(id)arg1;
- (id)regionIdentifiers;
- (id)regions;

@end
