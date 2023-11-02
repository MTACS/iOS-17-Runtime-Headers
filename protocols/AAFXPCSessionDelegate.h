
@protocol AAFXPCSessionDelegate <NSObject>

@optional

- (void)configureExportedInterface:(NSXPCInterface *)arg1;
- (void)configureRemoteInterface:(NSXPCInterface *)arg1;
- (NSObject *)exportedObject;
- (void)remoteServiceDidInterrupt;
- (void)remoteServiceDidInvalidate;

@end
