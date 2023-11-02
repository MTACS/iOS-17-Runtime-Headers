
@interface SFPairedUnlockEvent : NSObject <SFCoreAnalyticsEvent> {
    unsigned short  _attemptHourLocal;
    NSString * _bannerDismissReason;
    long long  _bannerDismissalCount;
    bool  _canRelock;
    unsigned int  _confirmationDuration;
    unsigned short  _failureReason;
    unsigned int  _keyExchangeDuration;
    bool  _phoneAutoUnlockEnabled;
    long long  _phoneState;
    unsigned int  _pillDelay;
    bool  _relockedWatch;
    bool  _retriedWithEscrowRecord;
    bool  _succeeded;
    unsigned int  _totalUnlockDuration;
    unsigned int  _totalUnlockProcessDuration;
    bool  _usingEscrowRecord;
    NSString * _watchHardwareModel;
    NSString * _watchSoftwareVersion;
}

@property (nonatomic) unsigned short attemptHourLocal;
@property (nonatomic) NSString *bannerDismissReason;
@property (nonatomic) long long bannerDismissalCount;
@property (nonatomic) bool canRelock;
@property (nonatomic) unsigned int confirmationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (nonatomic) unsigned short failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int keyExchangeDuration;
@property (nonatomic) bool phoneAutoUnlockEnabled;
@property (nonatomic) long long phoneState;
@property (nonatomic) unsigned int pillDelay;
@property (nonatomic) bool relockedWatch;
@property (nonatomic) bool retriedWithEscrowRecord;
@property (nonatomic) bool succeeded;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int totalUnlockDuration;
@property (nonatomic) unsigned int totalUnlockProcessDuration;
@property (nonatomic) bool usingEscrowRecord;
@property (nonatomic, copy) NSString *watchHardwareModel;
@property (nonatomic, copy) NSString *watchSoftwareVersion;

+ (id)eventName;

- (void).cxx_destruct;
- (unsigned short)attemptHourLocal;
- (id)bannerDismissReason;
- (long long)bannerDismissalCount;
- (bool)canRelock;
- (unsigned int)confirmationDuration;
- (id)eventPayload;
- (unsigned short)failureReason;
- (unsigned int)keyExchangeDuration;
- (bool)phoneAutoUnlockEnabled;
- (long long)phoneState;
- (unsigned int)pillDelay;
- (bool)relockedWatch;
- (bool)retriedWithEscrowRecord;
- (void)setAttemptHourLocal:(unsigned short)arg1;
- (void)setBannerDismissReason:(id)arg1;
- (void)setBannerDismissalCount:(long long)arg1;
- (void)setCanRelock:(bool)arg1;
- (void)setConfirmationDuration:(unsigned int)arg1;
- (void)setFailureReason:(unsigned short)arg1;
- (void)setKeyExchangeDuration:(unsigned int)arg1;
- (void)setPhoneAutoUnlockEnabled:(bool)arg1;
- (void)setPhoneState:(long long)arg1;
- (void)setPillDelay:(unsigned int)arg1;
- (void)setRelockedWatch:(bool)arg1;
- (void)setRetriedWithEscrowRecord:(bool)arg1;
- (void)setSucceeded:(bool)arg1;
- (void)setTotalUnlockDuration:(unsigned int)arg1;
- (void)setTotalUnlockProcessDuration:(unsigned int)arg1;
- (void)setUsingEscrowRecord:(bool)arg1;
- (void)setWatchHardwareModel:(id)arg1;
- (void)setWatchSoftwareVersion:(id)arg1;
- (void)submitEvent;
- (bool)succeeded;
- (unsigned int)totalUnlockDuration;
- (unsigned int)totalUnlockProcessDuration;
- (bool)usingEscrowRecord;
- (id)watchHardwareModel;
- (id)watchSoftwareVersion;

@end
