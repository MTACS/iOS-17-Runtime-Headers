
@protocol DSSharingPermissionsDetailDelegate <NSObject>

@required

- (DSSharingPermissions *)permissions;
- (void)sharingStoppedForPerson:(DSSharingPerson *)arg1 sourceNames:(NSArray *)arg2;
- (void)sharingStoppedForType:(DSSharingType *)arg1 people:(NSArray *)arg2;
- (void)stopSharingFailedWithError:(NSError *)arg1;
- (void)stopSharingFlowCompleted;

@end
