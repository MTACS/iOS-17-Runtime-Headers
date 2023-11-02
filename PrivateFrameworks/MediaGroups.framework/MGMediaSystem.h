
@interface MGMediaSystem : MGGroup <MGAirPlayMetadataProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)predicateForCurrentDevice;
+ (id)predicateForMediaSystem;
+ (id)predicateForType;
+ (id)type;

- (id)HomeKitMediaSystemIdentifier;
- (id)HomeKitMediaSystemWithHomeManager:(id)arg1;
- (id)initWithClientService:(id)arg1 mediaSystem:(id)arg2 home:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 mediaSystem:(id)arg2 home:(id)arg3;
- (id)syncUUID;

@end
