
@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {
    bool  _APSRelayAttempted;
    bool  _APSRelaySucceeded;
    NSUUID * _UUID;
    double  _beginTime;
    double  _cacheLookupBeginTime;
    double  _cacheLookupEndTime;
    NSURLResponse * _cachedResponse;
    __CFN_ConnectionMetrics * _connectionMetrics;
    NSObject<OS_nw_data_transfer_report> * _dataTransferReport;
    unsigned long long  _endReason;
    double  _endTime;
    bool  _firstOnConnection;
    NSURLResponse * _lastResponse;
    long long  _lastResponseBodySize;
    long long  _lastResponseBodyTransferSize;
    long long  _lastResponseHeaderSize;
    long long  _options;
    int  _pidForHAR;
    bool  _pushed;
    NSURLRequest * _request;
    double  _requestBeginTime;
    long long  _requestBodySize;
    long long  _requestBodyTransferSize;
    double  _requestEndTime;
    long long  _requestHeaderSize;
    double  _responseBeginTime;
    long long  _responseBodySize;
    long long  _responseBodyTransferSize;
    double  _responseEndTime;
    long long  _responseHeaderSize;
    bool  _scheduledOriginLoad;
    long long  _schedulingTier;
    NSDictionary * _subflowCountsBegin;
    NSDictionary * _subflowCountsEnd;
    NSDictionary * _tcpInfoBegin;
    NSDictionary * _tcpInfoEnd;
    NSURLRequest * _transferredRequest;
}

@property (readonly) __CFN_ConnectionMetrics *_daemon_connectionMetrics;
@property (nonatomic, readonly) long long _daemon_requestBodyTransferSize;
@property (nonatomic, readonly) long long _daemon_requestHeaderSize;
@property (nonatomic, readonly) long long _daemon_responseBodyTransferSize;
@property (nonatomic, readonly) long long _daemon_responseHeaderSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_daemon_connectionMetrics;
- (long long)_daemon_requestBodyTransferSize;
- (long long)_daemon_requestHeaderSize;
- (long long)_daemon_responseBodyTransferSize;
- (long long)_daemon_responseHeaderSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
