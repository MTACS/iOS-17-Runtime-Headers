
@protocol MPCQueueControllerBehaviorMusic <MPCQueueControllerBehavior, MPCQueueControllerUpNextBehavior, MPCQueueControllerReusableBehavior>

@required

- (bool)autoPlayEnabled;
- (bool)canUserChangeRepeatTypeWithReason:(id*)arg1;
- (bool)canUserChangeShuffleModeWithReason:(id*)arg1;
- (bool)canUserEnableAutoPlayWithReason:(id*)arg1;
- (NSString *)contentItemIDWithoutRepeatIteration:(NSString *)arg1;
- (NSString *)copyContentItemID:(NSString *)arg1 repeatIteration:(long long)arg2;
- (void)findFirstContentItemIDForItemIntersectingIdentifierSet:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: MPIdentifierSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getSharedQueueTracklistWithStartingContentItemID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MSVSectionedCollection *, NSIndexPath *, NSError *, void*
- (bool)isAutoPlayContentItemID:(NSString *)arg1;
- (<MPCQueueControllerBehaviorMusicDelegate> *)musicBehaviorDelegate;
- (long long)repeatType;
- (void)reshuffleWithTargetContentItemID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAutoPlayEnabled:(void *)arg1 targetContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setHostingSharedSessionID:(NSString *)arg1 reason:(NSString *)arg2;
- (void)setMusicBehaviorDelegate:(id <MPCQueueControllerBehaviorMusicDelegate>)arg1;
- (void)setRepeatType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setShuffleType:(void *)arg1 targetContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (long long)shuffleType;

@end
