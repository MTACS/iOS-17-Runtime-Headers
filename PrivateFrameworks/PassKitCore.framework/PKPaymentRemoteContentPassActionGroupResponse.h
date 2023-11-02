
@interface PKPaymentRemoteContentPassActionGroupResponse : PKPaymentWebServiceResponse {
    PKPaymentPassActionGroup * _updatedActionGroup;
}

@property (nonatomic, retain) PKPaymentPassActionGroup *updatedActionGroup;

- (void).cxx_destruct;
- (id)initWithExistingActionGroup:(id)arg1 data:(id)arg2;
- (void)setUpdatedActionGroup:(id)arg1;
- (id)updatedActionGroup;

@end
