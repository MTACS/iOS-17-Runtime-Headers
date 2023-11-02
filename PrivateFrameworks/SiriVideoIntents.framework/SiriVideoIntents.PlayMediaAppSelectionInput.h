
@interface SiriVideoIntents.PlayMediaAppSelectionInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void result_appUsageScore1Day;
    void result_appUsageScore7Days;
    void result_clientCarConnected;
    void result_clientCarplay;
    void result_clientDaylight;
    void result_clientDevice;
    void result_clientHourOfDay;
    void result_clientIsActiveForegroundApp;
    void result_clientLocaleIdentifier;
    void result_clientLocaleLanguage;
    void result_clientLocked;
    void result_clientMotion;
    void result_clientNavigating;
    void result_clientWorkout;
    void result_entitySearchAllTimeInteractionShare;
    void result_entitySearchNormalizedSecondsSinceLastInteraction;
    void result_entitySearchTrailing10MinuteInteractionShare;
    void result_entitySearchTrailing1DayInteractionShare;
    void result_entitySearchTrailing1HourInteractionShare;
    void result_entitySearchTrailing28DayInteractionShare;
    void result_entitySearchTrailing2MinuteInteractionShare;
    void result_entitySearchTrailing6HourInteractionShare;
    void result_entitySearchTrailing7DayInteractionShare;
    void result_foregroundAppDuetElapsedSeconds;
    void result_foregroundAppIsLastUsed;
    void result_isNowPlayingApp;
    void result_isNowPlayingDuetApp;
    void result_libraryItems;
    void result_mediaNamePresent;
    void result_mediaType;
    void result_nowPlayingDuetElapsedSeconds;
    void result_nowPlayingState;
    void result_nowPlayingUsage7Days;
    void result_spotlightMatches;
    void result_subscriptionStatus;
    void supports_audiobooks;
    void supports_general;
    void supports_podcasts;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;

@end
