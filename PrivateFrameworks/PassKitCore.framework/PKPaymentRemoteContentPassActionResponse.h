
@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse {
    PKPaymentPassAction * _updatedAction;
}

@property (nonatomic, retain) PKPaymentPassAction *updatedAction;

- (void).cxx_destruct;
- (id)initWithExistingAction:(id)arg1 data:(id)arg2;
- (void)setUpdatedAction:(id)arg1;
- (id)updatedAction;

@end
