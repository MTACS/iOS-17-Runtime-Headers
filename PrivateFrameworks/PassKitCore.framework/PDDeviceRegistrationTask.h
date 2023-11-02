
@interface PDDeviceRegistrationTask : NSObject {
    NSURL * _brokerURL;
    NSMutableArray * _completionHandlers;
    NSString * _reason;
    bool  _shouldForceApplePay;
    bool  _shouldForcePeerPayment;
}

@property (nonatomic, copy) NSURL *brokerURL;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) bool shouldForceApplePay;
@property (nonatomic) bool shouldForcePeerPayment;

- (void).cxx_destruct;
- (id)brokerURL;
- (id)completionHandlers;
- (id)init;
- (id)reason;
- (void)setBrokerURL:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShouldForceApplePay:(bool)arg1;
- (void)setShouldForcePeerPayment:(bool)arg1;
- (bool)shouldForceApplePay;
- (bool)shouldForcePeerPayment;

@end
