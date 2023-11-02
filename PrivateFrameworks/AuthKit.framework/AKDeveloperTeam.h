
@interface AKDeveloperTeam : NSObject <NSSecureCoding> {
    NSDictionary * _apps;
    NSString * _privateEmail;
    NSString * _teamID;
    NSString * _userIdentifier;
}

@property (nonatomic, copy) NSDictionary *apps;
@property (nonatomic, copy) NSString *privateEmail;
@property (nonatomic, copy) NSString *teamID;
@property (nonatomic, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apps;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;
- (id)privateEmail;
- (void)setApps:(id)arg1;
- (void)setPrivateEmail:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)teamID;
- (id)userIdentifier;

@end
