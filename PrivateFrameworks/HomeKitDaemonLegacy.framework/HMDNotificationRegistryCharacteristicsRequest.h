
@interface HMDNotificationRegistryCharacteristicsRequest : HMDNotificationRegistryRequest {
    NSUUID * _accessoryUUID;
    NSMutableSet * _characteristicInstanceIDs;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (retain) NSMutableSet *characteristicInstanceIDs;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)characteristicInstanceIDs;
- (id)initWithEnable:(bool)arg1 userID:(id)arg2 accessoryUUID:(id)arg3;
- (void)setCharacteristicInstanceIDs:(id)arg1;

@end
