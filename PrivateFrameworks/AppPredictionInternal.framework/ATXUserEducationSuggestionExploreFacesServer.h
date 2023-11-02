
@interface ATXUserEducationSuggestionExploreFacesServer : ATXUserEducationSuggestionBaseServer {
    BMBiomeScheduler * _backlightEventScheduler;
    BPSSink * _backlightEventSink;
    ATXUserEducationSuggestionConnector * _connector;
    ATXNotificationManagementMAConstants * _constants;
    NSUserDefaults * _defaults;
    ATXUserEducationSuggestionExploreFaces * _suggestion;
}

- (void).cxx_destruct;
- (void)backlightEventHandler:(id)arg1;
- (id)backlightEventSink;
- (void)cancelBacklightEventSubscription;
- (long long)gracePeriod;
- (id)initWithConnector:(id)arg1;
- (bool)isSubscribedForBacklightEvents;
- (long long)maxHour;
- (long long)minHour;
- (long long)numBacklightOffEventsBeforeDismissSuggestion;
- (void)scheduleNextTry;
- (void)sendSuggestionWithEventType:(unsigned long long)arg1;
- (void)setIsSubscribedForBacklightEvents:(bool)arg1;
- (bool)shouldNeverShowSuggestionAgain;
- (void)startUpSubscriberToBacklightBiomeStreamForTheFirstTime;
- (void)startUpSubscriberToBacklightBiomeStreamIfSubscribed;
- (id)suggestion;
- (long long)tryAgainIntervalSeconds;
- (void)tryToSendSuggestion;

@end
