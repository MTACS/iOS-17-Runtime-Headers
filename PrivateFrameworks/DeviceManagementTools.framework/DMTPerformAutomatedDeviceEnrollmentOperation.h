
@interface DMTPerformAutomatedDeviceEnrollmentOperation : DMTTaskOperation {
    <DMTEnrollmentInitiating> * _enrollmentInitiator;
    <DMTEnrollmentPrerequisiteReceiving> * _prerequisiteReceiver;
}

@property (nonatomic, readonly) <DMTEnrollmentInitiating> *enrollmentInitiator;
@property (nonatomic, readonly) <DMTEnrollmentPrerequisiteReceiving> *prerequisiteReceiver;

+ (bool)validateRequest:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)enrollmentInitiator;
- (id)initWithRequest:(id)arg1 prerequisiteReceiver:(id)arg2 enrollmentInitiator:(id)arg3;
- (id)prerequisiteReceiver;
- (void)runWithRequest:(id)arg1;

@end
