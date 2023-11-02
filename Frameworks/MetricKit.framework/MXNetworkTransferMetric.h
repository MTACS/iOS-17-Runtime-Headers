
@interface MXNetworkTransferMetric : MXMetric {
    NSMeasurement * _cumulativeCellularDownload;
    NSMeasurement * _cumulativeCellularUpload;
    NSMeasurement * _cumulativeWifiDownload;
    NSMeasurement * _cumulativeWifiUpload;
}

@property (readonly) NSMeasurement *cumulativeCellularDownload;
@property (readonly) NSMeasurement *cumulativeCellularUpload;
@property (readonly) NSMeasurement *cumulativeWifiDownload;
@property (readonly) NSMeasurement *cumulativeWifiUpload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cumulativeCellularDownload;
- (id)cumulativeCellularUpload;
- (id)cumulativeWifiDownload;
- (id)cumulativeWifiUpload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCumulativeWifiUploadMeasurement:(id)arg1 cumulativeWifiDownloadMeasurement:(id)arg2 cumulativeCellularUploadMeasurement:(id)arg3 cumulativeCellularDownloadMeasurement:(id)arg4;
- (id)toDictionary;

@end
