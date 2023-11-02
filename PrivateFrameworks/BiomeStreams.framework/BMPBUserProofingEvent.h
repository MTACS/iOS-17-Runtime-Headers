
@interface BMPBUserProofingEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _age;
    NSString * _deviceLanguage;
    NSString * _ethnicity;
    NSString * _gender;
    NSString * _gestureAssessment;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _issuer;
    NSString * _livenessAssessment;
    NSString * _proofingDecision;
    NSString * _skinTone;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *age;
@property (nonatomic, retain) NSString *deviceLanguage;
@property (nonatomic, retain) NSString *ethnicity;
@property (nonatomic, retain) NSString *gender;
@property (nonatomic, retain) NSString *gestureAssessment;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasAge;
@property (nonatomic, readonly) bool hasDeviceLanguage;
@property (nonatomic, readonly) bool hasEthnicity;
@property (nonatomic, readonly) bool hasGender;
@property (nonatomic, readonly) bool hasGestureAssessment;
@property (nonatomic, readonly) bool hasIssuer;
@property (nonatomic, readonly) bool hasLivenessAssessment;
@property (nonatomic, readonly) bool hasProofingDecision;
@property (nonatomic, readonly) bool hasSkinTone;
@property (nonatomic, retain) NSString *issuer;
@property (nonatomic, retain) NSString *livenessAssessment;
@property (nonatomic, retain) NSString *proofingDecision;
@property (nonatomic, retain) NSString *skinTone;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)age;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceLanguage;
- (id)dictionaryRepresentation;
- (id)ethnicity;
- (id)gender;
- (id)gestureAssessment;
- (bool)hasAbsoluteTimestamp;
- (bool)hasAge;
- (bool)hasDeviceLanguage;
- (bool)hasEthnicity;
- (bool)hasGender;
- (bool)hasGestureAssessment;
- (bool)hasIssuer;
- (bool)hasLivenessAssessment;
- (bool)hasProofingDecision;
- (bool)hasSkinTone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issuer;
- (id)livenessAssessment;
- (void)mergeFrom:(id)arg1;
- (id)proofingDecision;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setAge:(id)arg1;
- (void)setDeviceLanguage:(id)arg1;
- (void)setEthnicity:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setGestureAssessment:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setIssuer:(id)arg1;
- (void)setLivenessAssessment:(id)arg1;
- (void)setProofingDecision:(id)arg1;
- (void)setSkinTone:(id)arg1;
- (id)skinTone;
- (void)writeTo:(id)arg1;

@end
