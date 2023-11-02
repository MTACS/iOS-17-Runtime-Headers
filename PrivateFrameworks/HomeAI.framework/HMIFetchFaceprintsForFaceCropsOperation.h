
@interface HMIFetchFaceprintsForFaceCropsOperation : HMFOperation <HMFLogging, HMFObject> {
    <HMIPersonManagerDataSource> * _dataSource;
    NSSet * _faceCropUUIDs;
    NSSet * _faceprints;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) <HMIPersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *faceCropUUIDs;
@property (readonly) NSSet *faceprints;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceCropUUIDs;
- (id)faceprints;
- (id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)privateDescription;
- (id)shortDescription;

@end
