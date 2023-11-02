
@protocol FCReadingHistoryItem <NSObject, NSCopying, NSMutableCopying>

@required

- (NSString *)articleID;
- (unsigned long long)articleLikingStatus;
- (CKRecord *)asCKRecord;
- (NSString *)deviceID;
- (NSDate *)firstSeenAt;
- (NSDate *)firstSeenAtOfMaxVersionSeen;
- (unsigned long long)flags;
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
- (NSString *)sourceChannelTagID;

@end
