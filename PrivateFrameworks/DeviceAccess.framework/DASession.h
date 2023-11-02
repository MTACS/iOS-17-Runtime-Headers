
@interface DASession : NSObject <KmlSessionCallbacks, NSSecureCoding> {
    NSXPCConnection * _clientConnection;
    bool  _hasEnded;
    DASessionInternal * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)didEnd:(id)arg1;
- (void)didStart:(bool)arg1;
- (void)dispatchOnCallbackQueue:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endSession;
- (id)getDelegate;
- (id)getRemoteProxy:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setProxy:(id)arg1;

@end
