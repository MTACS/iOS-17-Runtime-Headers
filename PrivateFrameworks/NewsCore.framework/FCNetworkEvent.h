
@interface FCNetworkEvent : NSObject <NSCopying> {
    NSString * _HTTPMethod;
    NSDictionary * _HTTPResponseHeaders;
    unsigned long long  _HTTPStatusCode;
    NSURL * _URL;
    double  _connectDuration;
    NSString * _containerName;
    double  _dnsDuration;
    NSError * _error;
    bool  _isProxyConnection;
    NSString * _operationID;
    double  _requestDuration;
    unsigned long long  _requestSize;
    NSString * _requestUUID;
    double  _responseDuration;
    NSString * _responseMIMEType;
    unsigned long long  _responseSize;
    double  _startTime;
    int  _type;
}

@property (nonatomic, readonly, copy) NSString *HTTPMethod;
@property (nonatomic, readonly, copy) NSDictionary *HTTPResponseHeaders;
@property (nonatomic, readonly) unsigned long long HTTPStatusCode;
@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) double connectDuration;
@property (nonatomic, readonly, copy) NSString *containerName;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double dnsDuration;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) bool isProxyConnection;
@property (nonatomic, readonly, copy) NSString *operationID;
@property (nonatomic, readonly) double requestDuration;
@property (nonatomic, readonly) unsigned long long requestSize;
@property (nonatomic, readonly, copy) NSString *requestUUID;
@property (nonatomic, readonly) double responseDuration;
@property (nonatomic, readonly, copy) NSString *responseMIMEType;
@property (nonatomic, readonly) unsigned long long responseSize;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double totalDuration;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)HTTPMethod;
- (id)HTTPResponseHeaders;
- (unsigned long long)HTTPStatusCode;
- (id)URL;
- (double)connectDuration;
- (id)containerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)debugDescription;
- (id)description;
- (double)dnsDuration;
- (id)error;
- (id)initWithType:(int)arg1 URL:(id)arg2 operationID:(id)arg3 requestUUID:(id)arg4 responseMIMEType:(id)arg5 HTTPStatusCode:(unsigned long long)arg6 HTTPMethod:(id)arg7 HTTPResponseHeaders:(id)arg8 containerName:(id)arg9 isProxyConnection:(bool)arg10 error:(id)arg11 startTime:(double)arg12 dnsDuration:(double)arg13 connectDuration:(double)arg14 requestDuration:(double)arg15 responseDuration:(double)arg16 requestSize:(double)arg17 responseSize:(double)arg18;
- (id)initWithType:(int)arg1 URLRequest:(id)arg2 operationID:(id)arg3 requestUUID:(id)arg4 startTime:(double)arg5 HTTPResponse:(id)arg6 metrics:(id)arg7 containerName:(id)arg8 error:(id)arg9;
- (id)initWithType:(int)arg1 ckRequestInfo:(id)arg2 operationID:(id)arg3 startTime:(double)arg4 containerName:(id)arg5 error:(id)arg6;
- (id)initWithType:(int)arg1 rcNetworkEvent:(id)arg2;
- (bool)isProxyConnection;
- (id)operationID;
- (double)requestDuration;
- (unsigned long long)requestSize;
- (id)requestUUID;
- (double)responseDuration;
- (id)responseMIMEType;
- (unsigned long long)responseSize;
- (double)startTime;
- (double)totalDuration;
- (int)type;

@end
