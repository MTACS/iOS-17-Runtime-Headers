
@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS> {
    NSURL * _assetPath;
    _PASNotificationToken * _assetUpdateToken;
    NSISO8601DateFormatter * _dateFormatter;
    SGReverseTemplatesJSDataDetectors * _dd;
    JSContext * _jsContext;
    JSVirtualMachine * _jsVM;
    NSString * _localeIdentifier;
    NSMutableArray * _memoryMappedFileNames;
    NSMutableArray * _memoryMappedFiles;
    NSObject<OS_dispatch_queue> * _memoryPressureQueue;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)fakeFlightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;

- (void).cxx_destruct;
- (id)_callJSFunction:(id)arg1 withArguments:(id)arg2;
- (id)_diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2;
- (id)_eventClassificationForEntity:(id)arg1;
- (id)_getFlightReferencesAndReservationId:(id)arg1;
- (void)_handleMemoryPressureStatus:(unsigned long long)arg1;
- (id)_mergeSchemas:(id)arg1 withExpectedSchemas:(id)arg2;
- (id)_prepareArguments:(id)arg1;
- (id)_prepareEntity:(id)arg1;
- (id)_privacyAwareLogsForMLExtractions:(id)arg1;
- (id)_resolveCandidatesForJSDict:(id)arg1;
- (id)_stringFromMemoryPressureStatus:(unsigned long long)arg1;
- (void)dealloc;
- (id)dictionaryFromTimezone:(id)arg1;
- (void)diffSchemas:(id)arg1 withExpectedSchemas:(id)arg2 reply:(id /* block */)arg3;
- (void)emailToJsonLd:(id)arg1 reply:(id /* block */)arg2;
- (void)emailToOutput:(id)arg1 reply:(id /* block */)arg2;
- (void)eventClassificationForEntity:(id)arg1 reply:(id /* block */)arg2;
- (id)flightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3;
- (void)flightInformationWithAirlineCode:(id)arg1 flightNumber:(id)arg2 flightDate:(id)arg3 reply:(id /* block */)arg4;
- (id)formattedDate:(id)arg1 withTimezone:(id)arg2;
- (void)freeJSContext;
- (void)getFlightReferencesAndReservationId:(id)arg1 reply:(id /* block */)arg2;
- (id)getJSContext;
- (void)holdXpcTransactionForShortDelay;
- (id)init;
- (void)initCurrentAsset;
- (id)loadJSFromASCIIFile:(id)arg1;
- (id)loadTrieWithFileName:(id)arg1;
- (id)mappedArrayBufferForFileName:(id)arg1;
- (id)md5Hash:(id)arg1;
- (void)mergeSchemas:(id)arg1 withExpectedSchemas:(id)arg2 reply:(id /* block */)arg3;
- (id)outputExceptionsFromOutput:(id)arg1;
- (void)parseHTML:(id)arg1 reply:(id /* block */)arg2;
- (id)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2;
- (void)payloadToOutputWithEntryPoint:(id)arg1 arguments:(id)arg2 reply:(id /* block */)arg3;
- (id)preprocessPackedSGMessage:(id)arg1;
- (void)privacyAwareLogsForMLExtractions:(id)arg1 reply:(id /* block */)arg2;
- (id)processLoadRequestWithFileName:(id)arg1;
- (void)refreshAssetPath;
- (void)resolveCandidatesForJSDict:(id)arg1 reply:(id /* block */)arg2;
- (id)reverseMapEntity:(id)arg1 forCategory:(id)arg2 withSchemaExpectation:(id)arg3;
- (void)schemaOrgToOutput:(id)arg1 reply:(id /* block */)arg2;
- (void)setAssetPath:(id)arg1;
- (id)sfAirportToDictionnary:(id)arg1;
- (id)sfFlightStatusToString:(int)arg1;
- (id)sfFlightsToDictionary:(id)arg1;
- (bool)shouldDownloadFull:(id)arg1;
- (void)shouldDownloadFull:(id)arg1 reply:(id /* block */)arg2;
- (void)textMessageToOutput:(id)arg1 reply:(id /* block */)arg2;

@end
