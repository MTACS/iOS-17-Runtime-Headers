
@interface AMSEngagementExtensionConnection : NSObject <_EXMainConnectionHandler> {
    id  _principalObject;
}

@property (readonly) id principalObject;

- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)arg1;
- (void)performRequestWithObject:(id)arg1 completion:(id /* block */)arg2;
- (id)principalObject;
- (bool)shouldAcceptXPCConnection:(id)arg1;

@end
