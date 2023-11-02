
@interface BLSHDisableFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    <BLSHDisableFlipbookProvider> * _provider;
}

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;

- (void).cxx_destruct;
- (void)activateWithFirstEntry:(id)arg1;
- (void)deactivateWithFinalEntry:(id)arg1;

@end
