
@interface CRKConcreteProcessPrimitives : NSObject <CRKProcessPrimitives>

- (bool)processExistsWithIdentifier:(int)arg1;
- (id)subscribeToExitForProcessWithIdentifier:(int)arg1 exitHandler:(id /* block */)arg2;

@end
