
@interface FCCurrentIssuesCheckerResult : NSObject {
    NSArray * _autoFavoriteIssues;
    NSError * _error;
    NSArray * _followedIssues;
    NSArray * _seenIssues;
    NSArray * _unbadgedIssues;
    NSArray * _unreadFollowedIssues;
}

@property (nonatomic, retain) NSArray *autoFavoriteIssues;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *followedIssues;
@property (nonatomic, retain) NSArray *seenIssues;
@property (nonatomic, retain) NSArray *unbadgedIssues;
@property (nonatomic, retain) NSArray *unreadFollowedIssues;

- (void).cxx_destruct;
- (id)autoFavoriteIssues;
- (id)error;
- (id)followedIssues;
- (id)seenIssues;
- (void)setAutoFavoriteIssues:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFollowedIssues:(id)arg1;
- (void)setSeenIssues:(id)arg1;
- (void)setUnbadgedIssues:(id)arg1;
- (void)setUnreadFollowedIssues:(id)arg1;
- (id)unbadgedIssues;
- (id)unreadFollowedIssues;

@end
