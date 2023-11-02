
@interface SiriInvocationAnalytics.ConversationTurn : NSObject {
    void asrEvents;
    void conversationTurnType;
    void dimEvents;
    void domain;
    void domainSource;
    void flowEvents;
    void mhEvents;
    void orchEvents;
    void timestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  turnID;
    void ueiEvents;
}

- (void).cxx_destruct;
- (id)debugString;
- (id)init;

@end
