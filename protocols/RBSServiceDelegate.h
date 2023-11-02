
@protocol RBSServiceDelegate <NSObject>

@required

- (void)service:(RBSService *)arg1 didLoseInheritances:(NSSet *)arg2;
- (void)service:(RBSService *)arg1 didReceiveInheritances:(NSSet *)arg2;

@end
