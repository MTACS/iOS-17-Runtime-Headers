
@protocol RBConcreteTargeting <NSObject>

@required

- (RBSTarget *)createRBSTarget;
- (NSString *)environment;
- (RBSProcessIdentity *)identity;
- (bool)isSystem;
- (RBProcess *)process;

@end
