
@interface ANMessengerDestination : NSObject {
    NSArray * _accessories;
    NSArray * _devices;
    HMHome * _home;
    NSArray * _users;
}

@property (nonatomic, retain) NSArray *accessories;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSArray *users;

+ (id)_bestRemoteRelayAccessoryFromAccessories:(id)arg1 inHome:(id)arg2;
+ (id)_destinationForAppleAccessories:(id)arg1 home:(id)arg2 rooms:(id)arg3 rapportConnection:(id)arg4;
+ (id)destinationForAccessoriesInHome:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3;
+ (id)destinationForHome:(id)arg1 excludingUsers:(id)arg2 excludingAccessories:(id)arg3 rapportConnection:(id)arg4;
+ (id)relayDestinationForHome:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)accessories;
- (bool)addAccessory:(id)arg1;
- (bool)addDeviceWithID:(id)arg1 rapportConnection:(id)arg2;
- (bool)addUser:(id)arg1 inHome:(id)arg2;
- (void)addUser:(id)arg1 inHome:(id)arg2 rapportConnection:(id)arg3;
- (id)devices;
- (id)home;
- (id)idsIdentifiersForService:(id)arg1;
- (id)init;
- (id)participantsWithService:(id)arg1;
- (void)removeDeviceWithID:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)removeUser:(id)arg1 rapportConnection:(id)arg2;
- (void)setAccessories:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)users;

@end
