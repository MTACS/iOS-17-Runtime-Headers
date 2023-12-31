
@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)XPCInterface;
+ (id)proxyWithTarget:(id)arg1;

- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)arg1;
- (id)invalidate;

@end
