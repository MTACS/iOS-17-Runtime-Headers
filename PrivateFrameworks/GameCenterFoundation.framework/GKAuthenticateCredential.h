
@interface GKAuthenticateCredential : GKInternalRepresentation {
    NSString * _accountName;
    NSString * _authenticationToken;
    NSString * _playerID;
}

@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) NSString *authenticationToken;
@property (nonatomic, retain) NSString *playerID;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)accountName;
- (id)authenticationToken;
- (id)init;
- (id)playerID;
- (void)setAccountName:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setPlayerID:(id)arg1;

@end
