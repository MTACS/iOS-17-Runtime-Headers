
@interface SGStructuredEventDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addSchemaAsEnrichment:(id)arg1 inMessage:(id)arg2 parentEntity:(id)arg3 eventClassification:(id)arg4 mlDefaultExtraction:(bool)arg5;
+ (id)addressDictionaryForAddressComponents:(id)arg1;
+ (id)annotateContent:(id)arg1 withLabel:(id)arg2 forMatchingString:(id)arg3;
+ (id)annotationMatchingStringsForSubject:(id)arg1;
+ (bool)eventEnrichmentContainsReverseMappedTags:(id)arg1;
+ (id)eventEnrichmentFromEntity:(id)arg1;
+ (id)jsMessageLogsDictionaryForMailMessage:(id)arg1;
+ (id)jsMessageLogsDictionaryForPrivacyAwareLogs:(id)arg1;
+ (id)labelsWithMatchingStringsForMailMessage:(id)arg1;
+ (void)logFailedExtractionWithClassification:(id)arg1 missingEntities:(id)arg2 mlSummary:(id)arg3 shadowExtraction:(bool)arg4 timingProcessingInMs:(unsigned long long)arg5 forMessage:(id)arg6 parentEntity:(id)arg7;
+ (void)logMLExtractionForSchema:(id)arg1 mergedSchemaAndDiff:(id)arg2 parentEntity:(id)arg3 timingProcessingInMs:(unsigned long long)arg4 eventClassification:(id)arg5 mailMessage:(id)arg6 shadowExtraction:(bool)arg7 mlDefaultExtraction:(bool)arg8;
+ (void)logMLInteractions:(id)arg1 context:(id)arg2 mlDefaultExtraction:(bool)arg3;
+ (id)mergeFallbackSchema:(id)arg1 parentEntity:(id)arg2;
+ (id)nilEntities:(id)arg1;
+ (id)outputLogsForClassification:(id)arg1;
+ (id)plainTextStringsByLabelInTaggedCharacterRanges:(id)arg1 inPlainText:(id)arg2;
+ (id)preprocessDomParserResult:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5;
+ (id)preprocessWithoutXPCForHTML:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5;
+ (id)schemaOrgAndMissingEntitiesForDUFoundInEvent:(id)arg1 eventClassification:(id)arg2 fromSuggestTool:(bool)arg3;
+ (id)schemaOrgAndMissingEntitiesForPreprocessed:(id)arg1 eventClassification:(id)arg2 fromSuggestTool:(bool)arg3;
+ (id)schemaOrgAndMissingEntitiesForPreprocessed:(id)arg1 eventClassification:(id)arg2 fromSuggestTool:(bool)arg3 addressThreshold:(unsigned long long)arg4 pflTrainable:(bool)arg5 hasEvent:(bool)arg6;
+ (id)schemaPostalAddressForPostalAddressExtraction:(id)arg1 addressThreshold:(unsigned long long)arg2;
+ (id)schemaStringForDateComponents:(id)arg1;
+ (id)schemaStringForEventStatus:(unsigned char)arg1;
+ (id)schemaStringForReservationStatus:(unsigned char)arg1;
+ (id)sharedInstance;
+ (unsigned long long)tokenCount:(id)arg1;
+ (unsigned long long)tokenCountForPostalAddressComponents:(id)arg1;
+ (id)tupleWithEntity:(id)arg1 label:(id)arg2;
+ (id)tupleWithError:(id)arg1 label:(id)arg2;

- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)preprocessHTML:(id)arg1 subject:(id)arg2 epoch:(double)arg3 category:(id)arg4 labelsWithMatchingStrings:(id)arg5;
- (id)tagsWithModelOutputFromEnrichedTaggedCharacterRanges:(id)arg1;

@end
