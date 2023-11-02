
@interface DOCPostLaunchBuffer : DOCOperationBuffer

+ (id)shared;

- (id)initWithLabel:(id)arg1 targetQueue:(id)arg2;
- (void)performAfterLaunch:(id /* block */)arg1;
- (void)performAfterLaunchAlwaysAsync:(bool)arg1 block:(id /* block */)arg2;

@end
