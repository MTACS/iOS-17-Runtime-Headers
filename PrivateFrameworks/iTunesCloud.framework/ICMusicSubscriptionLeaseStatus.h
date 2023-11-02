
@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying> {
    bool  _hasInflightLeaseAcquisition;
    bool  _hasOfflinePlaybackKeys;
    bool  _hasOnlinePlaybackKeys;
    bool  _hasPendingLeaseAcquisition;
    long long  _leaseState;
    bool  _shouldPlaybackRequireOnlineKeys;
    ICStoreDialogResponse * _stateReasonDialog;
    NSDictionary * _stateReasonDialogMetricsDictionary;
    bool  _takenDueToLeasePrevention;
}

@property (nonatomic) bool hasInflightLeaseAcquisition;
@property (nonatomic) bool hasOfflinePlaybackKeys;
@property (nonatomic) bool hasOnlinePlaybackKeys;
@property (nonatomic) bool hasPendingLeaseAcquisition;
@property (nonatomic) long long leaseState;
@property (nonatomic) bool shouldPlaybackRequireOnlineKeys;
@property (nonatomic, copy) ICStoreDialogResponse *stateReasonDialog;
@property (nonatomic, copy) NSDictionary *stateReasonDialogMetricsDictionary;
@property (getter=isTakenDueToLeasePrevention, nonatomic) bool takenDueToLeasePrevention;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasInflightLeaseAcquisition;
- (bool)hasOfflinePlaybackKeys;
- (bool)hasOnlinePlaybackKeys;
- (bool)hasPendingLeaseAcquisition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTakenDueToLeasePrevention;
- (long long)leaseState;
- (void)setHasInflightLeaseAcquisition:(bool)arg1;
- (void)setHasOfflinePlaybackKeys:(bool)arg1;
- (void)setHasOnlinePlaybackKeys:(bool)arg1;
- (void)setHasPendingLeaseAcquisition:(bool)arg1;
- (void)setLeaseState:(long long)arg1;
- (void)setShouldPlaybackRequireOnlineKeys:(bool)arg1;
- (void)setStateReasonDialog:(id)arg1;
- (void)setStateReasonDialogMetricsDictionary:(id)arg1;
- (void)setTakenDueToLeasePrevention:(bool)arg1;
- (bool)shouldPlaybackRequireOnlineKeys;
- (id)stateReasonDialog;
- (id)stateReasonDialogMetricsDictionary;

@end
