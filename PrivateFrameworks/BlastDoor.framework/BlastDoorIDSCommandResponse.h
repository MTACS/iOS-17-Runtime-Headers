
@interface BlastDoorIDSCommandResponse : NSObject {
    void iDSCommandResponse;
}

@property (nonatomic, readonly) NSString *applicationId;
@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long failReason;
@property (nonatomic, readonly) bool has_failReason;
@property (nonatomic, readonly) bool has_internalBuild;
@property (nonatomic, readonly) bool has_loggingProfile;
@property (nonatomic, readonly) bool has_messageId;
@property (nonatomic, readonly) bool has_protocolVersion;
@property (nonatomic, readonly) bool has_requestType;
@property (nonatomic, readonly) bool has_responseStatus;
@property (nonatomic, readonly) bool has_sharedSession;
@property (nonatomic, readonly) NSData *idsSessionId;
@property (nonatomic, readonly) bool internalBuild;
@property (nonatomic, readonly) bool loggingProfile;
@property (nonatomic, readonly) long long messageId;
@property (nonatomic, readonly) NSData *messageUUID;
@property (nonatomic, readonly) long long protocolVersion;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) long long responseStatus;
@property (nonatomic, readonly) bool sharedSession;
@property (nonatomic, readonly) NSData *token;

- (void).cxx_destruct;
- (id)applicationId;
- (long long)command;
- (id)description;
- (long long)failReason;
- (bool)has_failReason;
- (bool)has_internalBuild;
- (bool)has_loggingProfile;
- (bool)has_messageId;
- (bool)has_protocolVersion;
- (bool)has_requestType;
- (bool)has_responseStatus;
- (bool)has_sharedSession;
- (id)idsSessionId;
- (id)init;
- (bool)internalBuild;
- (bool)loggingProfile;
- (long long)messageId;
- (id)messageUUID;
- (long long)protocolVersion;
- (long long)requestType;
- (long long)responseStatus;
- (bool)sharedSession;
- (id)token;

@end
