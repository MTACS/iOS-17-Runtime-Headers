
@interface HMIRemoveFaceprintsOperation : HMFOperation {
    <HMIPersonManagerDataSource> * _dataSource;
    NSSet * _faceprintUUIDs;
}

@property (readonly) <HMIPersonManagerDataSource> *dataSource;
@property (readonly) NSSet *faceprintUUIDs;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceprintUUIDs;
- (id)initWithDataSource:(id)arg1 faceprintUUIDs:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;

@end
