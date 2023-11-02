
@interface SFPairedUnlockDailyEvent : NSObject <SFCoreAnalyticsEvent> {
    long long  _failedAttempts;
    long long  _passcodeUnlocks;
    bool  _phoneAutoUnlockEnabled;
    NSString * _phoneHardwareModel;
    NSString * _phoneSoftwareVersion;
    long long  _successfulAttempts;
    long long  _totalAttempts;
    long long  _totalUnlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (nonatomic) long long failedAttempts;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long passcodeUnlocks;
@property (nonatomic) bool phoneAutoUnlockEnabled;
@property (nonatomic, copy) NSString *phoneHardwareModel;
@property (nonatomic, copy) NSString *phoneSoftwareVersion;
@property (nonatomic) long long successfulAttempts;
@property (readonly) Class superclass;
@property (nonatomic) long long totalAttempts;
@property (nonatomic) long long totalUnlocks;

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventPayload;
- (long long)failedAttempts;
- (long long)passcodeUnlocks;
- (bool)phoneAutoUnlockEnabled;
- (id)phoneHardwareModel;
- (id)phoneSoftwareVersion;
- (void)setFailedAttempts:(long long)arg1;
- (void)setPasscodeUnlocks:(long long)arg1;
- (void)setPhoneAutoUnlockEnabled:(bool)arg1;
- (void)setPhoneHardwareModel:(id)arg1;
- (void)setPhoneSoftwareVersion:(id)arg1;
- (void)setSuccessfulAttempts:(long long)arg1;
- (void)setTotalAttempts:(long long)arg1;
- (void)setTotalUnlocks:(long long)arg1;
- (void)submitEvent;
- (long long)successfulAttempts;
- (long long)totalAttempts;
- (long long)totalUnlocks;

@end
