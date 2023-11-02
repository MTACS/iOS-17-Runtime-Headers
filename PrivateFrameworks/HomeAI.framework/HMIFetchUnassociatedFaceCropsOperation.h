
@interface HMIFetchUnassociatedFaceCropsOperation : HMFOperation <HMFLogging, HMFObject> {
    <HMIHomePersonManagerDataSource> * _dataSource;
    NSSet * _unassociatedFaceCrops;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) NSSet *unassociatedFaceCrops;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)privateDescription;
- (id)shortDescription;
- (id)unassociatedFaceCrops;

@end
