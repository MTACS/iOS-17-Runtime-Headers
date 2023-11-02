
@interface NPTResults : NSObject <NSCopying, NSSecureCoding> {
    NPTMetricResult * _downloadResults;
    NSDictionary * _metadata;
    NPTPingResult * _pingResults;
    NPTMetricResult * _uploadResults;
}

@property (nonatomic, readonly) NSDictionary *asDictionary;
@property (nonatomic, retain) NPTMetricResult *downloadResults;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NPTPingResult *pingResults;
@property (nonatomic, retain) NPTMetricResult *uploadResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadResults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)pingResults;
- (void)setDownloadResults:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPingResults:(id)arg1;
- (void)setUploadResults:(id)arg1;
- (id)uploadResults;

@end
