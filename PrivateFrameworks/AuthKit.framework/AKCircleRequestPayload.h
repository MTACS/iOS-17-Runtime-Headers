
@interface AKCircleRequestPayload : NSObject <NSSecureCoding> {
    bool  _URLResponse;
    NSString * _altDSID;
    unsigned long long  _circleStep;
    long long  _clientErrorCode;
    NSData * _clientInfo;
    NSNumber * _localPresenceFound;
    NSNumber * _presenceCheckPassed;
    bool  _presenceFallbackApproved;
    long long  _presenceMode;
    NSUUID * _presenceSID;
    NSDictionary * _responseInfo;
    AKPushMessage * _responseMessage;
    NSString * _serverInfo;
    bool  _supportsPresence;
    NSString * _transactionId;
}

@property (getter=isURLResponse, nonatomic) bool URLResponse;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic) unsigned long long circleStep;
@property (nonatomic) long long clientErrorCode;
@property (nonatomic, retain) NSData *clientInfo;
@property (nonatomic, copy) NSNumber *localPresenceFound;
@property (nonatomic, copy) NSNumber *presenceCheckPassed;
@property (nonatomic) bool presenceFallbackApproved;
@property (nonatomic) long long presenceMode;
@property (nonatomic, retain) NSUUID *presenceSID;
@property (nonatomic, retain) NSDictionary *responseInfo;
@property (nonatomic, retain) AKPushMessage *responseMessage;
@property (nonatomic, retain) NSString *serverInfo;
@property (nonatomic) bool supportsPresence;
@property (nonatomic, retain) NSString *transactionId;

+ (id)_dictionaryWithPlistData:(id)arg1;
+ (id)payloadWithMessage:(id)arg1;
+ (id)payloadWithResponseData:(id)arg1 forCircleStep:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (unsigned long long)circleStep;
- (long long)clientErrorCode;
- (id)clientInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAcceptingPayload;
- (bool)isRequestingPayload;
- (bool)isURLResponse;
- (id)localPresenceFound;
- (id)presenceCheckPassed;
- (bool)presenceFallbackApproved;
- (long long)presenceMode;
- (id)presenceSID;
- (id)replyPayload;
- (id)responseInfo;
- (id)responseMessage;
- (id)serverInfo;
- (void)setAltDSID:(id)arg1;
- (void)setCircleStep:(unsigned long long)arg1;
- (void)setClientErrorCode:(long long)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setLocalPresenceFound:(id)arg1;
- (void)setPresenceCheckPassed:(id)arg1;
- (void)setPresenceFallbackApproved:(bool)arg1;
- (void)setPresenceMode:(long long)arg1;
- (void)setPresenceSID:(id)arg1;
- (void)setResponseInfo:(id)arg1;
- (void)setResponseMessage:(id)arg1;
- (void)setServerInfo:(id)arg1;
- (void)setSupportsPresence:(bool)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setURLResponse:(bool)arg1;
- (bool)supportsPresence;
- (id)transactionId;

@end
