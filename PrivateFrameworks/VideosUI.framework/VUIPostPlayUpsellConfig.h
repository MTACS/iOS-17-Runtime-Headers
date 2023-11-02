
@interface VUIPostPlayUpsellConfig : NSObject {
    bool  _isUpsellLimitedPerChannel;
    bool  _isUpsellLimitedPerShow;
    bool  _isUpsellOnPIPPlaybackExitEnabled;
    bool  _isUpsellOnPlaybackExitDisabled;
    double  _minPlaybackProgressPercentage;
    double  _upsellCountDurationPerChannel;
    double  _upsellCountDurationPerShow;
    unsigned long long  _upsellMaxCountPerChannel;
    unsigned long long  _upsellMaxCountPerShow;
}

@property (nonatomic) bool isUpsellLimitedPerChannel;
@property (nonatomic) bool isUpsellLimitedPerShow;
@property (nonatomic) bool isUpsellOnPIPPlaybackExitEnabled;
@property (nonatomic) bool isUpsellOnPlaybackExitDisabled;
@property (nonatomic) double minPlaybackProgressPercentage;
@property (nonatomic) double upsellCountDurationPerChannel;
@property (nonatomic) double upsellCountDurationPerShow;
@property (nonatomic) unsigned long long upsellMaxCountPerChannel;
@property (nonatomic) unsigned long long upsellMaxCountPerShow;

+ (id)sharedInstance;

- (id)_cleanupHistory:(id)arg1 atCurrentDate:(id)arg2 isShow:(bool)arg3;
- (bool)_isFullScreenPlaybackUIShown;
- (bool)_isHistoryArrayFull:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3;
- (void)_recordUpsellHistoryForShowId:(id)arg1 onChannelId:(id)arg2;
- (id)_trimHistoryArray:(id)arg1 forMaxCount:(unsigned long long)arg2 inDurationWindow:(double)arg3 atCurrentDate:(id)arg4;
- (bool)canShowUpsellForMediaItem:(id)arg1 withElapsedTime:(double)arg2;
- (void)configureUsingDictionary:(id)arg1;
- (void)disableUpsellOnPlaybackExit:(bool)arg1;
- (void)enableUpsellOnPIPPlaybackExit:(bool)arg1;
- (bool)isUpsellLimitedPerChannel;
- (bool)isUpsellLimitedPerShow;
- (bool)isUpsellOnPIPPlaybackExitEnabled;
- (bool)isUpsellOnPlaybackExitDisabled;
- (double)minPlaybackProgressPercentage;
- (void)setChannelLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2;
- (void)setIsUpsellLimitedPerChannel:(bool)arg1;
- (void)setIsUpsellLimitedPerShow:(bool)arg1;
- (void)setIsUpsellOnPIPPlaybackExitEnabled:(bool)arg1;
- (void)setIsUpsellOnPlaybackExitDisabled:(bool)arg1;
- (void)setMinPlaybackProgressPercentage:(double)arg1;
- (void)setMinPlaybackProgressPercentageForUpsellOnExit:(double)arg1;
- (void)setShowLevelUpsellRateOfMaxCount:(unsigned long long)arg1 inHours:(double)arg2;
- (void)setUpsellCountDurationPerChannel:(double)arg1;
- (void)setUpsellCountDurationPerShow:(double)arg1;
- (void)setUpsellMaxCountPerChannel:(unsigned long long)arg1;
- (void)setUpsellMaxCountPerShow:(unsigned long long)arg1;
- (double)upsellCountDurationPerChannel;
- (double)upsellCountDurationPerShow;
- (unsigned long long)upsellMaxCountPerChannel;
- (unsigned long long)upsellMaxCountPerShow;

@end
