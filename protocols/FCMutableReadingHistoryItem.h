
@protocol FCMutableReadingHistoryItem <FCReadingHistoryItem>

@required

- (NSString *)articleID;
- (unsigned long long)articleLikingStatus;
- (NSString *)deviceID;
- (NSDate *)firstSeenAt;
- (NSDate *)firstSeenAtOfMaxVersionSeen;
- (bool)hasArticleBeenConsumed;
- (bool)hasArticleBeenMarkedOffensive;
- (bool)hasArticleBeenRead;
- (bool)hasArticleBeenRemovedFromAudio;
- (bool)hasArticleBeenSeen;
- (bool)hasArticleCompletedListening;
- (bool)hasArticleCompletedReading;
- (NSString *)identifier;
- (bool)isPruningDisabled;
- (NSDate *)lastListenedAt;
- (NSDate *)lastVisitedAt;
- (long long)listenedCount;
- (double)listeningProgress;
- (NSDate *)listeningProgressSavedAt;
- (long long)maxVersionRead;
- (long long)maxVersionSeen;
- (long long)readCount;
- (NSString *)readingPosition;
- (NSDate *)readingPositionSavedAt;
- (void)setArticleID:(NSString *)arg1;
- (void)setArticleLikingStatus:(unsigned long long)arg1;
- (void)setDeviceID:(NSString *)arg1;
- (void)setFirstSeenAt:(NSDate *)arg1;
- (void)setFirstSeenAtOfMaxVersionSeen:(NSDate *)arg1;
- (void)setHasArticleBeenConsumed:(bool)arg1;
- (void)setHasArticleBeenMarkedOffensive:(bool)arg1;
- (void)setHasArticleBeenRead:(bool)arg1;
- (void)setHasArticleBeenRemovedFromAudio:(bool)arg1;
- (void)setHasArticleBeenSeen:(bool)arg1;
- (void)setHasArticleCompletedListening:(bool)arg1;
- (void)setHasArticleCompletedReading:(bool)arg1;
- (void)setLastListenedAt:(NSDate *)arg1;
- (void)setLastVisitedAt:(NSDate *)arg1;
- (void)setListenedCount:(long long)arg1;
- (void)setListeningProgress:(double)arg1;
- (void)setListeningProgressSavedAt:(NSDate *)arg1;
- (void)setMaxVersionRead:(long long)arg1;
- (void)setMaxVersionSeen:(long long)arg1;
- (void)setPruningDisabled:(bool)arg1;
- (void)setReadCount:(long long)arg1;
- (void)setReadingPosition:(NSString *)arg1;
- (void)setReadingPositionSavedAt:(NSDate *)arg1;
- (void)setSourceChannelTagID:(NSString *)arg1;
- (NSString *)sourceChannelTagID;

@end
