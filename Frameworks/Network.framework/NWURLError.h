
@interface NWURLError : NSError {
    NSURL * _failingURL;
    NSNumber * _networkUnavailableReason;
    NSObject<OS_nw_path> * _path;
    struct __SecTrust { } * _peerTrust;
    NSNumber * _privacyProxyFailure;
    NSObject<OS_nw_resolution_report> * _resolutionReport;
    NSError * _underlyingError;
    NSNumber * _vpnInactiveFailure;
    NSNumber * _webSocketHandshakeFailureReason;
}

@property (nonatomic, retain) NSURL *failingURL;
@property (nonatomic, retain) NSNumber *networkUnavailableReason;
@property (nonatomic, retain) NSObject<OS_nw_path> *path;
@property (nonatomic) struct __SecTrust { }*peerTrust;
@property (nonatomic, retain) NSNumber *privacyProxyFailure;
@property (nonatomic, retain) NSObject<OS_nw_resolution_report> *resolutionReport;
@property (nonatomic, retain) NSError *underlyingError;
@property (nonatomic, retain) NSNumber *vpnInactiveFailure;
@property (nonatomic, retain) NSNumber *webSocketHandshakeFailureReason;

+ (id)allUserInfoKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)failingURL;
- (void)fillErrorForLoader:(id)arg1 andTask:(id)arg2;
- (long long)getConnectionError;
- (id)initWithCoder:(id)arg1;
- (id)networkUnavailableReason;
- (id)path;
- (struct __SecTrust { }*)peerTrust;
- (id)privacyProxyFailure;
- (id)resolutionReport;
- (void)setFailingURL:(id)arg1;
- (void)setNetworkUnavailableReason:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPeerTrust:(struct __SecTrust { }*)arg1;
- (void)setPrivacyProxyFailure:(id)arg1;
- (void)setResolutionReport:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (void)setVpnInactiveFailure:(id)arg1;
- (void)setWebSocketHandshakeFailureReason:(id)arg1;
- (long long)translateCodeForError:(struct __CFError { }*)arg1;
- (long long)translateDNSError:(long long)arg1;
- (long long)translatePOSIXError:(long long)arg1;
- (long long)translateTLSError:(long long)arg1;
- (id)underlyingError;
- (id)userInfo;
- (id)vpnInactiveFailure;
- (id)webSocketHandshakeFailureReason;

@end
