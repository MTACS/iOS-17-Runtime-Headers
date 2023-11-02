
@interface BMUserProofingEvent : NSObject <BMProtoBufWrapper, BMStoreData, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _age;
    NSString * _deviceLanguage;
    NSString * _ethnicity;
    NSString * _gender;
    NSString * _gestureAssessment;
    NSString * _issuer;
    NSString * _livenessAssessment;
    NSString * _proofingDecision;
    NSString * _skinTone;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *age;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceLanguage;
@property (nonatomic, readonly) NSString *deviceRegion;
@property (nonatomic, readonly) NSString *ethnicity;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *gestureAssessment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) NSString *livenessAssessment;
@property (nonatomic, readonly) NSString *proofingDecision;
@property (nonatomic, readonly) NSString *skinTone;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)age;
- (unsigned int)dataVersion;
- (id)deviceLanguage;
- (id)deviceRegion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)ethnicity;
- (id)gender;
- (id)gestureAssessment;
- (unsigned long long)hash;
- (id)initWithAbsoluteTimestamp:(double)arg1 age:(id)arg2 gender:(id)arg3 skinTone:(id)arg4 ethnicity:(id)arg5 deviceLanguage:(id)arg6 proofingDecision:(id)arg7 issuer:(id)arg8;
- (id)initWithAbsoluteTimestamp:(double)arg1 age:(id)arg2 gender:(id)arg3 skinTone:(id)arg4 ethnicity:(id)arg5 deviceLanguage:(id)arg6 proofingDecision:(id)arg7 issuer:(id)arg8 livenessAssessment:(id)arg9 gestureAssessment:(id)arg10;
- (id)initWithAbsoluteTimestamp:(double)arg1 age:(id)arg2 gender:(id)arg3 skinTone:(id)arg4 ethnicity:(id)arg5 deviceRegion:(id)arg6 proofingDecision:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)issuer;
- (id)livenessAssessment;
- (id)proofingDecision;
- (id)proto;
- (id)serialize;
- (id)skinTone;

@end
