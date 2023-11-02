
@interface GKLeaderboardViewController : GKGameCenterViewController {
    <GKLeaderboardViewControllerDelegate> * _leaderboardDelegate;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) <GKLeaderboardViewControllerDelegate> *leaderboardDelegate;
@property (nonatomic) long long timeScope;

- (void).cxx_destruct;
- (id)category;
- (id)init;
- (id)leaderboardDelegate;
- (void)notifyDelegateOnWillFinish;
- (void)setCategory:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)timeScope;

@end
