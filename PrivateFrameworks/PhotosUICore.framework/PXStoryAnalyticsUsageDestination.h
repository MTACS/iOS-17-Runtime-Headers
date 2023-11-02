
@interface PXStoryAnalyticsUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    NSMutableDictionary * _sessionInfosByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDefaultPayloadForInfo:(id)arg1;
- (id)_createInfoForEvent:(id)arg1;
- (void)_enumerateExistingInfosUsingBlock:(id /* block */)arg1;
- (id)_existingInfoForEvent:(id)arg1;
- (id)_existingInfoForEvent:(id)arg1 pop:(bool)arg2;
- (id)_popInfoForEndEvent:(id)arg1;
- (void)_sendSummaryEventsForInfo:(id)arg1;
- (id)init;
- (void)processEvent:(id)arg1;

@end
