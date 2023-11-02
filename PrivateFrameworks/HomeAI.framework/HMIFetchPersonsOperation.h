
@interface HMIFetchPersonsOperation : HMFOperation <HMFLogging, HMFObject> {
    <HMIPersonManagerDataSource> * _dataSource;
    NSSet * _persons;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) <HMIPersonManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *persons;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)persons;
- (id)privateDescription;
- (id)shortDescription;

@end
