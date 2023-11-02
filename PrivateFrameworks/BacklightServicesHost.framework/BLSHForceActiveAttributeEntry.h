
@interface BLSHForceActiveAttributeEntry : NSObject <BLSHLocalAssertionAttributeHandlerEntry> {
    <BLSAssertionServiceResponding> * _assertion;
    BLSAttribute * _attribute;
    <BLSHAssertionAttributeHandlerService> * _service;
}

@property (nonatomic, readonly) <BLSAssertionServiceResponding> *assertion;
@property (nonatomic, readonly) BLSAttribute *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHAssertionAttributeHandlerService> *service;
@property (readonly) Class superclass;

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;

- (void).cxx_destruct;
- (id)assertion;
- (id)attribute;
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)invalidate;
- (bool)reactivateIfPossible;
- (id)service;

@end
