
@interface FAFamilyPaymentInfoResponse : AAResponse {
    FAFamilyCreditCard * _creditCard;
}

@property (nonatomic, retain) FAFamilyCreditCard *creditCard;

- (void).cxx_destruct;
- (id)creditCard;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void)setCreditCard:(id)arg1;

@end
