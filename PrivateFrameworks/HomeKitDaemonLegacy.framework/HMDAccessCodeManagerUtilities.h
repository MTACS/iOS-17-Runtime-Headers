
@interface HMDAccessCodeManagerUtilities : HMFObject <HMDAccessCodeManagerUtilitiesProtocol, HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addedAccessoryAccessCodesFromModificationResponses:(id)arg1;
+ (bool)allModificationRequests:(id)arg1 areAddingAccessCode:(id)arg2;
+ (bool)anyModificationFailed:(id)arg1;
+ (id)filteredFetchResponses:(id)arg1 forUser:(id)arg2;
+ (id)logCategory;
+ (id)removedAccessoryAccessCodesFromModificationResponses:(id)arg1;
+ (id)updatedAccessoryAccessCodesFromModificationResponses:(id)arg1;

@end
