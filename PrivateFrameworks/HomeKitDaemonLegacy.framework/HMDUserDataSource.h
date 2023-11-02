
@interface HMDUserDataSource : NSObject <HMDUserDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isCurrentUser:(id)arg1;
- (id)userDataBackingStoreControllerWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 shareMessenger:(id)arg4;
- (id)userDataControllerWithDelegate:(id)arg1 dataSource:(id)arg2 queue:(id)arg3 userID:(id)arg4 homeID:(id)arg5 sharedSettingsController:(id)arg6 privateSettingsController:(id)arg7 isCurrentUser:(bool)arg8;

@end
