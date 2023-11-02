
@interface DMTTaskOperationBuilder : NSObject <DMTTaskOperationProviding> {
    <DMTDeviceInformationPrimitives> * _deviceInfoPrimitives;
    <DMTEnrollmentInitiating> * _enrollmentInitiator;
    <DMTEnrollmentPrerequisiteReceiving> * _enrollmentPrerequisiteReceiver;
    <DMTEnrollmentStateProviding> * _enrollmentStateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <DMTDeviceInformationPrimitives> *deviceInfoPrimitives;
@property (nonatomic, readonly) <DMTEnrollmentInitiating> *enrollmentInitiator;
@property (nonatomic, readonly) <DMTEnrollmentPrerequisiteReceiving> *enrollmentPrerequisiteReceiver;
@property (nonatomic, readonly) <DMTEnrollmentStateProviding> *enrollmentStateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)validationClassForRequest:(id)arg1;

- (void).cxx_destruct;
- (id)deviceInfoPrimitives;
- (id)enrollmentInitiator;
- (id)enrollmentPrerequisiteReceiver;
- (id)enrollmentStateProvider;
- (id)initWithDeviceInfoPrimitives:(id)arg1 enrollmentPrerequisiteReceiver:(id)arg2 enrollmentInitiator:(id)arg3 enrollmentStateProvider:(id)arg4;
- (id)taskOperationForRequest:(id)arg1;
- (bool)validateRequest:(id)arg1 error:(id*)arg2;

@end
