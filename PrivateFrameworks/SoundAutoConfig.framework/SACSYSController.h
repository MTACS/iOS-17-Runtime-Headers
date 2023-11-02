
@interface SACSYSController : NSObject <SACServiceSYSDelegate> {
    <SACSYSDelegate> * _delegate;
    <SACServiceDelegate> * mProxyInterface;
    <SACServiceSYSDelegate> * mSACSYSDelegate;
    NSXPCConnection * mServiceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SACSYSDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleServiceCrash;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setSYSConfig:(id)arg1;
- (void)startServiceConnection;

@end
