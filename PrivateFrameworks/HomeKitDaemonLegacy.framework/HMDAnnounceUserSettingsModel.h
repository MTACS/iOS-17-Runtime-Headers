
@interface HMDAnnounceUserSettingsModel : HMDBackingStoreModelObject

@property (copy) NSNumber *announceNotificationModeForCurrentDevice;

+ (id)modelIDNamespace;
+ (id)properties;

- (id)initWithUserUUID:(id)arg1;
- (id)modelIDForUser:(id)arg1;

@end
