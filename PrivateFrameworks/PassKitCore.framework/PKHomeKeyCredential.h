
@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
    bool  _detailDescriptionAvailable;
}

- (id)detailDescription;
- (id)initWithPaymentPass:(id)arg1;
- (id)paymentApplications;
- (bool)supportsSuperEasyProvisioning;

@end
