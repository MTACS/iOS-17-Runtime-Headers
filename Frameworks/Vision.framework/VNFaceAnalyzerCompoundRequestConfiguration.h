
@interface VNFaceAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {
    NSMutableDictionary * _detectorConfigurationOptions;
    NSString * _detectorType;
    NSMutableArray * _originalRequests;
}

@property (nonatomic, copy) NSString *detectorType;
@property (nonatomic, readonly) NSMutableArray *originalRequests;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectorConfigurationOptions;
- (id)detectorType;
- (id)initWithRequestClass:(Class)arg1;
- (id)originalRequests;
- (void)setDetectorConfigurationOption:(id)arg1 value:(id)arg2;
- (void)setDetectorConfigurationOptions:(id)arg1;
- (void)setDetectorType:(id)arg1;
- (void)setResolvedRevision:(unsigned long long)arg1;

@end
