
@interface IDSSOSLogger : NSObject <CUTMetricLogger> {
    IDSRateLimiter * _rateLimiter;
    NSString * _sosURLString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSRateLimiter *rateLimiter;
@property (nonatomic, retain) NSString *sosURLString;
@property (readonly) Class superclass;

+ (id)logger;
+ (id)loggerWithURLString:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSOSURLString:(id)arg1;
- (void)logMetric:(id)arg1;
- (id)rateLimiter;
- (void)setRateLimiter:(id)arg1;
- (void)setSosURLString:(id)arg1;
- (id)sosURLString;

@end
