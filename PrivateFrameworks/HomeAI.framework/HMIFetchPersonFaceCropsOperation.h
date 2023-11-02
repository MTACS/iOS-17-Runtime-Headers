
@interface HMIFetchPersonFaceCropsOperation : HMFOperation <HMFLogging, HMFObject> {
    <HMIPersonManagerDataSource> * _dataSource;
    HMIPerson * _person;
    NSSet * _personFaceCrops;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) <HMIPersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIPerson *person;
@property (readonly) NSSet *personFaceCrops;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 person:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)person;
- (id)personFaceCrops;
- (id)privateDescription;
- (id)shortDescription;

@end
