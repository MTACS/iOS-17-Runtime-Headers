
@interface HMIStoreFaceCropOperation : HMFOperation {
    <HMIHomePersonManagerDataSource> * _dataSource;
    HMIFaceCrop * _faceCrop;
}

@property (readonly) <HMIHomePersonManagerDataSource> *dataSource;
@property (readonly) HMIFaceCrop *faceCrop;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)faceCrop;
- (id)initWithDataSource:(id)arg1 faceCrop:(id)arg2;
- (void)main;

@end
