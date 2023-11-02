
@interface OspreyMutableRequest : NSObject {
    NSMutableDictionary * _additionalHeaders;
    bool  _allowsCellularAccess;
    NSString * _clientTraceIdentifier;
    bool  _compressionEnabled;
    bool  _enableDeviceAuthentication;
    bool  _forceHTTPv2;
    NSString * _methodName;
}

@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, copy) NSString *clientTraceIdentifier;
@property (getter=isCompressionEnabled, nonatomic) bool compressionEnabled;
@property (nonatomic) bool enableDeviceAuthentication;
@property (nonatomic) bool forceHTTPv2;
@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic) bool requireAbsintheAuthentication;

- (void).cxx_destruct;
- (bool)allowsCellularAccess;
- (id)buildInternalRequest;
- (id)clientTraceIdentifier;
- (bool)enableDeviceAuthentication;
- (bool)forceHTTPv2;
- (id)initWithMethodName:(id)arg1;
- (bool)isCompressionEnabled;
- (id)methodName;
- (bool)requireAbsintheAuthentication;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setClientTraceIdentifier:(id)arg1;
- (void)setCompressionEnabled:(bool)arg1;
- (void)setEnableDeviceAuthentication:(bool)arg1;
- (void)setForceHTTPv2:(bool)arg1;
- (void)setRequireAbsintheAuthentication:(bool)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

@end
