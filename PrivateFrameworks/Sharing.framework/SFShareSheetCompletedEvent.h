
@interface SFShareSheetCompletedEvent : NSObject <SFCoreAnalyticsEvent> {
    NSString * _activityType;
    bool  _isCollaborative;
    unsigned long long  _presentationMs;
    NSString * _sessionID;
    bool  _success;
    unsigned long long  _totalShareTimeMs;
}

@property (nonatomic, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCollaborative;
@property (nonatomic) unsigned long long presentationMs;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long totalShareTimeMs;

+ (id)eventName;

- (void).cxx_destruct;
- (id)activityType;
- (id)eventPayload;
- (bool)isCollaborative;
- (unsigned long long)presentationMs;
- (id)sessionID;
- (void)setActivityType:(id)arg1;
- (void)setIsCollaborative:(bool)arg1;
- (void)setPresentationMs:(unsigned long long)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTotalShareTimeMs:(unsigned long long)arg1;
- (void)submitEvent;
- (bool)success;
- (unsigned long long)totalShareTimeMs;

@end
