
@interface HMIStoreFaceprintOperation : HMFOperation {
    <HMIHomePersonManagerDataSource> * _dataSource;
    HMIFaceprint * _faceprint;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly) HMIFaceprint *faceprint;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceprint;
- (id)initWithDataSource:(id)arg1 faceprint:(id)arg2;
- (void)main;

@end
