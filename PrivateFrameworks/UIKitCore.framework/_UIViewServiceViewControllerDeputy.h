
@interface _UIViewServiceViewControllerDeputy : _UITargetedProxy <_UIViewServiceDeputy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)deputyWithViewController:(id)arg1;

- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (id)invalidate;

@end
