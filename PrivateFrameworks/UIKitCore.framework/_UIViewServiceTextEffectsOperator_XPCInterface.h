
@interface _UIViewServiceTextEffectsOperator_XPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)connectionInvocation;
- (id)connectionProtocol;
- (SEL)connectionSelector;
- (id)exportedInterface;
- (id)hostObjectInterface;

@end
