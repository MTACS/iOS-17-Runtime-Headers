
@interface SiriInvocationAnalytics.PSEActionEvent : NSObject {
    void action;
    void domain;
    void donatedTimestamp;
    void duration;
    void isPostSiriEngagement;
    void sinceUIEnd;
    void sinceUIStart;
}

- (void).cxx_destruct;
- (id)init;

@end
