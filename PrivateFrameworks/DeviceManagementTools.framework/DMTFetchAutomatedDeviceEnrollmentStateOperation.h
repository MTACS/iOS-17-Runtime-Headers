
@interface DMTFetchAutomatedDeviceEnrollmentStateOperation : DMTTaskOperation {
    <DMTEnrollmentStateProviding> * _enrollmentStateProvider;
}

@property (nonatomic, readonly) <DMTEnrollmentStateProviding> *enrollmentStateProvider;

+ (bool)validateRequest:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)enrollmentStateProvider;
- (id)initWithRequest:(id)arg1 enrollmentStateProvider:(id)arg2;
- (void)runWithRequest:(id)arg1;

@end
