
@interface MAAutoAssetSummary : NSObject <NSSecureCoding> {
    long long  _activeClientCount;
    long long  _activeMonitorCount;
    bool  _assetIsStaged;
    long long  _assetRepresentation;
    MAAutoAssetSelector * _assetSelector;
    bool  _assetWasPatched;
    MAAutoAssetStatus * _jobStatus;
    long long  _maximumClientCount;
    long long  _pushDelaySecs;
    long long  _scheduledIntervalSecs;
    long long  _scheduledRemainingSecs;
    long long  _totalClientCount;
}

@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) bool assetIsStaged;
@property (nonatomic) long long assetRepresentation;
@property (nonatomic, retain) MAAutoAssetSelector *assetSelector;
@property (nonatomic) bool assetWasPatched;
@property (nonatomic, retain) MAAutoAssetStatus *jobStatus;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long scheduledIntervalSecs;
@property (nonatomic) long long scheduledRemainingSecs;
@property (nonatomic) long long totalClientCount;

+ (id)assetRepresentationName:(long long)arg1;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)arg1;
+ (id)summaryPaddedHeader:(id)arg1;
+ (id)summaryPaddedString:(id)arg1 paddingToLenghtOfString:(id)arg2 paddingWith:(id)arg3 paddingBefore:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activeClientCount;
- (long long)activeMonitorCount;
- (bool)assetIsStaged;
- (long long)assetRepresentation;
- (id)assetRepresentationName;
- (id)assetSelector;
- (bool)assetWasPatched;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetSelector:(id)arg1 withAssetRepresentation:(long long)arg2 withAssetWasPatched:(bool)arg3 withAssetIsStaged:(bool)arg4 withJobStatus:(id)arg5 withScheduledIntervalSecs:(long long)arg6 withScheduledRemainingSecs:(long long)arg7 withPushDelaySecs:(long long)arg8 withActiveClientCount:(long long)arg9 withActiveMonitorCount:(long long)arg10 withMaximumClientCount:(long long)arg11 withTotalClientCount:(long long)arg12;
- (id)initWithCoder:(id)arg1;
- (id)jobStatus;
- (long long)maximumClientCount;
- (id)newSummaryDictionary;
- (long long)pushDelaySecs;
- (long long)scheduledIntervalSecs;
- (long long)scheduledRemainingSecs;
- (void)setActiveClientCount:(long long)arg1;
- (void)setActiveMonitorCount:(long long)arg1;
- (void)setAssetIsStaged:(bool)arg1;
- (void)setAssetRepresentation:(long long)arg1;
- (void)setAssetSelector:(id)arg1;
- (void)setAssetWasPatched:(bool)arg1;
- (void)setJobStatus:(id)arg1;
- (void)setMaximumClientCount:(long long)arg1;
- (void)setPushDelaySecs:(long long)arg1;
- (void)setScheduledIntervalSecs:(long long)arg1;
- (void)setScheduledRemainingSecs:(long long)arg1;
- (void)setTotalClientCount:(long long)arg1;
- (id)summary;
- (void)summaryBuildMaxColumnStrings:(id)arg1;
- (id)summaryPadded:(id)arg1;
- (long long)totalClientCount;

@end
