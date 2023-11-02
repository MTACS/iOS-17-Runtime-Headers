
@protocol LiveFSConnectorMaker

@required

+ (id)newExportObjectForObject:(NSObject *)arg1 connection:(NSXPCConnection *)arg2 error:(id*)arg3;

- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;

@end
