
@protocol BSXPCServiceConnectionParent <NSObject>

@required

- (void)_invalidateChildConnection:(BSXPCServiceConnection *)arg1;
- (bool)_isClientInvalidated;
- (bool)_isInvalidated;

@end
