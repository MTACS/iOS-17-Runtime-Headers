
@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse {
    PKAccount * _account;
    NSSet * _actionIdentifiersRequiringAuthentication;
    PKFeatureApplication * _featureApplication;
    unsigned long long  _requiredDeviceMetadataFields;
    bool  _requiresODIAssessment;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly, copy) NSSet *actionIdentifiersRequiringAuthentication;
@property (nonatomic, readonly) PKFeatureApplication *featureApplication;
@property (nonatomic, readonly) unsigned long long requiredDeviceMetadataFields;
@property (nonatomic, readonly) bool requiresODIAssessment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)actionIdentifiersRequiringAuthentication;
- (void)encodeWithCoder:(id)arg1;
- (id)featureApplication;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)nextStepInfo;
- (unsigned long long)requiredDeviceMetadataFields;
- (bool)requiresODIAssessment;

@end
