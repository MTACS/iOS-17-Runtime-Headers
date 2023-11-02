
@interface OspreyRequest : NSObject {
    bool  _allowsCellularAccess;
    NSString * _clientTraceId;
    NSData * _data;
    NSNumber * _deviceAuthenticationVersion;
    bool  _enableDeviceAuthentication;
    bool  _forceHTTPv2;
    NSDictionary * _headers;
    NSString * _methodName;
    NSData * _signedDeviceAuthenticationData;
    bool  _useCompression;
    NSString * _userAgent;
}

@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, copy) NSString *clientTraceId;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSNumber *deviceAuthenticationVersion;
@property (nonatomic) bool enableDeviceAuthentication;
@property (nonatomic) bool forceHTTPv2;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic) bool requireAbsintheAuthentication;
@property (nonatomic, retain) NSData *signedDeviceAuthenticationData;
@property (nonatomic) bool useCompression;
@property (nonatomic, readonly) NSString *userAgent;

+ (id)requestWithMethodName:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsCellularAccess;
- (id)clientTraceId;
- (id)data;
- (id)deviceAuthenticationVersion;
- (bool)enableDeviceAuthentication;
- (bool)forceHTTPv2;
- (id)grpcRequestWithBaseURL:(id)arg1;
- (id)headers;
- (id)initWithMethodName:(id)arg1;
- (id)methodName;
- (bool)requireAbsintheAuthentication;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setClientTraceId:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDeviceAuthenticationVersion:(id)arg1;
- (void)setEnableDeviceAuthentication:(bool)arg1;
- (void)setForceHTTPv2:(bool)arg1;
- (void)setHeaders:(id)arg1;
- (void)setRequireAbsintheAuthentication:(bool)arg1;
- (void)setSignedDeviceAuthenticationData:(id)arg1;
- (void)setUseCompression:(bool)arg1;
- (id)signedDeviceAuthenticationData;
- (bool)useCompression;
- (id)userAgent;

@end
