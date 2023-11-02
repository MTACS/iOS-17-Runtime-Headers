
@interface IDSRegistrationPhoneNumberValidationFinishedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _guid;
    NSNumber * _numberOfSMSSent;
    unsigned int  _registrationError;
    NSNumber * _validationDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *numberOfSMSSent;
@property (nonatomic, readonly) unsigned int registrationError;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *validationDuration;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)guid;
- (id)initWithGuid:(id)arg1 registrationError:(unsigned int)arg2 validationDuration:(id)arg3 numberOfSMSSent:(id)arg4;
- (id)name;
- (id)numberOfSMSSent;
- (unsigned int)registrationError;
- (id)validationDuration;

@end
