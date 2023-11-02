
@interface CLIntersiloProxyToRecipient : CLIntersiloProxy {
    CLIntersiloProxy * _peer;
}

@property (nonatomic, readonly) CLIntersiloProxy *peer;

- (void).cxx_destruct;
- (id)initWithUninitializedPeer:(id)arg1;
- (id)peer;

@end
