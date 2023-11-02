
@interface SGMessageEventDissector : SGPipelineDissector <SGTextMessageProcessing> {
    NSDictionary * _dissectorConfig;
    _PASLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)allowMessageEventDissector;
+ (id)dateFromString:(id)arg1;
+ (id)describeCategory:(unsigned char)arg1;
+ (id)enrichmentsFromSchema:(id)arg1 forMessage:(id)arg2 forEntity:(id)arg3 category:(id)arg4;
+ (id)fallbackSchemaForGenericEventWithTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (bool)featureEnabled;
+ (id)getFlightInformationForFlightEventData:(id)arg1;
+ (id)loadEventClassifierModelFromPath:(id)arg1;
+ (id)loadLazyPlistWithBasename:(id)arg1;
+ (void)logMLMessageEventExtractionInteractions:(id)arg1 context:(id)arg2;
+ (unsigned char)messageEventCategoryForCategoryString:(id)arg1;
+ (bool)mobileAssetsEnabled;
+ (id)nilEntities:(id)arg1;
+ (id)schemaOrgAndMissingEntitiesForExtractedEvent:(id)arg1;
+ (id)sharedInstance;
+ (id)tupleWithEntity:(id)arg1 label:(id)arg2;

- (void).cxx_destruct;
- (id)_init;
- (void)addEnrichmentForEvents:(id)arg1 toEntity:(id)arg2 message:(id)arg3 context:(id)arg4 timingProcessingInMs:(unsigned long long)arg5;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)eventClassifierMobileAssetsPath;
- (id)eventExtractionMobileAssetsPath;
- (id)eventsFromMessage:(id)arg1 eventExtractionAssetsPath:(id)arg2;
- (bool)isDissectorProcessingWithinRateLimit;
- (bool)isMessageOfTypeEvent:(id)arg1;
- (id)loadEventClassifierModel;
- (void)logFailedEventExtractionForMessage:(id)arg1 category:(id)arg2 missingEntities:(id)arg3 timingProcessingInMs:(unsigned long long)arg4;
- (void)logFailedEventExtractionForMessage:(id)arg1 failureCode:(long long)arg2;
- (void)logMLMessageEventExtractionForSchema:(id)arg1 message:(id)arg2 category:(id)arg3 timingProcessingInMs:(unsigned long long)arg4;
- (id)schemaOrgAndMissingEntitiesForMessage:(id)arg1 withMLModelParameters:(id)arg2;
- (bool)shouldProcessTextMessage:(id)arg1 entity:(id)arg2;

@end
