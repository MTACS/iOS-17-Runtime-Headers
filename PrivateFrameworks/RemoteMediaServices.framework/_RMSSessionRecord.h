
@interface _RMSSessionRecord : NSObject {
    TVRMSPowerAssertion * _powerAssertion;
    int  _refreshCount;
    TVRMSRunAssertion * _runAssertion;
    id  _session;
    int  _timeout;
}

@property (nonatomic, retain) TVRMSPowerAssertion *powerAssertion;
@property (nonatomic) int refreshCount;
@property (nonatomic, retain) TVRMSRunAssertion *runAssertion;
@property (nonatomic, retain) id session;
@property (nonatomic) int timeout;

- (void).cxx_destruct;
- (id)powerAssertion;
- (int)refreshCount;
- (id)runAssertion;
- (id)session;
- (void)setPowerAssertion:(id)arg1;
- (void)setRefreshCount:(int)arg1;
- (void)setRunAssertion:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeout:(int)arg1;
- (int)timeout;

@end
