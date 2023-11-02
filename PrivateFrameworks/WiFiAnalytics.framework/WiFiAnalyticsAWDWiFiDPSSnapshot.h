
@interface WiFiAnalyticsAWDWiFiDPSSnapshot : PBCodable <NSCopying> {
    WiFiAnalyticsAWDWiFiDPSAWDLSnapshot * _awdlSnapshot;
    WiFiAnalyticsAWDWiFiDPSBTSnapshot * _btSnapshot;
    WiFiAnalyticsAWDWiFiUsageSnapshot * _lteSnapshot;
    WiFiAnalyticsAWDWiFiUsageSnapshot * _rc1Snapshot;
    WiFiAnalyticsAWDWiFiUsageSnapshot * _rc2Snapshot;
    WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotBE;
    WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotBK;
    WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotVI;
    WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotVO;
}

@property (nonatomic, retain) WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *awdlSnapshot;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiDPSBTSnapshot *btSnapshot;
@property (nonatomic, readonly) bool hasAwdlSnapshot;
@property (nonatomic, readonly) bool hasBtSnapshot;
@property (nonatomic, readonly) bool hasLteSnapshot;
@property (nonatomic, readonly) bool hasRc1Snapshot;
@property (nonatomic, readonly) bool hasRc2Snapshot;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotBE;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotBK;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotVI;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotVO;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiUsageSnapshot *lteSnapshot;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiUsageSnapshot *rc1Snapshot;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiUsageSnapshot *rc2Snapshot;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI;
@property (nonatomic, retain) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO;

- (void).cxx_destruct;
- (id)awdlSnapshot;
- (id)btSnapshot;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAwdlSnapshot;
- (bool)hasBtSnapshot;
- (bool)hasLteSnapshot;
- (bool)hasRc1Snapshot;
- (bool)hasRc2Snapshot;
- (bool)hasTxCompletionSnapshotBE;
- (bool)hasTxCompletionSnapshotBK;
- (bool)hasTxCompletionSnapshotVI;
- (bool)hasTxCompletionSnapshotVO;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lteSnapshot;
- (void)mergeFrom:(id)arg1;
- (id)rc1Snapshot;
- (id)rc2Snapshot;
- (bool)readFrom:(id)arg1;
- (void)setAwdlSnapshot:(id)arg1;
- (void)setBtSnapshot:(id)arg1;
- (void)setLteSnapshot:(id)arg1;
- (void)setRc1Snapshot:(id)arg1;
- (void)setRc2Snapshot:(id)arg1;
- (void)setTxCompletionSnapshotBE:(id)arg1;
- (void)setTxCompletionSnapshotBK:(id)arg1;
- (void)setTxCompletionSnapshotVI:(id)arg1;
- (void)setTxCompletionSnapshotVO:(id)arg1;
- (id)txCompletionSnapshotBE;
- (id)txCompletionSnapshotBK;
- (id)txCompletionSnapshotVI;
- (id)txCompletionSnapshotVO;
- (void)writeTo:(id)arg1;

@end
