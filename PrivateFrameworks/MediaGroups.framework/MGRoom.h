
@interface MGRoom : MGGroup

+ (id)predicateForCurrentDevice;
+ (id)predicateForType;
+ (id)type;

- (id)HomeKitRoomIdentifier;
- (id)HomeKitRoomWithHomeManager:(id)arg1;
- (id)initWithClientService:(id)arg1 room:(id)arg2 home:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 room:(id)arg2 home:(id)arg3;

@end
