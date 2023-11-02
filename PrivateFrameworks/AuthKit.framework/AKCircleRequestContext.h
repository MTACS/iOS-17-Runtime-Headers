
@interface AKCircleRequestContext : NSObject <NSSecureCoding> {
    bool  __notifyOfTimeout;
    AKAppleIDAuthenticationContext * _authContext;
    NSString * _heartbeatTokenValue;
    NSString * _identityTokenValue;
    AKCircleRequestPayload * _payload;
    NSString * _pushToken;
    bool  _waitForReply;
    double  _waitForReplyTimeout;
}

@property (nonatomic) bool _notifyOfTimeout;
@property (nonatomic, retain) AKAppleIDAuthenticationContext *authContext;
@property (nonatomic, retain) NSString *heartbeatTokenValue;
@property (nonatomic, retain) NSString *identityTokenValue;
@property (nonatomic, retain) AKCircleRequestPayload *payload;
@property (nonatomic, retain) NSString *pushToken;
@property (nonatomic) bool waitForReply;
@property (nonatomic) double waitForReplyTimeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_notifyOfTimeout;
- (id)authContext;
- (void)encodeWithCoder:(id)arg1;
- (id)heartbeatTokenValue;
- (id)identityTokenValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (id)pushToken;
- (void)setAuthContext:(id)arg1;
- (void)setHeartbeatTokenValue:(id)arg1;
- (void)setIdentityTokenValue:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setWaitForReply:(bool)arg1;
- (void)setWaitForReplyTimeout:(double)arg1;
- (void)set_notifyOfTimeout:(bool)arg1;
- (bool)waitForReply;
- (double)waitForReplyTimeout;

@end
