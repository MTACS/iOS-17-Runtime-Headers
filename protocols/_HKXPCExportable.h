
@protocol _HKXPCExportable <NSObject>

@required

- (void)connectionInvalidated;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)remoteInterface;

@optional

- (void)connectionConfigured;
- (void)connectionInterrupted;

@end
