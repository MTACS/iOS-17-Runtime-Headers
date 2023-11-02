
@interface VKAnalyticsQuickActionEvent : VKAnalyticsEvent {
    long long  _eventType;
    NSString * _quickActionType;
    long long  _quickActionsCount;
    long long  _textLength;
}

@property (nonatomic) long long eventType;
@property (nonatomic, retain) NSString *quickActionType;
@property (nonatomic) long long quickActionsCount;
@property (nonatomic) long long textLength;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)eventKey;
- (long long)eventType;
- (id)initWithQuickActionType:(id)arg1 quickActionsCount:(long long)arg2 textLength:(long long)arg3 eventType:(long long)arg4 customIdentifier:(id)arg5;
- (id)quickActionType;
- (long long)quickActionsCount;
- (void)setEventType:(long long)arg1;
- (void)setQuickActionType:(id)arg1;
- (void)setQuickActionsCount:(long long)arg1;
- (void)setTextLength:(long long)arg1;
- (long long)textLength;
- (long long)type;

@end
