
@interface MXPowerlogData : MXSourceData {
    MXAnimationMetric * _animationMetrics;
    MXAppExitMetric * _applicationExitMetrics;
    MXAppLaunchMetric * _applicationLaunchMetrics;
    MXAppResponsivenessMetric * _applicationResponsivenessMetrics;
    MXAppRunTimeMetric * _applicationTimeMetrics;
    NSDate * _beginDate;
    MXCellularConditionMetric * _cellularConditionMetrics;
    MXCPUMetric * _cpuMetrics;
    MXDiskIOMetric * _diskIOMetrics;
    MXDisplayMetric * _displayMetrics;
    NSDate * _endDate;
    MXGPUMetric * _gpuMetrics;
    bool  _includesMultipleApplicationVersions;
    MXLocationActivityMetric * _locationActivityMetrics;
    MXMemoryMetric * _memoryMetrics;
    MXNetworkTransferMetric * _networkTransferMetrics;
    NSArray * _signpostMetrics;
}

@property (retain) MXAnimationMetric *animationMetrics;
@property (retain) MXAppExitMetric *applicationExitMetrics;
@property (retain) MXAppLaunchMetric *applicationLaunchMetrics;
@property (retain) MXAppResponsivenessMetric *applicationResponsivenessMetrics;
@property (retain) MXAppRunTimeMetric *applicationTimeMetrics;
@property (retain) NSDate *beginDate;
@property (retain) MXCellularConditionMetric *cellularConditionMetrics;
@property (retain) MXCPUMetric *cpuMetrics;
@property (retain) MXDiskIOMetric *diskIOMetrics;
@property (retain) MXDisplayMetric *displayMetrics;
@property (retain) NSDate *endDate;
@property (retain) MXGPUMetric *gpuMetrics;
@property bool includesMultipleApplicationVersions;
@property (retain) MXLocationActivityMetric *locationActivityMetrics;
@property (retain) MXMemoryMetric *memoryMetrics;
@property (retain) MXNetworkTransferMetric *networkTransferMetrics;
@property (retain) NSArray *signpostMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)animationMetrics;
- (id)applicationExitMetrics;
- (id)applicationLaunchMetrics;
- (id)applicationResponsivenessMetrics;
- (id)applicationTimeMetrics;
- (id)beginDate;
- (id)cellularConditionMetrics;
- (id)cpuMetrics;
- (id)diskIOMetrics;
- (id)displayMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)gpuMetrics;
- (bool)includesMultipleApplicationVersions;
- (id)initPayloadDataWithMutipleAppVersions:(bool)arg1 withTimeStampBegin:(id)arg2 withTimeStampEnd:(id)arg3 withMetrics:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)locationActivityMetrics;
- (id)memoryMetrics;
- (id)networkTransferMetrics;
- (void)setAnimationMetrics:(id)arg1;
- (void)setApplicationExitMetrics:(id)arg1;
- (void)setApplicationLaunchMetrics:(id)arg1;
- (void)setApplicationResponsivenessMetrics:(id)arg1;
- (void)setApplicationTimeMetrics:(id)arg1;
- (void)setBeginDate:(id)arg1;
- (void)setCellularConditionMetrics:(id)arg1;
- (void)setCpuMetrics:(id)arg1;
- (void)setDiskIOMetrics:(id)arg1;
- (void)setDisplayMetrics:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setGpuMetrics:(id)arg1;
- (void)setIncludesMultipleApplicationVersions:(bool)arg1;
- (void)setLocationActivityMetrics:(id)arg1;
- (void)setMemoryMetrics:(id)arg1;
- (void)setNetworkTransferMetrics:(id)arg1;
- (void)setSignpostMetrics:(id)arg1;
- (id)signpostMetrics;

@end
