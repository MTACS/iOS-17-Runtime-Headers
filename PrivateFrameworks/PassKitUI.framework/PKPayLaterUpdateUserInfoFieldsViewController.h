
@interface PKPayLaterUpdateUserInfoFieldsViewController : PKDynamicProvisioningFieldsPageViewController {
    PKAccountService * _accountService;
    NSArray * _encryptionCertificates;
    NSString * _encryptionVerion;
    PKAccount * _payLaterAccount;
}

- (void).cxx_destruct;
- (void)handleCancelTapped;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithPayLaterAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 setupDelegate:(id)arg4 encryptionCertificates:(id)arg5 encryptionVerion:(id)arg6 fieldsPage:(id)arg7;

@end
