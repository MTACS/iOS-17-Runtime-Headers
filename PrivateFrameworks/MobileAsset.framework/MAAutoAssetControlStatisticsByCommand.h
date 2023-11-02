
@interface MAAutoAssetControlStatisticsByCommand : NSObject <NSSecureCoding> {
    long long  _checkForNewer;
    long long  _continueLockUsage;
    long long  _currentStatus;
    long long  _determineIfAvailable;
    long long  _eliminateAllForAssetType;
    long long  _eliminateAllForSelector;
    long long  _eliminatePromotedNeverLockedForSelector;
    long long  _endAllPreviousLocks;
    long long  _endLockUsage;
    long long  _endPreviousLocks;
    long long  _interestInContent;
    long long  _lockContent;
    long long  _stageDetermineAllAvailable;
    long long  _stageDownloadAll;
    long long  _stagePurgeAll;
}

@property (nonatomic) long long checkForNewer;
@property (nonatomic) long long continueLockUsage;
@property (nonatomic) long long currentStatus;
@property (nonatomic) long long determineIfAvailable;
@property (nonatomic) long long eliminateAllForAssetType;
@property (nonatomic) long long eliminateAllForSelector;
@property (nonatomic) long long eliminatePromotedNeverLockedForSelector;
@property (nonatomic) long long endAllPreviousLocks;
@property (nonatomic) long long endLockUsage;
@property (nonatomic) long long endPreviousLocks;
@property (nonatomic) long long interestInContent;
@property (nonatomic) long long lockContent;
@property (nonatomic) long long stageDetermineAllAvailable;
@property (nonatomic) long long stageDownloadAll;
@property (nonatomic) long long stagePurgeAll;

+ (bool)supportsSecureCoding;

- (long long)checkForNewer;
- (long long)continueLockUsage;
- (id)copy;
- (long long)currentStatus;
- (id)description;
- (long long)determineIfAvailable;
- (long long)eliminateAllForAssetType;
- (long long)eliminateAllForSelector;
- (long long)eliminatePromotedNeverLockedForSelector;
- (void)encodeWithCoder:(id)arg1;
- (long long)endAllPreviousLocks;
- (long long)endLockUsage;
- (long long)endPreviousLocks;
- (void)incrementForClientRequestMessage:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitialValue:(long long)arg1;
- (long long)interestInContent;
- (long long)lockContent;
- (void)setCheckForNewer:(long long)arg1;
- (void)setContinueLockUsage:(long long)arg1;
- (void)setCurrentStatus:(long long)arg1;
- (void)setDetermineIfAvailable:(long long)arg1;
- (void)setEliminateAllForAssetType:(long long)arg1;
- (void)setEliminateAllForSelector:(long long)arg1;
- (void)setEliminatePromotedNeverLockedForSelector:(long long)arg1;
- (void)setEndAllPreviousLocks:(long long)arg1;
- (void)setEndLockUsage:(long long)arg1;
- (void)setEndPreviousLocks:(long long)arg1;
- (void)setInterestInContent:(long long)arg1;
- (void)setLockContent:(long long)arg1;
- (void)setStageDetermineAllAvailable:(long long)arg1;
- (void)setStageDownloadAll:(long long)arg1;
- (void)setStagePurgeAll:(long long)arg1;
- (long long)stageDetermineAllAvailable;
- (long long)stageDownloadAll;
- (long long)stagePurgeAll;
- (id)summary;
- (long long)total;

@end
