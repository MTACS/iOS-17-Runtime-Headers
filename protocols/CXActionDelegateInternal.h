
@protocol CXActionDelegateInternal <NSObject>

@required

- (<CXAbstractProviderHostProtocol> *)hostProtocolDelegate;
- (void)performAction:(CXAction *)arg1;

@end
