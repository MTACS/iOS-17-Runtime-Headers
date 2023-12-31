
@interface CRJSContext : JSContext

+ (id)sharedContext;

- (id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id*)arg4;
- (void)_createCard:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)evaluateScript:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithVirtualMachine:(id)arg1;

@end
