
@interface ATXHeuristicDataSourcesServer : NSObject <ATXHeuristicDataSources, NSXPCListenerDelegate> {
    ATXHeuristicDevice * _device;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alarmTimeOfDay:(id /* block */)arg1;
- (void)alarmsFromDate:(id)arg1 toDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)allHandlesForContact:(id)arg1 callback:(id /* block */)arg2;
- (void)appLaunchCountForBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 limit:(unsigned long long)arg4 callback:(id /* block */)arg5;
- (void)batteryInformationWithCallback:(id /* block */)arg1;
- (void)bestAppSuggestionWithCallback:(id /* block */)arg1;
- (void)bestHandleForContact:(id)arg1 service:(id)arg2 callback:(id /* block */)arg3;
- (void)birthdaysWithCallback:(id /* block */)arg1;
- (void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(id /* block */)arg3;
- (void)callNewerThan:(double)arg1 showIncoming:(bool)arg2 showOutgoing:(bool)arg3 missedOnly:(bool)arg4 callback:(id /* block */)arg5;
- (void)contactsWithEmail:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithIdentifiers:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithName:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithPhone:(id)arg1 callback:(id /* block */)arg2;
- (void)contentsWithCallback:(id /* block */)arg1;
- (void)dealloc;
- (void)duetInteractionCountForHandles:(id)arg1 sinceDate:(id)arg2 callback:(id /* block */)arg3;
- (void)favoritesWithContacts:(id)arg1 callback:(id /* block */)arg2;
- (void)fetchWidgetMetadataForAppBundleIds:(id)arg1 callback:(id /* block */)arg2;
- (void)flightStatusForFlight:(id)arg1 callback:(id /* block */)arg2;
- (void)getEventsWithProminentFeature:(id)arg1 callback:(id /* block */)arg2;
- (void)getLocationForMostRelevantTripInRangeFrom:(id)arg1 to:(id)arg2 callback:(id /* block */)arg3;
- (void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(id /* block */)arg3;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (void)isFocusModeActive:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)modeCorrelatedAppsInCurrentModeWithCallback:(id /* block */)arg1;
- (void)nlEventsWithCallback:(id /* block */)arg1;
- (void)obtainOneTimeLocationWithCallback:(id /* block */)arg1;
- (void)passesWithStyle:(id)arg1 callback:(id /* block */)arg2;
- (void)peopleSuggestionsWithCallback:(id /* block */)arg1;
- (void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(id /* block */)arg3;
- (void)timeIntervalSinceUserWakeupWithCallback:(id /* block */)arg1;
- (void)travelTimeInfoForEventID:(id)arg1 location:(id)arg2 expectedArrivalDate:(id)arg3 transportType:(id)arg4 localOnlyAfterFirstUpdate:(bool)arg5 callback:(id /* block */)arg6;
- (void)unreadMessagesWithLimit:(long long)arg1 callback:(id /* block */)arg2;
- (void)vipsWithCallback:(id /* block */)arg1;
- (void)visibleCalendarsWithCallback:(id /* block */)arg1;

@end
