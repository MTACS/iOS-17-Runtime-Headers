
@interface IDSGlobalLinkRequestMetadata : NSObject {
    IDSGFTMetricsRequest * _metricsRequest;
    double  _startTime;
    NSString * _token;
}

@property (readonly) IDSGFTMetricsRequest *metricsRequest;
@property (readonly) double startTime;
@property (readonly) NSString *token;

- (void).cxx_destruct;
- (id)initWithStartTime:(double)arg1 token:(id)arg2 metricsRequest:(id)arg3;
- (id)metricsRequest;
- (double)startTime;
- (id)token;

@end
