
@interface HMIRemovePersonsOperation : HMFOperation {
    <HMIHomePersonManagerDataSource> * _dataSource;
    NSSet * _personUUIDs;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly) NSSet *personUUIDs;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 personUUIDs:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)personUUIDs;

@end
