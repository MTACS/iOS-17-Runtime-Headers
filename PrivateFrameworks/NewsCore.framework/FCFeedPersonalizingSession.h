
@interface FCFeedPersonalizingSession : NSObject {
    FCDateRange * _dateRange;
    long long  _feedType;
    unsigned long long  _fixedArticleCount;
    NSString * _sessionID;
}

@property (nonatomic, retain) FCDateRange *dateRange;
@property (nonatomic) long long feedType;
@property (nonatomic) unsigned long long fixedArticleCount;
@property (nonatomic, retain) NSString *sessionID;

- (void).cxx_destruct;
- (id)dateRange;
- (long long)feedType;
- (unsigned long long)fixedArticleCount;
- (id)sessionID;
- (void)setDateRange:(id)arg1;
- (void)setFeedType:(long long)arg1;
- (void)setFixedArticleCount:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;

@end
