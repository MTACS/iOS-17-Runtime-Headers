
@interface BMWalletPaymentsCommerceUserProofingResult : BMEventBase <BMStoreData> {
    NSString * _age;
    NSArray * _axSettings;
    NSString * _deviceLanguage;
    NSString * _ethnicity;
    NSString * _gender;
    NSString * _gestureAssessment;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _issuer;
    NSString * _livenessAssessment;
    NSString * _proofingDecision;
    double  _raw_absoluteTimestamp;
    NSString * _skinTone;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *age;
@property (nonatomic, readonly) NSArray *axSettings;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceLanguage;
@property (nonatomic, readonly) NSString *ethnicity;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *gestureAssessment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) NSString *livenessAssessment;
@property (nonatomic, readonly) NSString *proofingDecision;
@property (nonatomic, readonly) NSString *skinTone;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_axSettingsJSONArray;
- (id)absoluteTimestamp;
- (id)age;
- (id)axSettings;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceLanguage;
- (id)ethnicity;
- (id)gender;
- (id)gestureAssessment;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 age:(id)arg2 gender:(id)arg3 skinTone:(id)arg4 ethnicity:(id)arg5 deviceLanguage:(id)arg6 proofingDecision:(id)arg7 issuer:(id)arg8 livenessAssessment:(id)arg9 gestureAssessment:(id)arg10 axSettings:(id)arg11;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)issuer;
- (id)jsonDictionary;
- (id)livenessAssessment;
- (id)proofingDecision;
- (id)serialize;
- (id)skinTone;
- (void)writeTo:(id)arg1;

@end
