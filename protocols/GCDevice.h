
@protocol GCDevice <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)handlerQueue;
- (GCPhysicalInputProfile *)physicalInputProfile;
- (NSString *)productCategory;
- (void)setHandlerQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSString *)vendorName;

@end
