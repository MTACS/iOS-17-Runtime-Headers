
@interface HMIFaceMisclassificationTask : HMITask {
    <HMIHomePersonManagerDataSource> * _dataSource;
    HMIPersonFaceCrop * _faceCrop;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly) HMIPersonFaceCrop *faceCrop;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceCrop;
- (id)initWithTaskID:(int)arg1 dataSource:(id)arg2 faceCrop:(id)arg3;
- (void)mainInsideAutoreleasePool;
- (void)removeNearestFaceprint:(id)arg1 withFaceCrops:(id)arg2;

@end
