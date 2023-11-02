
@interface HMDHomeLockNotificationManagerDataSource : HMFObject <HMDHomeLockNotificationManagerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isResidentCapable, readonly) bool residentCapable;
@property (readonly) Class superclass;

- (bool)isResidentCapable;

@end
