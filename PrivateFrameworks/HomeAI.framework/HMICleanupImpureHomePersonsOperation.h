
@interface HMICleanupImpureHomePersonsOperation : HMFOperation <HMFLogging, HMFObject> {
    HMIGreedyClustering * _clusterer;
    <HMIHomePersonManagerDataSource> * _dataSource;
    HMIFaceprinter * _faceprinter;
    NSUUID * _homeUUID;
    int  _numFailures;
    NSDate * _targetDate;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) HMIGreedyClustering *clusterer;
@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceprinter *faceprinter;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *homeUUID;
@property int numFailures;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSDate *targetDate;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)clusterer;
- (id)dataSource;
- (void)dumpFFDataToCacheForPerson:(id)arg1 personFaceCrops:(id)arg2;
- (id)faceprinter;
- (id)fetchFaceCropsForPerson:(id)arg1;
- (id)fetchOrCreateFaceprintsForCrops:(id)arg1 person:(id)arg2;
- (id)fetchPersons;
- (id)ffArchiveRootURLWithError:(id*)arg1;
- (void)handleCleanupForPerson:(id)arg1;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 dataSource:(id)arg2;
- (bool)isAffectedDate:(id)arg1;
- (bool)isIdentityPureWithFaceprints:(id)arg1 person:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (int)numFailures;
- (id)privateDescription;
- (void)purgeURLIfNeeded:(id)arg1;
- (void)reassociateFaceCropsWithUnknownSource:(id)arg1 toPersonUUID:(id)arg2;
- (void)removeFaceCropsWithUUIDs:(id)arg1;
- (void)removePerson:(id)arg1;
- (void)setNumFailures:(int)arg1;
- (id)shortDescription;
- (id)targetDate;

@end
