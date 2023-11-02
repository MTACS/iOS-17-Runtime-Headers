
@interface IMDCollaborationClearNoticeRateLimiter : NSObject {
    void noticeEventHistory;
    void persistenceQueue;
    void rateLimiterOverride;
}

- (void).cxx_destruct;
- (void)didSendWithNotice:(id)arg1;
- (id)init;
- (bool)shouldSendWithNotice:(id)arg1;

@end
