
@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate> {
    Protocol * _restrictingProtocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRInvocationChainDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) Protocol *restrictingProtocol;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2;
- (bool)_selectorIsPartOfRestrictingProtocol:(SEL)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (id)init;
- (bool)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3;
- (bool)isEligibleForSelector:(SEL)arg1;
- (id)restrictingProtocol;
- (void)setRestrictingProtocol:(id)arg1;

@end
