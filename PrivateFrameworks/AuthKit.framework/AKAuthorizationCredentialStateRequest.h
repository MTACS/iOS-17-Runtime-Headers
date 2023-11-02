
@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _clientID;
    bool  _shouldIgnoreTeamID;
    bool  _shouldIgnoreUserID;
    NSString * _teamID;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic) bool shouldIgnoreTeamID;
@property (nonatomic) bool shouldIgnoreUserID;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, copy) NSString *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)clientID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setClientID:(id)arg1;
- (void)setShouldIgnoreTeamID:(bool)arg1;
- (void)setShouldIgnoreUserID:(bool)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserID:(id)arg1;
- (bool)shouldIgnoreTeamID;
- (bool)shouldIgnoreUserID;
- (id)teamID;
- (id)userID;

@end
