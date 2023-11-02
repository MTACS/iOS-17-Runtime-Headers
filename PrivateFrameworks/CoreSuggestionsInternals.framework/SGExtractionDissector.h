
@interface SGExtractionDissector : SGPipelineDissector <SGInteractionProcessing, SGMailMessageProcessing, SGTextMessageProcessing> {
    _PASLock * _classifierCache;
    <SGReverseTemplateJS> * _reverseTemplateJSNoXPC;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2;
+ (id)addParams:(id)arg1 toParameterizedString:(id)arg2 allowAlternatives:(bool)arg3;
+ (id)addressDictionaryToString:(id)arg1;
+ (bool)shouldIgnoreMailMessage:(id)arg1;

- (void).cxx_destruct;
- (void)_addEnrichmentsToEntityForOutput:(id)arg1 entity:(id)arg2 startTime:(unsigned long long)arg3 backPressureHazard:(int)arg4;
- (void)_addEnrichmentsToEntityForOutput:(id)arg1 interaction:(id)arg2 entity:(id)arg3 startTime:(unsigned long long)arg4 backPressureHazard:(int)arg5;
- (id)_ensureHtmlIsString:(id)arg1;
- (void)addEnrichmentsToEntityForOutputItems:(id)arg1 exceptions:(id)arg2 jsMessageLogs:(id)arg3 interaction:(id)arg4 entity:(id)arg5 startTime:(unsigned long long)arg6 backPressureHazard:(int)arg7;
- (void)addInteractionTagsToEnrichment:(id)arg1 inEntity:(id)arg2 interaction:(id)arg3;
- (void)dealloc;
- (id)diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2;
- (void)dissectInteraction:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectURL:(id)arg1 title:(id)arg2 htmlPayload:(id)arg3 entity:(id)arg4;
- (id)enrichmentsFromSchemas:(id)arg1 inMessage:(id)arg2 parentEntity:(id)arg3;
- (id)enrichmentsFromSchemas:(id)arg1 inTextMessage:(id)arg2 parentEntity:(id)arg3;
- (id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4;
- (id)entityForOutputItem:(id)arg1 parentEntity:(id)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4 interaction:(id)arg5;
- (id)entityForOutputItem:(id)arg1 withSiblings:(id)arg2 parentEntity:(id)arg3 outputExceptions:(id)arg4 outputInfos:(id)arg5 interaction:(id)arg6;
- (id)eventActivitiesForReservationWithReference:(id)arg1 inParentEntity:(id)arg2 interaction:(id)arg3;
- (id)eventActivitiesForReservationWithSchema:(id)arg1 enrichment:(id)arg2;
- (id)eventClassificationForMailMessage:(id)arg1;
- (id)eventClassificationWithoutXPCForMailMessage:(id)arg1;
- (id)eventsFromSchemaOrgItems:(id)arg1;
- (bool)exceedsMaxHTMLContentLength:(unsigned long long)arg1;
- (id)flightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;
- (id)getAndRemoveItemReferencesFromSchemas:(id)arg1;
- (id)getFlightReferencesAndReservationId:(id)arg1;
- (id)init;
- (bool)isStructuredEventCandidateForURL:(id)arg1 title:(id)arg2;
- (id)jsDictForResolveCandidates:(id)arg1 forCategory:(id)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5;
- (id)jsonLdOutputFromMailMessage:(id)arg1;
- (id)jsonLdOutputFromPackedJSEntity:(id)arg1;
- (id)jsonLdOutputFromTextMessage:(id)arg1;
- (id)jsonLdOutputFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 extractionDate:(id)arg4;
- (id)mergeSchemas:(id)arg1 withExpectedSchemas:(id)arg2;
- (id)outputFromPackedJSMailMessage:(id)arg1;
- (id)outputFromPackedJSSchema:(id)arg1;
- (id)outputFromPackedJSTextMessage:(id)arg1;
- (id)packedJSInteractionFromInteraction:(id)arg1 bundleIdentifier:(id)arg2 creationTimestamp:(double)arg3;
- (id)packedJSMailMessageFromMailMessage:(id)arg1;
- (id)packedJSMailMessageFromMailMessage:(id)arg1 context:(id)arg2;
- (id)packedJSSchemaFromSchemaOrgItems:(id)arg1;
- (id)packedJSTextMessageFromTextMessage:(id)arg1;
- (id)packedJSURLFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3;
- (id)packedJSURLFromURL:(id)arg1 title:(id)arg2 payload:(id)arg3 creationTimestamp:(double)arg4;
- (id)parseHTML:(id)arg1;
- (id)privacyAwareLogsForMLExtractions:(id)arg1;
- (id)resolveCandidates:(id)arg1 forCategory:(id)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5;
- (id)resolveCandidatesWithoutXPC:(id)arg1 forCategory:(id)arg2 label:(id)arg3 rawIndexSet:(id)arg4 taggedCharacterRanges:(id)arg5;
- (id)reverseMapMailMessage:(id)arg1 withPreprocessedHTML:(id)arg2 forCategory:(id)arg3 withSchemExpectation:(id)arg4;
- (bool)shouldDownloadFull:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
