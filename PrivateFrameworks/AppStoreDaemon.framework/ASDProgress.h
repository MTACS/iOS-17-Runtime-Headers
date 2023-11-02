
@interface ASDProgress : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    long long  _completedUnitCount;
    long long  _downloadCompletedUnitCount;
    long long  _downloadTotalUnitCount;
    long long  _essentialBackgroundAssetDownloadEstimate;
    bool  _hasPostProcessing;
    long long  _installCompletedUnitCount;
    long long  _installTotalUnitCount;
    long long  _phase;
    long long  _postProcessCompletedUnitCount;
    long long  _postProcessTotalUnitCount;
    bool  _reportRemotely;
    long long  _secondsRemaining;
    double  _throughput;
    long long  _totalUnitCount;
}

@property (retain) NSString *bundleID;
@property long long completedUnitCount;
@property long long downloadCompletedUnitCount;
@property long long downloadTotalUnitCount;
@property long long essentialBackgroundAssetDownloadEstimate;
@property bool hasPostProcessing;
@property long long installCompletedUnitCount;
@property long long installTotalUnitCount;
@property long long phase;
@property long long postProcessCompletedUnitCount;
@property long long postProcessTotalUnitCount;
@property bool reportRemotely;
@property long long secondsRemaining;
@property double throughput;
@property long long totalUnitCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (long long)completedUnitCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)downloadCompletedUnitCount;
- (long long)downloadTotalUnitCount;
- (void)encodeWithCoder:(id)arg1;
- (long long)essentialBackgroundAssetDownloadEstimate;
- (bool)hasPostProcessing;
- (id)initWithCoder:(id)arg1;
- (long long)installCompletedUnitCount;
- (long long)installTotalUnitCount;
- (long long)phase;
- (long long)postProcessCompletedUnitCount;
- (long long)postProcessTotalUnitCount;
- (bool)reportRemotely;
- (long long)secondsRemaining;
- (void)setBundleID:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setDownloadCompletedUnitCount:(long long)arg1;
- (void)setDownloadTotalUnitCount:(long long)arg1;
- (void)setEssentialBackgroundAssetDownloadEstimate:(long long)arg1;
- (void)setHasPostProcessing:(bool)arg1;
- (void)setInstallCompletedUnitCount:(long long)arg1;
- (void)setInstallTotalUnitCount:(long long)arg1;
- (void)setPhase:(long long)arg1;
- (void)setPostProcessCompletedUnitCount:(long long)arg1;
- (void)setPostProcessTotalUnitCount:(long long)arg1;
- (void)setReportRemotely:(bool)arg1;
- (void)setSecondsRemaining:(long long)arg1;
- (void)setThroughput:(double)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (double)throughput;
- (long long)totalUnitCount;

@end
