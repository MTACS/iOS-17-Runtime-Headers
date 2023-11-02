
@interface HFAnalyticsAccessCodeEvent : HFAnalyticsEvent {
    NSNumber * _duringOnboarding;
    NSNumber * _errorCode;
    NSString * _errorDomain;
    HMHome * _home;
    unsigned long long  _operationType;
    HFPinCodeItem * _pinCodeItem;
    NSNumber * _ratioOfUserPINCodes;
    NSNumber * _totalGuestPINCodes;
}

@property (nonatomic, retain) NSNumber *duringOnboarding;
@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic, retain) HFPinCodeItem *pinCodeItem;
@property (nonatomic, retain) NSNumber *ratioOfUserPINCodes;
@property (nonatomic, retain) NSNumber *totalGuestPINCodes;

- (void).cxx_destruct;
- (id)duringOnboarding;
- (id)errorCode;
- (id)errorDomain;
- (id)home;
- (id)initWithData:(id)arg1;
- (unsigned long long)operationType;
- (id)payload;
- (id)pinCodeItem;
- (id)ratioOfUserPINCodes;
- (void)setDuringOnboarding:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setOperationType:(unsigned long long)arg1;
- (void)setPinCodeItem:(id)arg1;
- (void)setRatioOfUserPINCodes:(id)arg1;
- (void)setTotalGuestPINCodes:(id)arg1;
- (id)totalGuestPINCodes;

@end
