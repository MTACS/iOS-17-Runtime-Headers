
@interface MEComposeSession : NSObject <NSCopying, NSSecureCoding> {
    MEComposeContext * _composeContext;
    MEMessage * _mailMessage;
    MERemoteExtension * _remoteExtension;
    <MEComposeSessionHostProtocol_XPC> * _remoteHostContext;
    NSUUID * _sessionID;
}

@property (nonatomic, retain) MEComposeContext *composeContext;
@property (nonatomic, retain) MEMessage *mailMessage;
@property (nonatomic, retain) MERemoteExtension *remoteExtension;
@property (nonatomic, retain) <MEComposeSessionHostProtocol_XPC> *remoteHostContext;
@property (nonatomic, retain) NSUUID *sessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)composeContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 composeContext:(id)arg2 mailMessage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mailMessage;
- (void)reloadSession;
- (id)remoteExtension;
- (id)remoteHostContext;
- (id)sessionID;
- (void)setComposeContext:(id)arg1;
- (void)setMailMessage:(id)arg1;
- (void)setRemoteExtension:(id)arg1;
- (void)setRemoteHostContext:(id)arg1;
- (void)setSessionID:(id)arg1;

@end
