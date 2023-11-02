
@interface PLNetworkUsageSnapshot : NSObject {
    NSString * _cellType;
    NSString * _quality;
    NSDate * _timestamp;
    NSString * _wifi;
}

@property (retain) NSString *cellType;
@property (retain) NSString *quality;
@property (retain) NSDate *timestamp;
@property (retain) NSString *wifi;

- (void).cxx_destruct;
- (id)cellType;
- (double)computeEnergyDiff:(id)arg1;
- (double)computeEnergyDiffUntilNow:(bool)arg1;
- (id)description;
- (id)initWithInfo:(id)arg1;
- (id)quality;
- (void)setCellType:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setWifi:(id)arg1;
- (void)snapshotNetworkState;
- (id)timestamp;
- (id)wifi;

@end
