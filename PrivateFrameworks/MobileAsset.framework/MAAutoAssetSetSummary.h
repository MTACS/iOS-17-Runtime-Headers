
@interface MAAutoAssetSetSummary : NSObject <NSSecureCoding> {
    long long  _activeClientCount;
    long long  _activeMonitorCount;
    NSString * _assetSetIdentifier;
    long long  _assetSetRepresentation;
    NSString * _clientDomainName;
    long long  _maximumClientCount;
    long long  _pushDelaySecs;
    long long  _scheduledIntervalSecs;
    long long  _scheduledRemainingSecs;
    MAAutoAssetSetStatus * _setJobStatus;
    long long  _totalClientCount;
}

@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic, retain) NSString *assetSetIdentifier;
@property (nonatomic) long long assetSetRepresentation;
@property (nonatomic, retain) NSString *clientDomainName;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long scheduledIntervalSecs;
@property (nonatomic) long long scheduledRemainingSecs;
@property (nonatomic, retain) MAAutoAssetSetStatus *setJobStatus;
@property (nonatomic) long long totalClientCount;

+ (id)assetSetRepresentationName:(long long)arg1;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)arg1;
+ (id)summaryPaddedHeader:(id)arg1;
+ (id)summaryPaddedString:(id)arg1 paddingToLenghtOfString:(id)arg2 paddingWith:(id)arg3 paddingBefore:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activeClientCount;
- (long long)activeMonitorCount;
- (id)assetSetIdentifier;
- (long long)assetSetRepresentation;
- (id)assetSetRepresentationName;
- (id)clientDomainName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 forAssetSetIdentifier:(id)arg2 withAssetSetRepresentation:(long long)arg3 withSetJobStatus:(id)arg4 withScheduledIntervalSecs:(long long)arg5 withScheduledRemainingSecs:(long long)arg6 withPushDelaySecs:(long long)arg7 withActiveClientCount:(long long)arg8 withActiveMonitorCount:(long long)arg9 withMaximumClientCount:(long long)arg10 withTotalClientCount:(long long)arg11;
- (long long)maximumClientCount;
- (long long)pushDelaySecs;
- (long long)scheduledIntervalSecs;
- (long long)scheduledRemainingSecs;
- (void)setActiveClientCount:(long long)arg1;
- (void)setActiveMonitorCount:(long long)arg1;
- (void)setAssetSetIdentifier:(id)arg1;
- (void)setAssetSetRepresentation:(long long)arg1;
- (void)setClientDomainName:(id)arg1;
- (id)setJobStatus;
- (void)setMaximumClientCount:(long long)arg1;
- (void)setPushDelaySecs:(long long)arg1;
- (void)setScheduledIntervalSecs:(long long)arg1;
- (void)setScheduledRemainingSecs:(long long)arg1;
- (void)setSetJobStatus:(id)arg1;
- (void)setTotalClientCount:(long long)arg1;
- (id)summary;
- (void)summaryBuildMaxColumnStrings:(id)arg1;
- (id)summaryPadded:(id)arg1;
- (long long)totalClientCount;

@end
