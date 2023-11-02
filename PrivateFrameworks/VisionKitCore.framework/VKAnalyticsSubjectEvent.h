
@interface VKAnalyticsSubjectEvent : VKAnalyticsEvent {
    long long  _eventType;
    long long  _interactionType;
    double  _processingDuration;
    bool  _subjectFound;
}

@property (nonatomic) long long eventType;
@property (nonatomic) long long interactionType;
@property (nonatomic) double processingDuration;
@property (nonatomic) bool subjectFound;

- (id)coreAnalyticsDictionary;
- (id)description;
- (id)eventKey;
- (long long)eventType;
- (id)initWithEventType:(long long)arg1 interactionType:(long long)arg2 subjectFound:(bool)arg3 processingDuration:(double)arg4 customIdentifier:(id)arg5;
- (long long)interactionType;
- (double)processingDuration;
- (void)setEventType:(long long)arg1;
- (void)setInteractionType:(long long)arg1;
- (void)setProcessingDuration:(double)arg1;
- (void)setSubjectFound:(bool)arg1;
- (bool)subjectFound;
- (long long)type;

@end
