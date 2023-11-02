
@interface HMIAssociateFaceCropsOperation : HMFOperation {
    <HMIHomePersonManagerDataSource> * _dataSource;
    NSSet * _faceCropUUIDs;
    NSUUID * _personUUID;
    long long  _source;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly, copy) NSSet *faceCropUUIDs;
@property (readonly, copy) NSUUID *personUUID;
@property (readonly) long long source;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceCropUUIDs;
- (id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2 personUUID:(id)arg3 source:(long long)arg4;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id)personUUID;
- (long long)source;

@end
