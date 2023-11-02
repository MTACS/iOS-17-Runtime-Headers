
@interface ATXContextHeuristicSuggestionProducer : NSObject

+ (id)_bundleIDWithURL:(id)arg1;
+ (id)_clientModelSpecForSpotlightRecents;
+ (id)_clientModelSpectForContextHeuristics;
+ (id)_dummyUiSpecWithTitle:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 shouldClearOnEngagement:(bool)arg4 predictionReasons:(unsigned long long)arg5;
+ (id)_executableSpecForShortcutsAction:(id)arg1;
+ (id)_executableSpecForSpotlightAction:(id)arg1;
+ (id)_mediaWithName:(id)arg1 type:(long long)arg2 adamIdentifier:(long long)arg3 umcIdentifier:(id)arg4 predictionReasons:(unsigned long long)arg5 localizedReason:(id)arg6 score:(double)arg7 expirationDate:(id)arg8;
+ (id)_suggestionWithSpotlightAction:(id)arg1 predictionReasons:(unsigned long long)arg2 localizedReason:(id)arg3 score:(double)arg4 uiSpec:(id)arg5 dateInterval:(id)arg6;
+ (id)_suggestionWithSpotlightRecentAction:(id)arg1 score:(double)arg2;
+ (id)_uiSpecWithTitle:(id)arg1 subtitle:(id)arg2 predictionReason:(id)arg3 shouldClearOnEngagement:(bool)arg4 predictionReasons:(unsigned long long)arg5 dateInterval:(id)arg6;
+ (id)createSuggestionFromShortcutsAction:(id)arg1 predictionReasons:(unsigned long long)arg2 localizedReason:(id)arg3 title:(id)arg4 subtitle:(id)arg5 score:(double)arg6 shouldClearOnEngagement:(bool)arg7 dateInterval:(id)arg8;
+ (id)dummySuggestionWithSpotlightAction:(id)arg1 predictionReasons:(unsigned long long)arg2 localizedReason:(id)arg3 score:(double)arg4;
+ (id)flightCheckInActivityWithSubtitle:(id)arg1 url:(id)arg2 teamIdentifier:(id)arg3 predictionReasons:(unsigned long long)arg4 localizedReason:(id)arg5 score:(double)arg6 validStartDate:(id)arg7 validEndDate:(id)arg8;
+ (id)mediaWithName:(id)arg1 type:(long long)arg2 adamIdentifier:(long long)arg3 predictionReasons:(unsigned long long)arg4 localizedReason:(id)arg5 score:(double)arg6 expirationDate:(id)arg7;
+ (id)mediaWithName:(id)arg1 type:(long long)arg2 umcIdentifier:(id)arg3 predictionReasons:(unsigned long long)arg4 localizedReason:(id)arg5 score:(double)arg6 expirationDate:(id)arg7;
+ (id)navigationToDestination:(id)arg1 title:(id)arg2 subtitle:(id)arg3 transportType:(unsigned long long)arg4 destinationName:(id)arg5 predictionReasons:(unsigned long long)arg6 localizedReason:(id)arg7 score:(double)arg8 shouldClearOnEngagement:(bool)arg9 validStartDate:(id)arg10 validEndDate:(id)arg11 dateInterval:(id)arg12;
+ (id)rideshareAppActionForDestination:(id)arg1 preferredBundleId:(id)arg2 predictionReasons:(unsigned long long)arg3 title:(id)arg4 localizedReason:(id)arg5 score:(double)arg6 validFromStartDate:(id)arg7 validToEndDate:(id)arg8 dateInterval:(id)arg9;
+ (id)suggestionForConferenceWithURL:(id)arg1 score:(double)arg2 predictionReasons:(unsigned long long)arg3 localizedReason:(id)arg4 criteria:(id)arg5 dateInterval:(id)arg6;
+ (id)suggestionForDNDWithTitle:(id)arg1 eventUniqueID:(id)arg2 identifier:(id)arg3 until:(id)arg4 score:(double)arg5 predictionReasons:(unsigned long long)arg6 localizedReason:(id)arg7 validFromStartDate:(id)arg8 validToEndDate:(id)arg9 dateInterval:(id)arg10;
+ (id)suggestionWithAction:(id)arg1 predictionReasons:(unsigned long long)arg2 localizedReason:(id)arg3 score:(double)arg4 dateInterval:(id)arg5;
+ (id)suggestionWithExecutableSpecification:(id)arg1 title:(id)arg2 subtitle:(id)arg3 predictionReasons:(unsigned long long)arg4 localizedReason:(id)arg5 score:(double)arg6;
+ (id)suggestionWithShortcutAction:(id)arg1 predictionReasons:(unsigned long long)arg2 localizedReason:(id)arg3 title:(id)arg4 subtitle:(id)arg5 score:(double)arg6 dateInterval:(id)arg7;
+ (id)suggestionWithSpotlightAction:(id)arg1 predictionReasons:(unsigned long long)arg2 localizedReason:(id)arg3 score:(double)arg4 dateInterval:(id)arg5;
+ (id)suggestionWithURL:(id)arg1 actionTitle:(id)arg2 subtitle:(id)arg3 bundleID:(id)arg4 score:(double)arg5 predictionReasons:(unsigned long long)arg6 criteria:(id)arg7 dateInterval:(id)arg8;
+ (id)suggestionsForRecentResults:(id)arg1;
+ (id)toggleAirplaneModeWithPredictionReasons:(unsigned long long)arg1 localizedReason:(id)arg2 score:(double)arg3 validFromStartDate:(id)arg4 validToEndDate:(id)arg5 dateInterval:(id)arg6;

@end
