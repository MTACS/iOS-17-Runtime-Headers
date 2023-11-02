
@interface SSUIServiceServer : FBSServiceFacility {
    <SSUIServiceServerDelegate> * _delegate;
}

@property (nonatomic) <SSUIServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_handleHasAnySSUIServiceEntitlement:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
