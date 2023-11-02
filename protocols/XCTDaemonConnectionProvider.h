
@protocol XCTDaemonConnectionProvider <NSObject>

@required

- (NSXPCConnection *)makeNewDaemonConnectionWithServiceName:(NSString *)arg1;

@end
