
@protocol CWFXPCRequestProtocolCoreWLAN

@required

- (void)addKnownNetworkProfile:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFNetworkProfile *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)associateWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFAssocParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)cancelRequestsWithUUID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disassociateWithReason:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performScanWithParameters:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: CWFScanParameters *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)queryAWDLOpModeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)queryAWDLPeerTrafficRegistrationWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)queryAWDLSidecarDiagnosticsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)queryAuthTypeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)queryBSSIDWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryChannelWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, CWFChannel *, void*
- (void)queryCountryCodeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryHardwareMACAddressWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryHardwareSupportedChannelsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)queryInterfaceCapabilitiesWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)queryInterfaceNameWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryInterfaceNamesWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)queryIsNetworkServiceEnabledWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryKnownNetworkProfilesWithProperties:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSSet *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)queryMACAddressWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryMCSIndexWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryMaxLinkSpeedWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryMaxNSSForAPWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryNoiseWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryNumberOfSpatialStreamsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryOpModeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryPHYModeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryParentInterfaceNameWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, void*
- (void)queryPowerDebugInfoWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (void)queryPowerStateWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)queryPowerWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryPowersaveWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryRSSIWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)querySSIDWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSData *, void*
- (void)querySecurityWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryStateWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)querySupportedChannelsWithCountryCode:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)querySupportedPHYModesWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryTxNSSWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryTxPowerWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryTxRateWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryVirtualInterfaceNamesWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)queryVirtualInterfaceRoleWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryWAPISubtypeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryWEPSubtypeWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)queryWoWEnabledWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSNumber *, void*
- (void)removeKnownNetworkProfile:(void *)arg1 reason:(void *)arg2 requestParams:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CWFNetworkProfile *, long long, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setChannel:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFChannel *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setPower:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: bool, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startMonitoringEvent:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFEventID *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopMonitoringAllEventsWithRequestParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopMonitoringEvent:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CWFEventID *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateKnownNetworkProfile:(void *)arg1 properties:(void *)arg2 OSSpecificKeys:(void *)arg3 requestParams:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: CWFNetworkProfile *, NSSet *, NSSet *, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSoftAPBand:(void *)arg1 requestParams:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned int, CWFRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end