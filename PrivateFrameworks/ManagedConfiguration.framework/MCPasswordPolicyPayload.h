
@interface MCPasswordPolicyPayload : MCPayload {
    NSNumber * _isAlphanumericPasscodeRequired;
    NSNumber * _isManualFetchingWhenRoaming;
    NSNumber * _isPasscodeRequired;
    NSNumber * _isSimplePasscodeAllowed;
    NSNumber * _maxFailedAttempts;
    NSNumber * _maxGracePeriodMinutes;
    NSNumber * _maxInactivityMinutes;
    NSNumber * _maxPasscodeAgeDays;
    NSNumber * _minComplexCharacters;
    NSNumber * _minLength;
    NSNumber * _passcodeHistoryCount;
}

@property (nonatomic, readonly, retain) NSNumber *isAlphanumericPasscodeRequired;
@property (nonatomic, readonly, retain) NSNumber *isManualFetchingWhenRoaming;
@property (nonatomic, readonly, retain) NSNumber *isPasscodeRequired;
@property (nonatomic, readonly, retain) NSNumber *isSimplePasscodeAllowed;
@property (nonatomic, readonly, retain) NSNumber *maxFailedAttempts;
@property (nonatomic, readonly, retain) NSNumber *maxGracePeriodMinutes;
@property (nonatomic, readonly, retain) NSNumber *maxInactivityMinutes;
@property (nonatomic, readonly, retain) NSNumber *maxPasscodeAgeDays;
@property (nonatomic, readonly, retain) NSNumber *minComplexCharacters;
@property (nonatomic, readonly, retain) NSNumber *minLength;
@property (nonatomic, readonly, retain) NSNumber *passcodeHistoryCount;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)filterForUserEnrollmentOutError:(id*)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)isAlphanumericPasscodeRequired;
- (id)isManualFetchingWhenRoaming;
- (id)isPasscodeRequired;
- (id)isSimplePasscodeAllowed;
- (id)maxFailedAttempts;
- (id)maxGracePeriodMinutes;
- (id)maxInactivityMinutes;
- (id)maxPasscodeAgeDays;
- (id)minComplexCharacters;
- (id)minLength;
- (id)passcodeHistoryCount;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)title;
- (id)verboseDescription;

@end
