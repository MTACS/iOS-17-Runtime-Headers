
@interface GKLeaderboard : NSObject {
    <GKLeaderboardDelegate> * _delegate;
    GKLeaderboardInternal * _internal;
    int  _loadingCount;
    GKScore * _localPlayerScore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _playerScope;
    NSArray * _players;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSArray * _scores;
    long long  _timeScope;
}

@property (nonatomic, readonly) NSString *baseLeaderboardID;
@property (nonatomic, copy) NSString *category;
@property (nonatomic) <GKLeaderboardDelegate> *delegate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long friendRank;
@property (nonatomic, readonly) long long friendRankCount;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (retain) GKLeaderboardInternal *internal;
@property (getter=isLoading, readonly) bool loading;
@property (nonatomic) int loadingCount;
@property (nonatomic, retain) GKScore *localPlayerScore;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (nonatomic, readonly) NSDate *nextStartDate;
@property (nonatomic, readonly) long long overallRank;
@property (nonatomic, readonly) long long overallRankCount;
@property (nonatomic) long long playerScope;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic) long long timeScope;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadCategoriesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadHighlightsWithPlayerScope:(long long)arg1 timeScope:(long long)arg2 game:(id)arg3 handler:(id /* block */)arg4;
+ (void)loadHighlightsWithPlayerScope:(long long)arg1 timeScope:(long long)arg2 handler:(id /* block */)arg3;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadLeaderboardsWithCompletionHandler:(id /* block */)arg1;
+ (void)loadLeaderboardsWithIDs:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadLeaderboardsWithIDs:(id)arg1 game:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadLeaderboardsWithIDs:(id)arg1 setIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadLeaderboardsWithIDs:(id)arg1 setIdentifier:(id)arg2 game:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)submitScore:(long long)arg1 context:(unsigned long long)arg2 player:(id)arg3 leaderboardIDs:(id)arg4 completionHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)creator;
- (void)decrementLoadingCountAtomically;
- (id)delegate;
- (void)deleteWithHandler:(id /* block */)arg1;
- (id)description;
- (double)duration;
- (void)endWithHandler:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (void)incrementLoadingCountAtomically;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (id)initWithPlayers:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isLoading;
- (void)loadEntriesForPlayerScope:(long long)arg1 timeScope:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)loadEntriesForPlayerScope:(long long)arg1 timeScope:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)loadEntriesForPlayers:(id)arg1 timeScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)loadEntriesForPlayers:(id)arg1 timeScope:(long long)arg2 locale:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)loadEntriesWithGameDescriptor:(id)arg1 fetchOptions:(unsigned long long)arg2 playerScope:(long long)arg3 timeScope:(long long)arg4 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 completionHandler:(id /* block */)arg6;
- (void)loadEntriesWithGameDescriptor:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 completionHandler:(id /* block */)arg5;
- (void)loadEntriesWithGameDescriptor:(id)arg1 playerScope:(long long)arg2 timeScope:(long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 locale:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)loadPreviousOccurrenceWithCompletionHandler:(id /* block */)arg1;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadScoresForRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)loadScoresWithCompletionHandler:(id /* block */)arg1;
- (void)loadSummaryWithTimeScope:(long long)arg1 completionHandler:(id /* block */)arg2;
- (int)loadingCount;
- (id)localPlayerScore;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)methodSignatureForSelector:(SEL)arg1;
- (long long)playerScope;
- (id)players;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (bool)respondsToSelector:(SEL)arg1;
- (id)scoreRequestForGame:(id)arg1;
- (id)scores;
- (void)setDelegate:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLoadingCount:(int)arg1;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPlayerScope:(long long)arg1;
- (void)setPlayers:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setScores:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)startWithHandler:(id /* block */)arg1;
- (void)submitScore:(long long)arg1 context:(unsigned long long)arg2 player:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)timeScope;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)localizedStringForLeaderboardOccurrence:(long long)arg1;
+ (id)localizedStringForTimeScope:(long long)arg1;

- (id)imageURL;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)miniImageURL;

@end
