
@interface IMDCollaborationNoticeRateLimiter : NSObject {
    NSMutableDictionary * _noticeEventHistory;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
}

@property (nonatomic, retain) NSMutableDictionary *noticeEventHistory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *persistenceQueue;

+ (long long)commentThreshold;
+ (long long)defaultThreshold;
+ (id)loadNoticeEventHistory;
+ (long long)participantChangeThreshold;
+ (id)peristencePath;

- (void).cxx_destruct;
- (id)dateLastUpdatedForURL:(id)arg1;
- (void)didSendNotice:(id)arg1;
- (id)init;
- (id)noticeEventHistory;
- (id)persistenceQueue;
- (void)saveNoticeEventHistory;
- (void)setNoticeEventHistory:(id)arg1;
- (void)setPersistenceQueue:(id)arg1;
- (bool)shouldSendNotice:(id)arg1;
- (long long)thresholdForNoticeType:(long long)arg1;

@end
