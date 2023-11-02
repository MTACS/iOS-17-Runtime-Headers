
@interface HFAnalyticsFaceRecognitionNamedPersonEvent : HFAnalyticsEvent {
    NSNumber * _errorCode;
    NSString * _errorDomain;
    NSNumber * _isNewPerson;
    NSNumber * _personType;
}

@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, retain) NSNumber *isNewPerson;
@property (nonatomic, retain) NSNumber *personType;

- (void).cxx_destruct;
- (unsigned long long)_namedPersonTypeForPerson:(id)arg1;
- (id)errorCode;
- (id)errorDomain;
- (id)initWithData:(id)arg1;
- (id)isNewPerson;
- (id)payload;
- (id)personType;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setIsNewPerson:(id)arg1;
- (void)setPersonType:(id)arg1;

@end
