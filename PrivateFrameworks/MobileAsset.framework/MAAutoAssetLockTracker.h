
@interface MAAutoAssetLockTracker : NSObject <NSSecureCoding> {
    long long  _activeLockCount;
    MAAutoAssetLockReason * _clientLockReason;
    long long  _continueCount;
    NSDate * _firstLockTimestamp;
    NSDate * _lastRefreshTimestamp;
    MAAutoAssetPolicy * _lockUsagePolicy;
    long long  _maximumLockCount;
    long long  _totalLockCount;
}

@property (nonatomic) long long activeLockCount;
@property (nonatomic, readonly, retain) MAAutoAssetLockReason *clientLockReason;
@property (nonatomic) long long continueCount;
@property (nonatomic, retain) NSDate *firstLockTimestamp;
@property (nonatomic, retain) NSDate *lastRefreshTimestamp;
@property (nonatomic, retain) MAAutoAssetPolicy *lockUsagePolicy;
@property (nonatomic) long long maximumLockCount;
@property (nonatomic) long long totalLockCount;

+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)arg1;
+ (id)summaryPaddedHeader:(id)arg1;
+ (id)summaryPaddedString:(id)arg1 paddingToLenghtOfString:(id)arg2 paddingWith:(id)arg3 paddingBefore:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activeLockCount;
- (id)clientLockReason;
- (long long)continueCount;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstLockTimestamp;
- (id)initForClientLockReason:(id)arg1 lockingWithUsagePolicy:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)lastRefreshTimestamp;
- (id)lockUsagePolicy;
- (long long)maximumLockCount;
- (id)newSummaryDictionary;
- (void)setActiveLockCount:(long long)arg1;
- (void)setContinueCount:(long long)arg1;
- (void)setFirstLockTimestamp:(id)arg1;
- (void)setLastRefreshTimestamp:(id)arg1;
- (void)setLockUsagePolicy:(id)arg1;
- (void)setMaximumLockCount:(long long)arg1;
- (void)setTotalLockCount:(long long)arg1;
- (id)summary;
- (void)summaryBuildMaxColumnStrings:(id)arg1;
- (id)summaryPadded:(id)arg1;
- (long long)totalLockCount;

@end
