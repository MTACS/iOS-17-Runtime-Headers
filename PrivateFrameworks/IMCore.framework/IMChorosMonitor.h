
@interface IMChorosMonitor : NSObject <CTStewieStateMonitorDelegate> {
    CTStewieStateMonitor * _coreTelephonyStewieMonitor;
    CoreTelephonyClient * _telephonyClient;
}

@property (nonatomic, retain) CTStewieStateMonitor *coreTelephonyStewieMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CoreTelephonyClient *telephonyClient;

+ (id)chatIdentifierForRoadside:(long long)arg1;
+ (id)roadsideProviderIDFromChatIdentifier:(id)arg1;
+ (long long)serviceFromChatIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_activeServicesHasEmergency:(id)arg1;
- (id)coreTelephonyStewieMonitor;
- (id)getState;
- (id)init;
- (bool)isStewieActive;
- (bool)isStewieEmergencyActive;
- (bool)isStewieRoadsideActive;
- (long long)mostRecentlyUsedConversationForEmergency;
- (long long)mostRecentlyUsedConversationForRoadside;
- (id)mostRecentlyUsedRoadsideChatIdentifier;
- (void)openStewieAppWithCompletion:(id /* block */)arg1 chatIdentifier:(id)arg2;
- (void)placeEmergencyCallWithCompletion:(id /* block */)arg1;
- (id)roadsideBusinessIDForChatIdentifier:(id)arg1;
- (id)roadsideBusinessIDForProviderId:(long long)arg1;
- (id)roadsideProviderForProviderId:(long long)arg1;
- (id)roadsideProviderNameForChatIdentifier:(id)arg1;
- (id)roadsideProviderNameForProviderId:(long long)arg1;
- (void)setCoreTelephonyStewieMonitor:(id)arg1;
- (void)setTelephonyClient:(id)arg1;
- (bool)shouldShowTextEmergencyServicesButton;
- (bool)shouldShowTextRoadsideProviderButton;
- (void)stateChanged:(id)arg1;
- (id)telephonyClient;

@end
