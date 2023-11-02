
@interface HMDPhotoLibraryImportingFaceCropsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    long long  _numberOfImportedFaceCrops;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) long long numberOfImportedFaceCrops;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithNumberOfImportedFaceCrops:(long long)arg1;
- (long long)numberOfImportedFaceCrops;

@end
