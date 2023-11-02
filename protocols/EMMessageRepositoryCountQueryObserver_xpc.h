
@protocol EMMessageRepositoryCountQueryObserver_xpc <NSObject>

@required

- (void)countDidChange:(long long)arg1 acknowledgementToken:(id <EFInvocable>)arg2;

@end
