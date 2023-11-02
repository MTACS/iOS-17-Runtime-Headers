
@protocol APXPCActionRequesterProtocol <NSObject>

@required

+ (bool)canShareConnection;
+ (NSString *)machService;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (NSUUID *)delegateID;
- (Protocol *)remoteObjectInterface;

@optional

- (Protocol *)exportedInterface;
- (id)exportedObject;
- (void)extendCollectionClassesForExportedInterface:(NSXPCInterface *)arg1;
- (void)extendCollectionClassesForRemoteInterface:(NSXPCInterface *)arg1;

@end
