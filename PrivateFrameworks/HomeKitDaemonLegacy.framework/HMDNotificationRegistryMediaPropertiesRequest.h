
@interface HMDNotificationRegistryMediaPropertiesRequest : HMDNotificationRegistryRequest {
    NSUUID * _mediaProfileUUID;
    NSMutableSet * _mediaProperties;
}

@property (readonly, copy) NSUUID *mediaProfileUUID;
@property (retain) NSMutableSet *mediaProperties;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(bool)arg1 userID:(id)arg2 mediaProfileUUID:(id)arg3;
- (id)mediaProfileUUID;
- (id)mediaProperties;
- (void)setMediaProperties:(id)arg1;

@end
