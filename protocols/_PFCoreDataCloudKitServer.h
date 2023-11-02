
@protocol _PFCoreDataCloudKitServer

@required

- (PFCloudKitContainerProvider *)containerProvider;
- (CKScheduler *)scheduler;
- (void)setUp;
- (void)tearDown;

@end
