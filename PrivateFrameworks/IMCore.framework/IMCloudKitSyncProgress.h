
@interface IMCloudKitSyncProgress : NSObject {
    NSString * _actionLabel;
    long long  _actionType;
    double  _broadcastDeferralOverride;
    double  _progressBarMax;
    double  _progressBarValue;
    NSString * _progressLabel;
    bool  _shouldShowIndeterminateProgress;
    bool  _shouldShowProgressBar;
    bool  _shouldShowUserActionLabel;
    bool  _shouldShowUserMessageLabel;
    IMCloudKitSyncState * _syncState;
    IMCloudKitSyncStatistics * _syncStatistics;
    NSString * _userMessageLabel;
}

@property (nonatomic, retain) NSString *actionLabel;
@property (nonatomic) long long actionType;
@property (nonatomic) double broadcastDeferralOverride;
@property (nonatomic, readonly) NSArray *errors;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *percentCompleteString;
@property (nonatomic) double progressBarMax;
@property (nonatomic) double progressBarValue;
@property (nonatomic, retain) NSString *progressLabel;
@property (nonatomic, readonly) double remainingItems;
@property (nonatomic) bool shouldShowIndeterminateProgress;
@property (nonatomic) bool shouldShowProgressBar;
@property (nonatomic) bool shouldShowUserActionLabel;
@property (nonatomic) bool shouldShowUserMessageLabel;
@property (nonatomic, readonly) IMCloudKitSyncState *syncState;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *syncStatistics;
@property (nonatomic, retain) NSString *userMessageLabel;

- (void).cxx_destruct;
- (id)actionLabel;
- (long long)actionType;
- (double)broadcastDeferralOverride;
- (void)configureSelf;
- (id)description;
- (id)errors;
- (id)init;
- (id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2;
- (bool)isHidden;
- (double)percentComplete;
- (id)percentCompleteString;
- (double)progressBarMax;
- (double)progressBarValue;
- (id)progressLabel;
- (double)remainingItems;
- (void)setActionLabel:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setBroadcastDeferralOverride:(double)arg1;
- (void)setProgressBarMax:(double)arg1;
- (void)setProgressBarValue:(double)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setShouldShowIndeterminateProgress:(bool)arg1;
- (void)setShouldShowProgressBar:(bool)arg1;
- (void)setShouldShowUserActionLabel:(bool)arg1;
- (void)setShouldShowUserMessageLabel:(bool)arg1;
- (void)setUserMessageLabel:(id)arg1;
- (bool)shouldShowIndeterminateProgress;
- (bool)shouldShowProgressBar;
- (bool)shouldShowUserActionLabel;
- (bool)shouldShowUserMessageLabel;
- (id)syncState;
- (id)syncStatistics;
- (id)userMessageLabel;

@end
