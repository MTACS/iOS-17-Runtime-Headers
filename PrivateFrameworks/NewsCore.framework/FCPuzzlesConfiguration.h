
@interface FCPuzzlesConfiguration : NSObject {
    long long  _autoEnableNotificationMinimumPlayCount;
    double  _autoEnableNotificationPlayTimeInterval;
    double  _badgingUpdateQuiesenceInterval;
    NSDictionary * _difficultyDescriptions;
    long long  _numberOfHistoryPuzzlesToPrewarm;
    double  _progressUpdateTimeInterval;
    double  _puzzleHistoryPrewarmTimeInterval;
    NSString * _puzzleHubTagID;
    NSArray * _puzzleTypes;
    bool  _puzzlesEnabled;
    double  _puzzlesEngineRefreshTimeInterval;
    double  _puzzlesPrewarmTimeInterval;
}

@property (nonatomic, readonly) long long autoEnableNotificationMinimumPlayCount;
@property (nonatomic, readonly) double autoEnableNotificationPlayTimeInterval;
@property (nonatomic, readonly) double badgingUpdateQuiesenceInterval;
@property (nonatomic, readonly) NSDictionary *difficultyDescriptions;
@property (nonatomic, readonly) long long numberOfHistoryPuzzlesToPrewarm;
@property (nonatomic, readonly) double progressUpdateTimeInterval;
@property (nonatomic, readonly) double puzzleHistoryPrewarmTimeInterval;
@property (nonatomic, readonly) NSString *puzzleHubTagID;
@property (nonatomic, readonly) NSArray *puzzleTypes;
@property (nonatomic, readonly) bool puzzlesEnabled;
@property (nonatomic, readonly) double puzzlesEngineRefreshTimeInterval;
@property (nonatomic, readonly) double puzzlesPrewarmTimeInterval;

- (void).cxx_destruct;
- (long long)autoEnableNotificationMinimumPlayCount;
- (double)autoEnableNotificationPlayTimeInterval;
- (double)badgingUpdateQuiesenceInterval;
- (id)difficultyDescriptions;
- (id)initWithConfigDictionary:(id)arg1 storefrontID:(id)arg2 defaultSupportedStorefronts:(id)arg3;
- (long long)numberOfHistoryPuzzlesToPrewarm;
- (double)progressUpdateTimeInterval;
- (double)puzzleHistoryPrewarmTimeInterval;
- (id)puzzleHubTagID;
- (id)puzzleTypes;
- (bool)puzzlesEnabled;
- (double)puzzlesEngineRefreshTimeInterval;
- (double)puzzlesPrewarmTimeInterval;

@end
