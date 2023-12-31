
@interface CATSessionMessageResume : CATSessionMessage {
    NSDictionary * _clientUserInfo;
    NSUUID * _sessionUUID;
}

@property (nonatomic, copy) NSDictionary *clientUserInfo;
@property (nonatomic, copy) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientUserInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1;
- (id)sessionUUID;
- (void)setClientUserInfo:(id)arg1;
- (void)setSessionUUID:(id)arg1;

@end
