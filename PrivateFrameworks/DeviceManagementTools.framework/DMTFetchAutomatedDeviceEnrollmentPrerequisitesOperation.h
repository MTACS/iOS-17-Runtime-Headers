
@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesOperation : DMTTaskOperation {
    <DMTDeviceInformationPrimitives> * _deviceInformationPrimitives;
}

@property (nonatomic, readonly) <DMTDeviceInformationPrimitives> *deviceInformationPrimitives;

+ (bool)validateRequest:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)deviceInformationPrimitives;
- (id)initWithRequest:(id)arg1 deviceInformationPrimitives:(id)arg2;
- (void)runWithRequest:(id)arg1;

@end
