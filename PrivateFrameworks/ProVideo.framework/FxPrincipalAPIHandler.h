
@interface FxPrincipalAPIHandler : NSObject <PROAPIObject> {
    NSObject<FxPlugPrincipalDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)servicePrincipal;
- (void)setDelegate:(id)arg1;

@end
