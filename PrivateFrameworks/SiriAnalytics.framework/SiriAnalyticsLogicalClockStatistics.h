
@interface SiriAnalyticsLogicalClockStatistics : NSObject {
    bool  _bookkeepingDirtied;
    unsigned long long  _endedOn;
    unsigned long long  _lastMessageEmittedOn;
    unsigned long long  _messagesEmitted;
    unsigned long long  _startedOn;
}

@property (nonatomic) bool bookkeepingDirtied;
@property (nonatomic, readonly) unsigned long long clockAgeInNanoseconds;
@property (nonatomic) unsigned long long endedOn;
@property (nonatomic) unsigned long long lastMessageEmittedOn;
@property (nonatomic) unsigned long long messagesEmitted;
@property (nonatomic) unsigned long long startedOn;
@property (nonatomic, readonly) unsigned long long utilizationLifetimeInNanoseconds;

- (bool)bookkeepingDirtied;
- (unsigned long long)clockAgeInNanoseconds;
- (unsigned long long)endedOn;
- (unsigned long long)lastMessageEmittedOn;
- (unsigned long long)messagesEmitted;
- (void)noteMessageEmitted;
- (void)setBookkeepingDirtied:(bool)arg1;
- (void)setEndedOn:(unsigned long long)arg1;
- (void)setLastMessageEmittedOn:(unsigned long long)arg1;
- (void)setMessagesEmitted:(unsigned long long)arg1;
- (void)setStartedOn:(unsigned long long)arg1;
- (unsigned long long)startedOn;
- (unsigned long long)utilizationLifetimeInNanoseconds;

@end
