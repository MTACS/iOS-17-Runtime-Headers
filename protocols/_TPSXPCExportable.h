
@protocol _TPSXPCExportable <NSObject>

@required

- (void)connectionInvalidated;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)remoteInterface;

@optional

- (void)connectionConfigured;
- (void)connectionInterrupted;

@end
