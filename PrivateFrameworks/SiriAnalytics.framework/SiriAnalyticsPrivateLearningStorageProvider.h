
@interface SiriAnalyticsPrivateLearningStorageProvider : NSObject <SiriAnalyticsMessageStorage> {
    BMSource * _source;
    BMSiriPrivateLearningSELFEventStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (bool)isAnyEventTypeAllowed:(int)arg1;
- (void)storeMessages:(id)arg1;
- (void)storeOrderedAnyEvent:(id)arg1;

@end
