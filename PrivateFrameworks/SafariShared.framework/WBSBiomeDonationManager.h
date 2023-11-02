
@interface WBSBiomeDonationManager : NSObject {
    _WBSBiomeStream * _autoPlayStream;
    _WBSBiomeStream * _navigationsStream;
    NSObject<OS_dispatch_queue> * _streamAccessQueue;
    _WBSBiomeStream * _webAppInFocusStream;
    _WBSBiomeStream * _webPagePerformanceStream;
}

+ (bool)isBiomeStreamDonationAvailable;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_autoPlayStream;
- (int)_biomeDeviceClassForUserAgent:(long long)arg1;
- (int)_biomeSignalForAutoPlaySignal:(long long)arg1;
- (int)_biomeWebAppInFocusWebAppTypeForWebAppType:(long long)arg1;
- (void)_clearEventsDonatedSinceDate:(id)arg1;
- (void)_donateWebPagePerformanceEventWithEvent:(int)arg1 domain:(id)arg2 webPageLoadedOverPrivateRelay:(bool)arg3;
- (id)_navigationsStream;
- (id)_webAppInFocusStream;
- (id)_webPagePerformanceStream;
- (int)_webPerformanceEventForDiagnosticLoggingKey:(id)arg1;
- (void)clearEventsDonatedSinceDate:(id)arg1;
- (void)donateAutoPlayEventWithSignal:(long long)arg1 domain:(id)arg2 countryCode:(id)arg3 webPageLoadedOverPrivateRelay:(bool)arg4;
- (bool)donateForDiagnosticLoggingKey:(id)arg1 value:(id)arg2 webPageLoadedOverPrivateRelay:(bool)arg3;
- (void)donateNavigationWithHighLevelDomain:(id)arg1 userAgent:(long long)arg2 wasPrivateRelayed:(bool)arg3 statusCode:(long long)arg4;
- (void)donateWebAppInFocusEventWithStarting:(bool)arg1 date:(id)arg2 webAppType:(long long)arg3 identifier:(id)arg4 name:(id)arg5 manifestId:(id)arg6;
- (id)init;
- (void)performPendingDeletionsBeforeTermination;

@end
