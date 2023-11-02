
@interface CLIntersiloProxyToInitiator : CLIntersiloProxy {
    CLIntersiloProxy * _peer;
}

@property (nonatomic, readonly) CLIntersiloProxy *peer;

- (void).cxx_destruct;
- (id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2 uninitializedPeer:(id)arg3;
- (id)peer;

@end
