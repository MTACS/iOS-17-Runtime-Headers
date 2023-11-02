
@interface PKApplyControllerConfiguration : NSObject {
    PKAccount * _account;
    long long  _applicationType;
    long long  _context;
    unsigned long long  _feature;
    PKFeatureApplication * _featureApplication;
    unsigned long long  _featureProduct;
    PKPaymentProvisioningController * _provisioningController;
    NSString * _referenceIdentifier;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    long long  _updateUserInfoSubType;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic) long long applicationType;
@property (nonatomic) long long context;
@property (nonatomic) unsigned long long feature;
@property (nonatomic, retain) PKFeatureApplication *featureApplication;
@property (nonatomic) unsigned long long featureProduct;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) NSString *referenceIdentifier;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (nonatomic) long long updateUserInfoSubType;

- (void).cxx_destruct;
- (id)account;
- (long long)applicationType;
- (long long)context;
- (unsigned long long)feature;
- (id)featureApplication;
- (unsigned long long)featureProduct;
- (id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3;
- (id)provisioningController;
- (id)referenceIdentifier;
- (void)setAccount:(id)arg1;
- (void)setApplicationType:(long long)arg1;
- (void)setContext:(long long)arg1;
- (void)setFeature:(unsigned long long)arg1;
- (void)setFeatureApplication:(id)arg1;
- (void)setFeatureProduct:(unsigned long long)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setReferenceIdentifier:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setUpdateUserInfoSubType:(long long)arg1;
- (id)setupDelegate;
- (long long)updateUserInfoSubType;

@end
