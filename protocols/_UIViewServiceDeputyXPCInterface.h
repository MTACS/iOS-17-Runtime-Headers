
@protocol _UIViewServiceDeputyXPCInterface <NSObject>

@required

- (NSInvocation *)connectionInvocation;
- (Protocol *)connectionProtocol;
- (SEL)connectionSelector;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)hostObjectInterface;

@end
