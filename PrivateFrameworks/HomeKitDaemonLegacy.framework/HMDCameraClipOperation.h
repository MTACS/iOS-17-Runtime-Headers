
@interface HMDCameraClipOperation : HMFOperation <HMFLogging, HMFObject> {
    NSUUID * _clipModelID;
    NSDate * _creationDate;
    <HMDCameraClipOperationDataSource> * _dataSource;
    NSDate * _endDate;
    HMBLocalZone * _localZone;
    NSString * _logIdentifier;
    NSDate * _startDate;
    HMDCameraRecordingUploadOperationEvent * _uploadOperationEvent;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) NSUUID *clipModelID;
@property (readonly, copy) NSDate *creationDate;
@property (readonly) <HMDCameraClipOperationDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSDate *endDate;
@property (readonly) double executionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalZone *localZone;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) double queuedDuration;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly) HMDCameraRecordingUploadOperationEvent *uploadOperationEvent;

+ (unsigned long long)cameraClipOperationType;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_markEndDateAndSubmitUploadOperationEvent;
- (id)attributeDescriptions;
- (void)cancelWithError:(id)arg1;
- (id)clipModelID;
- (id)creationDate;
- (id)dataSource;
- (id)description;
- (id)endDate;
- (double)executionDuration;
- (id)fetchClipModel;
- (void)finish;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 dataSource:(id)arg3;
- (id)localZone;
- (id)logIdentifier;
- (void)main;
- (id)privateDescription;
- (double)queuedDuration;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)shortDescription;
- (id)startDate;
- (id)updateClipModel:(id)arg1;
- (id)uploadOperationEvent;

@end
