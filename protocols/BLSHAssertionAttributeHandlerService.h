
@protocol BLSHAssertionAttributeHandlerService <BLSAssertionService>

@required

- (<BLSHOSInterfaceProviding> *)osInterfaceProvider;
- (void)pauseAssertion:(id <BLSAssertionServiceResponding>)arg1;
- (void)resumeAssertion:(id <BLSAssertionServiceResponding>)arg1;
- (void)willCancelAssertion:(id <BLSAssertionServiceResponding>)arg1;

@end
