
@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing> {
    <CRSCardServing> * _cardService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeCardServiceWithClass:(Class)arg1;
- (bool)canSatisfyCardRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForRequest:(id)arg1;
- (id)underlyingService;

@end
