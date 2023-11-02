
@protocol HMDAccessCodeManagerUtilitiesProtocol <NSObject>

@optional

+ (NSString *)accessCodeForUserWithUUID:(NSUUID *)arg1 inHome:(HMDHome *)arg2;
+ (NSArray *)addedAccessoryAccessCodesFromModificationResponses:(NSArray *)arg1;
+ (bool)allModificationRequests:(NSArray *)arg1 areAddingAccessCode:(NSString *)arg2;
+ (bool)anyModificationFailed:(NSArray *)arg1;
+ (NSArray *)filteredFetchResponses:(NSArray *)arg1 forUser:(HMDUser *)arg2;
+ (HMAccessCodeValue *)generateAccessCodeValueFromConstraints:(NSArray *)arg1 accessoryAccessCodes:(NSArray *)arg2 homeAccessCodes:(NSArray *)arg3;
+ (NSArray *)removedAccessoryAccessCodesFromModificationResponses:(NSArray *)arg1;
+ (NSArray *)updatedAccessoryAccessCodesFromModificationResponses:(NSArray *)arg1;

@end
