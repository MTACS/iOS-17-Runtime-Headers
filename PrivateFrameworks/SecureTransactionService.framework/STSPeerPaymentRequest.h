
@interface STSPeerPaymentRequest : NSObject <NSSecureCoding> {
    STSMerchantPaymentRequest * _topUpRequest;
    STSPeerPaymentTransferRequest * _transferRequest;
}

@property (nonatomic, retain) STSMerchantPaymentRequest *topUpRequest;
@property (nonatomic, retain) STSPeerPaymentTransferRequest *transferRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferRequest:(id)arg1 topUpRequest:(id)arg2;
- (void)setTopUpRequest:(id)arg1;
- (void)setTransferRequest:(id)arg1;
- (id)toNFPeerPaymentRequest:(id)arg1;
- (id)topUpRequest;
- (id)transferRequest;

@end
