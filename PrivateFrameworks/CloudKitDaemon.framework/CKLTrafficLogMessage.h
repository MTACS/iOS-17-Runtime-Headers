
@interface CKLTrafficLogMessage : NSObject {
    void bodyStreamResetCount;
    void requestHeaders;
    void requestMethod;
    void requestObjects;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestURL;
    void responseHeaders;
    void responseObjects;
    void responseStatus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  responseTime;
    void uuid;
}

@property (nonatomic, readonly) long long bodyStreamResetCount;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *requestHeaders;
@property (nonatomic, readonly) NSString *requestMethod;
@property (nonatomic, readonly) NSArray *requestObjects;
@property (nonatomic, readonly) NSDate *requestTime;
@property (nonatomic, readonly) NSURL *requestURL;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, readonly) NSArray *responseObjects;
@property (nonatomic, readonly) long long responseStatus;
@property (nonatomic, readonly) NSDate *responseTime;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (long long)bodyStreamResetCount;
- (id)bundleIdentifier;
- (id)containerIdentifier;
- (id)description;
- (id)init;
- (id)initWithUuid:(id)arg1 requestMetadata:(id)arg2 requestObjects:(id)arg3 bodyStreamResetCount:(long long)arg4 responseMetadata:(id)arg5 responseObjects:(id)arg6;
- (id)requestHeaders;
- (id)requestMethod;
- (id)requestObjects;
- (id)requestTime;
- (id)requestURL;
- (id)responseHeaders;
- (id)responseObjects;
- (long long)responseStatus;
- (id)responseTime;
- (id)uuid;

@end
