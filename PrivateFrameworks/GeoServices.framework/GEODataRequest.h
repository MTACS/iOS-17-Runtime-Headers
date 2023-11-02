
@interface GEODataRequest : NSObject {
    NSURL * _URL;
    NSDictionary * _additionalHTTPHeaders;
    GEOApplicationAuditToken * _auditToken;
    NSString * _backgroundSessionIdentifier;
    NSData * _bodyData;
    NSData * _cachedData;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _kind;
    unsigned long long  _multipathAlternatePort;
    unsigned long long  _multipathServiceType;
    unsigned long long  _options;
    <GEORequestCounterTicket> * _requestCounterTicket;
    GEODataRequestThrottlerToken * _throttleToken;
    double  _timeoutInterval;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *additionalHTTPHeaders;
@property (nonatomic, readonly) bool allowTLSSessionTicketUse;
@property (nonatomic, readonly, copy) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) NSString *backgroundSessionIdentifier;
@property (nonatomic, readonly, copy) NSData *bodyData;
@property (nonatomic, copy) NSData *cachedData;
@property (nonatomic, readonly) bool disallowCellularNetwork;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } kind;
@property (nonatomic, readonly) unsigned long long multipathAlternatePort;
@property (nonatomic, readonly) unsigned long long multipathServiceType;
@property (nonatomic, readonly) bool needsProxy;
@property (nonatomic, readonly) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, readonly) bool requireInexpensiveNetwork;
@property (nonatomic, readonly) bool requirePluggedIn;
@property (nonatomic, readonly) bool requireUnconstrainedNetwork;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) bool useHTTPPost;

- (void).cxx_destruct;
- (id)URL;
- (id)additionalHTTPHeaders;
- (bool)allowTLSSessionTicketUse;
- (id)auditToken;
- (id)backgroundSessionIdentifier;
- (id)bodyData;
- (id)cachedData;
- (id)description;
- (bool)disallowCellularNetwork;
- (id)init;
- (id)initForAnalyticsUploadRequest:(id)arg1 toURL:(id)arg2 requiresProxy:(bool)arg3 backgroundIdentifier:(id)arg4 compressRequest:(bool)arg5 allowCellular:(bool)arg6 allowBattery:(bool)arg7 timeToLive:(double)arg8 requestCounterTicket:(id)arg9 throttleToken:(id)arg10;
- (id)initWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 URL:(id)arg2 auditToken:(id)arg3 timeoutInterval:(double)arg4 additionalHTTPHeaders:(id)arg5 bodyData:(id)arg6 userAgent:(id)arg7 entityTag:(id)arg8 cachedData:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 backgroundSessionIdentifier:(id)arg13 throttleToken:(id)arg14 options:(unsigned long long)arg15;
- (id)initWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 URL:(id)arg2 auditToken:(id)arg3 timeoutInterval:(double)arg4 additionalHTTPHeaders:(id)arg5 bodyData:(id)arg6 userAgent:(id)arg7 entityTag:(id)arg8 cachedData:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 throttleToken:(id)arg13 options:(unsigned long long)arg14;
- (id)initWithKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 auditToken:(id)arg5 timeoutInterval:(double)arg6 traits:(id)arg7 requestCounterTicket:(id)arg8 multipathServiceType:(unsigned long long)arg9 multipathAlternatePort:(unsigned long long)arg10 throttleToken:(id)arg11 options:(unsigned long long)arg12;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })kind;
- (unsigned long long)multipathAlternatePort;
- (unsigned long long)multipathServiceType;
- (bool)needsProxy;
- (id)newURLRequest;
- (id)publicLogDescription;
- (id)requestCounterTicket;
- (bool)requireInexpensiveNetwork;
- (bool)requirePluggedIn;
- (bool)requireUnconstrainedNetwork;
- (void)setCachedData:(id)arg1;
- (id)throttleToken;
- (double)timeoutInterval;
- (id)updatedRequestWithNewBodyData:(id)arg1;
- (id)updatedRequestWithNewProtobufRequest:(id)arg1;
- (bool)useHTTPPost;

@end
