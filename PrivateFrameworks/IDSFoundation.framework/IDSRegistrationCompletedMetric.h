
@interface IDSRegistrationCompletedMetric : NSObject <CUTAWDMetric, CUTCoreAnalyticsMetric, CUTRTCMetric> {
    long long  _circleStatus;
    long long  _registrationError;
    int  _registrationType;
    NSString * _serviceIdentifier;
    bool  _wasSuccessful;
}

@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (nonatomic, readonly) long long circleStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long registrationError;
@property (nonatomic, readonly) int registrationType;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wasSuccessful;

- (void).cxx_destruct;
- (unsigned int)awdIdentifier;
- (id)awdRepresentation;
- (long long)circleStatus;
- (id)dictionaryRepresentation;
- (id)initWithRegistrationType:(int)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(bool)arg3 registrationError:(long long)arg4 circleStatus:(long long)arg5;
- (id)name;
- (long long)registrationError;
- (int)registrationType;
- (unsigned short)rtcType;
- (id)serviceIdentifier;
- (bool)wasSuccessful;

@end
