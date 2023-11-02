
@interface BLSHDisableFlipbookPowerSavingAttributeHandler : NSObject <BLSHAssertionAttributeHandler> {
    <BLSHFlipbookPowerSavingProviding> * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;

- (void).cxx_destruct;
- (void)activateAttributes:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)deactivateAttributes:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (id)initForService:(id)arg1 provider:(id)arg2;

@end
