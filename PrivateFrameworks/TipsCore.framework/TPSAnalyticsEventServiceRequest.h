
@interface TPSAnalyticsEventServiceRequest : TPSAnalyticsEvent {
    NSString * _etag;
    unsigned long long  _requestTime;
    unsigned long long  _requestTtfb;
    long long  _responseHeadersSize;
    long long  _responseSize;
    unsigned long long  _responseTime;
    long long  _statusCode;
    unsigned long long  _timeToDownloadResponse;
    NSString * _type;
    NSURL * _url;
}

+ (id)serviceRequestEventWithType:(id)arg1 metrics:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(id)arg1 metrics:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;

@end
