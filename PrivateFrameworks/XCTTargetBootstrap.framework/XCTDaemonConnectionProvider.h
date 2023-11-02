
@interface XCTDaemonConnectionProvider : NSObject <XCTDaemonConnectionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)makeNewDaemonConnectionWithServiceName:(id)arg1;

@end
