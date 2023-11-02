
@interface PKODIServiceProviderAssessment : PKODIAssessment {
    NSBundle * _bundleIdentifier;
    NSBundle * _locationBundle;
    NSString * _serviceIdentifier;
}

@property (nonatomic, copy) NSString *serviceIdentifier;

- (void).cxx_destruct;
- (void)createODISession;
- (id)description;
- (void)getAssessmentWithCompletion:(id /* block */)arg1;
- (id)initWithServiceProviderIdentifier:(id)arg1 locationBundle:(id)arg2;
- (id)serviceIdentifier;
- (void)setServiceIdentifier:(id)arg1;

@end
