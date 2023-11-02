
@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    long long  _numberOfNamedImportedPersons;
    long long  _totalNumberOfImportedPersons;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) long long numberOfNamedImportedPersons;
@property (readonly) Class superclass;
@property (readonly) long long totalNumberOfImportedPersons;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithTotalNumberOfImportedPersons:(long long)arg1 numberOfNamedImportedPersons:(long long)arg2;
- (long long)numberOfNamedImportedPersons;
- (long long)totalNumberOfImportedPersons;

@end
