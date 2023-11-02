
@interface SACInfoListener : NSObject <SACServiceInfoDelegate> {
    <SACInfoDelegate> * _delegate;
    <SACServiceDelegate> * mProxyInterface;
    NSXPCConnection * mServiceConnection;
    unsigned long long  mVerbosity;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SACInfoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleSACInfo:(id)arg1;
- (void)handleServiceCrash;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setListenerVerbosity:(unsigned long long)arg1;
- (void)startServiceConnection;

@end
