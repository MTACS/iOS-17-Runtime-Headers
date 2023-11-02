
@interface GKLeaderboardSummary : NSObject {
    GKLeaderboardSummaryInternal * _internal;
}

@property (nonatomic) unsigned long long friendRank;
@property (nonatomic, retain) GKLeaderboardSummaryInternal *internal;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) unsigned long long scoreValue;
@property (nonatomic) unsigned long long totalEntries;
@property (nonatomic) unsigned long long totalFriendEntries;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (void)setInternal:(id)arg1;

@end
