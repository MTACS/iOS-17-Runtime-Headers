
@interface HMIRemoveFaceCropsOperation : HMFOperation {
    <HMIHomePersonManagerDataSource> * _dataSource;
    NSSet * _faceCropUUIDs;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly) NSSet *faceCropUUIDs;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceCropUUIDs;
- (id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;

@end
