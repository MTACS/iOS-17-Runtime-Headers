
@interface HMIStoreFaceprintsOperation : HMFOperation {
    <HMIPersonManagerDataSource> * _dataSource;
    NSSet * _faceprints;
}

@property (readonly) <HMIPersonManagerDataSource> *dataSource;
@property (readonly) NSSet *faceprints;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceprints;
- (id)initWithDataSource:(id)arg1 faceprints:(id)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;

@end
