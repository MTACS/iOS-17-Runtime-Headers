
@interface MGZone : MGGroup

+ (id)predicateForCurrentDevice;
+ (id)predicateForType;
+ (id)type;

- (id)HomeKitZoneIdentifier;
- (id)HomeKitZoneWithHomeManager:(id)arg1;
- (id)initWithClientService:(id)arg1 zone:(id)arg2 home:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 zone:(id)arg2 home:(id)arg3;

@end
