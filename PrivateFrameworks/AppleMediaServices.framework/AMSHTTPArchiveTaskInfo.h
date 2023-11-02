
@interface AMSHTTPArchiveTaskInfo : NSObject <NSSecureCoding> {
    NSData * _HTTPBody;
    NSURLSessionTaskMetrics * _metrics;
    NSData * _responseData;
}

@property (nonatomic, readonly) NSData *HTTPBody;
@property (nonatomic, readonly) NSURLSessionTaskMetrics *metrics;
@property (nonatomic, readonly) NSData *responseData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)HTTPBody;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLTaskInfo:(id)arg1;
- (id)metrics;
- (id)responseData;

@end
