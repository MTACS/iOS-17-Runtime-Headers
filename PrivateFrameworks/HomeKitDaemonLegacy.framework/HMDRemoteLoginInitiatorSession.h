
@interface HMDRemoteLoginInitiatorSession : HMFObject {
    NSString * _sessionID;
}

@property (nonatomic, readonly) NSString *sessionID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSessionID:(id)arg1;
- (id)sessionID;

@end
