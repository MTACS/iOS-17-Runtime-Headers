
@protocol BLSHAssertionAttributeHandler <NSObject>

@required

- (void)activateAttributes:(NSArray *)arg1 fromAssertion:(id <BLSAssertionServiceResponding>)arg2 forService:(id <BLSHAssertionAttributeHandlerService>)arg3;
- (void)deactivateAttributes:(NSArray *)arg1 fromAssertion:(id <BLSAssertionServiceResponding>)arg2 forService:(id <BLSHAssertionAttributeHandlerService>)arg3;

@end
