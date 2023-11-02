
@interface SportsKit.SportingEventSubscription : NSObject {
    void applicationType;
    void canonicalId;
    void consumers;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  eventStateURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  fullPayloadBaseURL;
    void heartbeatSessionsTTLSeconds;
    void heartbeatTTLSeconds;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  imageServiceBaseURL;
    void leagueAbbreviation;
    void leagueId;
    void liveActivityTTLSeconds;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metadata;
    void mostRecentPlay;
    void qosRegistrationId;
    void registrationId;
    void runningClock;
    void shouldDisplayPlayByPlay;
    void sport;
    void sportId;
    void sportingEventDetails;
    void statistics;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updatedAt;
    void view;
}

- (void).cxx_destruct;
- (id)init;

@end
