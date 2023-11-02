
@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString * _accountName;
    unsigned long long  _loginStatus;
    unsigned short  _numberOfChallenges;
    unsigned short  _numberOfRequests;
    unsigned short  _numberOfTurns;
}

@property unsigned long long loginStatus;

+ (unsigned long long)currentContentVersion;
+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountName;
- (int)defaultFamiliarity;
- (int)globalFriendListAccess;
- (bool)hasAcknowledgedLatestGDPR;
- (bool)isDefaultContactsIntegrationConsent;
- (bool)isDefaultNickname;
- (bool)isDefaultPrivacyVisibility;
- (bool)isFindable;
- (bool)isFriend;
- (bool)isLocalPlayer;
- (bool)isPhotoPending;
- (bool)isPurpleBuddyAccount;
- (bool)isUnderage;
- (unsigned long long)loginStatus;
- (id)minimalInternal;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (void)setAccountName:(id)arg1;
- (void)setDefaultContactsIntegrationConsent:(bool)arg1;
- (void)setDefaultNickname:(bool)arg1;
- (void)setDefaultPrivacyVisibility:(bool)arg1;
- (void)setFindable:(bool)arg1;
- (void)setGlobalFriendListAccess:(int)arg1;
- (void)setLoginStatus:(unsigned long long)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setPhotoPending:(bool)arg1;
- (void)setPurpleBuddyAccount:(bool)arg1;
- (void)setUnderage:(bool)arg1;

@end
