
@interface WiFiUsageLQMKernelSamplePerACTxStatsMcast : WiFiUsageLQMKernelSamplePerACTxStats {
    unsigned long long  _txMcast;
    unsigned long long  _txMcastAllFailPerc;
    unsigned long long  _txMcastChipModeErrPerc;
    unsigned long long  _txMcastDroppedPerc;
    unsigned long long  _txMcastExpiredPerc;
    unsigned long long  _txMcastFailPerc;
    unsigned long long  _txMcastForceExpirePerc;
    unsigned long long  _txMcastFwFreePerc;
    unsigned long long  _txMcastMaxRetriesPerc;
    unsigned long long  _txMcastNoAckPerc;
    unsigned long long  _txMcastNoBuffPerc;
    unsigned long long  _txMcastNoResPerc;
    unsigned long long  _txMcastSuccessPerc;
}

@property (nonatomic, readonly) unsigned long long txMcast;
@property (nonatomic, readonly) unsigned long long txMcastAllFailPerc;
@property (nonatomic, readonly) unsigned long long txMcastChipModeErrPerc;
@property (nonatomic, readonly) unsigned long long txMcastDroppedPerc;
@property (nonatomic, readonly) unsigned long long txMcastExpiredPerc;
@property (nonatomic, readonly) unsigned long long txMcastFailPerc;
@property (nonatomic, readonly) unsigned long long txMcastForceExpirePerc;
@property (nonatomic, readonly) unsigned long long txMcastFwFreePerc;
@property (nonatomic, readonly) unsigned long long txMcastMaxRetriesPerc;
@property (nonatomic, readonly) unsigned long long txMcastNoAckPerc;
@property (nonatomic, readonly) unsigned long long txMcastNoBuffPerc;
@property (nonatomic, readonly) unsigned long long txMcastNoResPerc;
@property (nonatomic, readonly) unsigned long long txMcastSuccessPerc;

- (void)transformTXStats;
- (unsigned long long)txMcast;
- (unsigned long long)txMcastAllFailPerc;
- (unsigned long long)txMcastChipModeErrPerc;
- (unsigned long long)txMcastDroppedPerc;
- (unsigned long long)txMcastExpiredPerc;
- (unsigned long long)txMcastFailPerc;
- (unsigned long long)txMcastForceExpirePerc;
- (unsigned long long)txMcastFwFreePerc;
- (unsigned long long)txMcastMaxRetriesPerc;
- (unsigned long long)txMcastNoAckPerc;
- (unsigned long long)txMcastNoBuffPerc;
- (unsigned long long)txMcastNoResPerc;
- (unsigned long long)txMcastSuccessPerc;

@end
