
@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    long long  _numberOfRenamedPersons;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) long long numberOfRenamedPersons;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithNumberOfRenamedPersons:(long long)arg1;
- (long long)numberOfRenamedPersons;

@end
