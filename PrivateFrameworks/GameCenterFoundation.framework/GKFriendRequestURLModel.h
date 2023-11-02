
@interface GKFriendRequestURLModel : NSObject {
    NSString * _friendCode;
    NSString * _friendRequestState;
    NSString * _friendRequestVersion;
    NSString * _friendSupportPageURL;
    GKPlayer * _initiator;
}

@property (nonatomic, retain) NSString *friendCode;
@property (nonatomic, retain) NSString *friendRequestState;
@property (nonatomic, retain) NSString *friendRequestVersion;
@property (nonatomic, retain) NSString *friendSupportPageURL;
@property (nonatomic, retain) GKPlayer *initiator;

- (void).cxx_destruct;
- (id)description;
- (id)friendCode;
- (id)friendRequestState;
- (id)friendRequestVersion;
- (id)friendSupportPageURL;
- (id)initiator;
- (void)setFriendCode:(id)arg1;
- (void)setFriendRequestState:(id)arg1;
- (void)setFriendRequestVersion:(id)arg1;
- (void)setFriendSupportPageURL:(id)arg1;
- (void)setInitiator:(id)arg1;

@end
