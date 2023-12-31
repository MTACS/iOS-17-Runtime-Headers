
@interface RWIProtocolNetworkMetrics : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *connectionIdentifier;
@property (nonatomic) bool isProxyConnection;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSString *protocol;
@property (nonatomic, copy) NSString *remoteAddress;
@property (nonatomic) double requestBodyBytesSent;
@property (nonatomic) double requestHeaderBytesSent;
@property (nonatomic, retain) RWIProtocolNetworkHeaders *requestHeaders;
@property (nonatomic) double responseBodyBytesReceived;
@property (nonatomic) double responseBodyDecodedSize;
@property (nonatomic) double responseHeaderBytesReceived;
@property (nonatomic, retain) RWIProtocolSecurityConnection *securityConnection;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)connectionIdentifier;
- (bool)isProxyConnection;
- (long long)priority;
- (id)protocol;
- (id)remoteAddress;
- (double)requestBodyBytesSent;
- (double)requestHeaderBytesSent;
- (id)requestHeaders;
- (double)responseBodyBytesReceived;
- (double)responseBodyDecodedSize;
- (double)responseHeaderBytesReceived;
- (id)securityConnection;
- (void)setConnectionIdentifier:(id)arg1;
- (void)setIsProxyConnection:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setProtocol:(id)arg1;
- (void)setRemoteAddress:(id)arg1;
- (void)setRequestBodyBytesSent:(double)arg1;
- (void)setRequestHeaderBytesSent:(double)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setResponseBodyBytesReceived:(double)arg1;
- (void)setResponseBodyDecodedSize:(double)arg1;
- (void)setResponseHeaderBytesReceived:(double)arg1;
- (void)setSecurityConnection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_networkMetricsFromURLRequest:(id)arg1 response:(id)arg2 responseBody:(id)arg3 timingData:(id)arg4;

@end
