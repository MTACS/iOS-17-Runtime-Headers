
@interface VUIStreamingBookmarkCache : NSObject {
    NSMutableDictionary * _bookmarkCacheStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeAccountChangedNotification:(id)arg1;
- (void)addBookmark:(id)arg1 absoluteResumeTime:(id)arg2 absoluteBookmarkTimestamp:(id)arg3 relativeResumeTime:(id)arg4 relativeBookmarkTimestamp:(id)arg5;
- (void)dealloc;
- (id)init;
- (void)removeBookmark:(id)arg1;
- (bool)resumeTimeAndTimestampByReference:(id)arg1 serverResumeTime:(id)arg2 serverBookmarkTimestamp:(id)arg3 mostRecentResumeTime:(id*)arg4 mostRecentBookmarkTimestamp:(id*)arg5;
- (void)resumeTimeInfoByReference:(id)arg1 outAbsoluteResumeTime:(id*)arg2 outAbsoluteTimestamp:(id*)arg3 outMainContentRelativeResumeTime:(id*)arg4 outMainContentRelativeTimestamp:(id*)arg5;

@end
