
@interface ENUserAuthorization : NSObject <NSCopying, NSSecureCoding> {
    long long  _authorization;
    NSNumber * _didUserTravel;
    NSDate * _expirationDate;
    NSString * _identifier;
    NSNumber * _isUserVaccinated;
    double  _lastUpdatedTimestamp;
    unsigned int  _reportType;
    NSDate * _symptomOnsetDate;
    NSDate * _testDateToday;
    NSString * _verificationCode;
}

@property (nonatomic, copy) NSNumber *didUserTravel;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) long long expirationStatus;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, copy) NSNumber *isUserVaccinated;
@property (nonatomic, readonly) double lastUpdatedTimestamp;
@property (nonatomic) unsigned int reportType;
@property (nonatomic, copy) NSDate *symptomOnsetDate;
@property (nonatomic, retain) NSDate *testDateToday;
@property (nonatomic) long long userAuthorization;
@property (nonatomic, copy) NSString *verificationCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)didUserTravel;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (long long)expirationStatus;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)isUserVaccinated;
- (double)lastUpdatedTimestamp;
- (unsigned int)reportType;
- (void)setDidUserTravel:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUserVaccinated:(id)arg1;
- (void)setReportType:(unsigned int)arg1;
- (void)setSymptomOnsetDate:(id)arg1;
- (void)setTestDateToday:(id)arg1;
- (void)setUserAuthorization:(long long)arg1;
- (void)setUserAuthorization:(long long)arg1 withExpiration:(id)arg2;
- (void)setVerificationCode:(id)arg1;
- (id)symptomOnsetDate;
- (id)testDateToday;
- (long long)userAuthorization;
- (id)verificationCode;

@end
