
@protocol DBGDataSourceConnectionDelegate <NSObject>

@required

- (void)didReceiveData:(NSData *)arg1 forRequest:(DebugHierarchyRequest *)arg2;

@end
