
@interface RCURLSession : NSObject {
    NSMutableDictionary * _backgroundSessions;
    RCUnfairLock * _backgroundSessionsLock;
}

@property (nonatomic, retain) NSMutableDictionary *backgroundSessions;
@property (nonatomic, retain) RCUnfairLock *backgroundSessionsLock;

+ (void)_configureURLSessionConfiguration:(id)arg1;
+ (id)_sharedSession;
+ (id)backgroundSessionForFetchConfig:(id)arg1 delegateReference:(id*)arg2;
+ (id)backgroundSessionWithIdentifier:(id)arg1 sharedContainerIdentifier:(id)arg2 timeout:(double)arg3 delegateReference:(id*)arg4;
+ (id)backgroundSessionsLock;
+ (void)cancelAllTasksOnBackgroundSessionWithFetchConfig:(id)arg1 completion:(id /* block */)arg2;
+ (id)sharedForegroundSession;

- (void).cxx_destruct;
- (id)backgroundSessions;
- (id)backgroundSessionsLock;
- (id)init;
- (void)setBackgroundSessions:(id)arg1;
- (void)setBackgroundSessionsLock:(id)arg1;

@end
