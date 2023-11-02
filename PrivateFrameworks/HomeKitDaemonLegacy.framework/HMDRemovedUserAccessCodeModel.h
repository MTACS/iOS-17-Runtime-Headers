
@interface HMDRemovedUserAccessCodeModel : HMDBackingStoreModelObject

@property (copy) NSString *accessCode;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
@property (retain) NSData *removedUserInfoData;

+ (id)modelUUIDForHomeUUID:(id)arg1 removedUserInfo:(id)arg2 accessCode:(id)arg3;
+ (id)properties;

- (id)initWithRemovedUserInfo:(id)arg1 accessCode:(id)arg2 homeUUID:(id)arg3;
- (id)removedUserInfo;

@end
