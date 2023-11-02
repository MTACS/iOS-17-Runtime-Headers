
@protocol BLSHLocalAssertionAttributeHandlerEntry <BSInvalidatable>

@required

+ (id)activateForAttribute:(BLSAttribute *)arg1 fromAssertion:(id <BLSAssertionServiceResponding>)arg2 forService:(id <BLSHAssertionAttributeHandlerService>)arg3 attributeHandler:(id <BLSHAssertionAttributeHandler>)arg4;

- (<BLSAssertionServiceResponding> *)assertion;
- (BLSAttribute *)attribute;
- (bool)reactivateIfPossible;
- (<BLSHAssertionAttributeHandlerService> *)service;

@end
