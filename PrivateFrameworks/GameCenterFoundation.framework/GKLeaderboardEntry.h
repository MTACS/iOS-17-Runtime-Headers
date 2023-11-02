
@interface GKLeaderboardEntry : NSObject {
    GKLeaderboardEntryInternal * _internal;
}

@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *formattedScore;
@property (retain) GKLeaderboardEntryInternal *internal;
@property (nonatomic, readonly) GKPlayer *player;
@property (nonatomic, readonly) long long rank;
@property (nonatomic, readonly) long long score;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)formattedDifferenceBetweenFirstScore:(id)arg1 secondScore:(id)arg2;

- (void).cxx_destruct;
- (id)_gkScore;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)player;
- (void)setInternal:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completion:(id /* block */)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id /* block */)arg3;

@end
