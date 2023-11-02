
@interface GKFriendCodeDetailInternal : GKInternalRepresentation {
    NSArray * _alreadyUsedPlayerIDs;
    GKPlayerInternal * _creatorPlayer;
    NSString * _creatorPlayerID;
    NSString * _friendCode;
    long long  _friendCodeState;
    long long  _friendCodeUsageCount;
}

@property (nonatomic, retain) NSArray *alreadyUsedPlayerIDs;
@property (nonatomic, retain) GKPlayerInternal *creatorPlayer;
@property (nonatomic, retain) NSString *creatorPlayerID;
@property (nonatomic, retain) NSString *friendCode;
@property (nonatomic) long long friendCodeState;
@property (nonatomic) long long friendCodeUsageCount;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)alreadyUsedPlayerIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creatorPlayer;
- (id)creatorPlayerID;
- (id)friendCode;
- (long long)friendCodeState;
- (long long)friendCodeUsageCount;
- (void)setAlreadyUsedPlayerIDs:(id)arg1;
- (void)setCreatorPlayer:(id)arg1;
- (void)setCreatorPlayerID:(id)arg1;
- (void)setFriendCode:(id)arg1;
- (void)setFriendCodeState:(long long)arg1;
- (void)setFriendCodeUsageCount:(long long)arg1;

@end
