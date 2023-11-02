
@interface BlastDoorIDSCommandWebTunnelResponse : NSObject {
    void iDSCommandWebTunnelResponse;
}

@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long epochTimeNanos;
@property (nonatomic, readonly) bool has_epochTimeNanos;
@property (nonatomic, readonly) bool has_httpResponseStatus;
@property (nonatomic, readonly) bool has_messageId;
@property (nonatomic, readonly) bool has_responseStatus;
@property (nonatomic, readonly) NSData *httpBody;
@property (nonatomic, readonly) NSData *httpBodyKey;
@property (nonatomic, readonly) NSString *httpBodyUrl;
@property (nonatomic, readonly) NSString *httpErrorMsg;
@property (nonatomic, readonly) BlastDoorAPSUserPayloadHttpHeaders *httpHeaders;
@property (nonatomic, readonly) long long httpResponseStatus;
@property (nonatomic, readonly) NSString *httpUrl;
@property (nonatomic, readonly) long long messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) long long responseStatus;

- (void).cxx_destruct;
- (long long)command;
- (id)contentType;
- (id)description;
- (long long)epochTimeNanos;
- (bool)has_epochTimeNanos;
- (bool)has_httpResponseStatus;
- (bool)has_messageId;
- (bool)has_responseStatus;
- (id)httpBody;
- (id)httpBodyKey;
- (id)httpBodyUrl;
- (id)httpErrorMsg;
- (id)httpHeaders;
- (long long)httpResponseStatus;
- (id)httpUrl;
- (id)init;
- (long long)messageId;
- (id)messageUUID;
- (long long)responseStatus;

@end
