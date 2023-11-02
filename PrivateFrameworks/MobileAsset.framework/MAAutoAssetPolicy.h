
@interface MAAutoAssetPolicy : NSObject <NSSecureCoding> {
    NSDictionary * _additionalPolicyControl;
    bool  _interestAcrossTermination;
    bool  _lockAcrossOTAUpdate;
    bool  _lockAcrossReboot;
    bool  _lockAcrossTermination;
    bool  _lockInhibitsEmergencyRemoval;
    long long  _preventGarbageCollectionSecs;
    long long  _unlockAfterUsageSecs;
    bool  _userInitiated;
    long long  _waitForNewestSecs;
}

@property (nonatomic, retain) NSDictionary *additionalPolicyControl;
@property (nonatomic) bool interestAcrossTermination;
@property (nonatomic) bool lockAcrossOTAUpdate;
@property (nonatomic) bool lockAcrossReboot;
@property (nonatomic) bool lockAcrossTermination;
@property (nonatomic) bool lockInhibitsEmergencyRemoval;
@property (nonatomic) long long preventGarbageCollectionSecs;
@property (nonatomic) long long unlockAfterUsageSecs;
@property (nonatomic) bool userInitiated;
@property (nonatomic) long long waitForNewestSecs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalPolicyControl;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)interestAcrossTermination;
- (bool)lockAcrossOTAUpdate;
- (bool)lockAcrossReboot;
- (bool)lockAcrossTermination;
- (bool)lockInhibitsEmergencyRemoval;
- (id)newSummaryDictionary;
- (long long)preventGarbageCollectionSecs;
- (void)setAdditionalPolicyControl:(id)arg1;
- (void)setInterestAcrossTermination:(bool)arg1;
- (void)setLockAcrossOTAUpdate:(bool)arg1;
- (void)setLockAcrossReboot:(bool)arg1;
- (void)setLockAcrossTermination:(bool)arg1;
- (void)setLockInhibitsEmergencyRemoval:(bool)arg1;
- (void)setPreventGarbageCollectionSecs:(long long)arg1;
- (void)setUnlockAfterUsageSecs:(long long)arg1;
- (void)setUserInitiated:(bool)arg1;
- (void)setWaitForNewestSecs:(long long)arg1;
- (id)summary;
- (long long)unlockAfterUsageSecs;
- (bool)userInitiated;
- (long long)waitForNewestSecs;

@end
