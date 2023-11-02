
@interface VKAnalyticsInteractionEvent : VKAnalyticsEvent {
    unsigned long long  _activeInteractionTypes;
    bool  _analysisButtonActive;
    long long  _ddCount;
    long long  _eventType;
    long long  _mrcCount;
    long long  _source;
    long long  _textLength;
    long long  _vsCount;
}

@property (nonatomic) unsigned long long activeInteractionTypes;
@property (nonatomic) bool analysisButtonActive;
@property (nonatomic) long long ddCount;
@property (nonatomic) long long eventType;
@property (nonatomic) long long mrcCount;
@property (nonatomic) long long source;
@property (nonatomic) long long textLength;
@property (nonatomic) long long vsCount;

- (unsigned long long)activeInteractionTypes;
- (bool)analysisButtonActive;
- (id)coreAnalyticsDictionary;
- (long long)ddCount;
- (id)description;
- (id)eventKey;
- (long long)eventType;
- (id)initWithEventType:(long long)arg1 analysis:(id)arg2 source:(long long)arg3 interactionTypes:(unsigned long long)arg4 buttonActive:(bool)arg5 customIdentifier:(id)arg6;
- (long long)mrcCount;
- (void)setActiveInteractionTypes:(unsigned long long)arg1;
- (void)setAnalysisButtonActive:(bool)arg1;
- (void)setDdCount:(long long)arg1;
- (void)setEventType:(long long)arg1;
- (void)setMrcCount:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTextLength:(long long)arg1;
- (void)setVsCount:(long long)arg1;
- (long long)source;
- (long long)textLength;
- (long long)type;
- (long long)vsCount;

@end
