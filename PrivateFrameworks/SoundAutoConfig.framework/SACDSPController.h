
@interface SACDSPController : NSObject <SACServiceDSPDelegate> {
    <SACDSPDelegate> * _delegate;
    <SACServiceDelegate> * mProxyInterface;
    <SACServiceDSPDelegate> * mSACDSPDelegate;
    NSXPCConnection * mServiceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SACDSPDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)getDSPInfoByKey:(id)arg1 withReply:(id /* block */)arg2;
- (void)handleServiceCrash;
- (id)init;
- (void)setDSPConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startServiceConnection;

@end
