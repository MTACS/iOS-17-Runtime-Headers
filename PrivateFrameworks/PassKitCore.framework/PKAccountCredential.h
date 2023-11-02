
@interface PKAccountCredential : PKPaymentCredential {
    PKAccount * _account;
    PKAccountWebServicePassDetailsResponse * _passDetailsResponse;
    PKPaymentPass * _paymentPass;
    NSString * _sharingInstanceIdentifier;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly, copy) NSString *ownershipTokenIdentifier;
@property (nonatomic, retain) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)account;
- (id)detailDescription;
- (unsigned long long)hash;
- (id)initWithAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)longDescription;
- (id)ownershipTokenIdentifier;
- (id)passDetailsResponse;
- (id)paymentPass;
- (void)setPassDetailsResponse:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (id)sharingInstanceIdentifier;
- (bool)supportsSuperEasyProvisioning;

@end
